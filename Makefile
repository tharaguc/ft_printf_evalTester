CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(PF_PATH)
NAME = test
SRC = test.c
OBJ = $(SRC:%.c=%.o)
LIB = libftprintf.a

ifndef PF_PATH
	PF_PATH=../ft_printf
endif

all: $(NAME)

$(NAME): $(OBJ)
	make re -C $(PF_PATH)
	cp $(PF_PATH)/libftprintf.a $(LIB)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIB)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all