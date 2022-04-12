#!/bin/bash
FT_PRINTF_PATH=../printf
make re
echo -e '\n====================\n'
./test
echo -e '\n====================\n'
make fclean
make fclean -C $FT_PRINTF_PATH