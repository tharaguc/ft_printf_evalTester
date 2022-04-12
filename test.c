/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharaguc <tharaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:27:34 by tharaguc          #+#    #+#             */
/*   Updated: 2022/04/13 00:52:59 by tharaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_printf(const char *fmt, ...);

int	main(void)
{
	/* c */
	int c1 = 'A';
	int c2 = 'B';
	int	sys_c = printf("printf_c   : 1.%c 2.%c 3.%%\n", c1, c2);
	int	ft_c = ft_printf("ft_printf_c: 1.%c 2.%c 3.%%\n", c1, c2);
	printf("sys: %d\n", sys_c);
	printf("ft : %d\n", ft_c);

	/* s */
	char	*s1 = "123456";
	char	*s2 = "ABCDEF";
	int	sys_s = printf("printf_s   : 1. %s 2. %s\n", s1 ,s2);
	int	ft_s = ft_printf("ft_printf_s: 1. %s 2. %s\n", s1 ,s2);
	printf("sys: %d\n", sys_s);
	printf("ft : %d\n", ft_s);
}
