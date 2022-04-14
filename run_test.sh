# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_test.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharaguc <tharaguc@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 11:08:06 by tharaguc          #+#    #+#              #
#    Updated: 2022/04/14 11:08:07 by tharaguc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# change here
FT_PRINTF_PATH=../ft_printf

make re PF_PATH=$FT_PRINTF_PATH
echo -e '\n====================\n'
./test
echo -e '\n====================\n'
make fclean
make fclean -C $FT_PRINTF_PATH