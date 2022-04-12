#!/bin/bash

# change here
FT_PRINTF_PATH=../ft_printf

make re PF_PATH=$FT_PRINTF_PATH
echo -e '\n====================\n'
./test
echo -e '\n====================\n'
make fclean
make fclean -C $FT_PRINTF_PATH