/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharaguc <tharaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:27:34 by tharaguc          #+#    #+#             */
/*   Updated: 2022/04/12 23:13:12 by tharaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../printf/ft_printf.h"

int	main(void)
{
	/* c */
	int a = 'A';
	int b = 'B';
	int	sys_c = printf("printf_c   : 1.%c 2.%c 3.%%\n", a, b);
	int	ft_c = ft_printf("ft_printf_c: 1.%c 2.%c 3.%%\n", a, b);
	printf("sys: %d\n", sys_c);
	printf("ft : %d\n", ft_c);
}
