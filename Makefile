CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = test
SRC = test.c
OBJ = $(SRC:%.c=%.o)
FT_PRINTF_PATH = ../printf
LIBFT = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	make re -C $(FT_PRINTF_PATH)
	cp $(FT_PRINTF_PATH)/libftprintf.a $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all