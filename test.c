/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharaguc <tharaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:27:34 by tharaguc          #+#    #+#             */
/*   Updated: 2022/04/14 11:40:57 by tharaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_printf(const char *fmt, ...);

int	main(void)
{
	/* c */
	printf("\x1b[36m===== c =====\x1b[39m\n");
	int c1 = 'A';
	int c2 = 'B';
	int	sys_c = printf("printf_c   : 1 >> %c 2 >> %c 3 >> %%\n", c1, c2);
	int	ft_c = ft_printf("ft_printf_c: 1 >> %c 2 >> %c 3 >> %%\n", c1, c2);
	printf("sys: %d\n", sys_c);
	printf("ft : %d\n", ft_c);
	printf("\x1b[36m===== c =====\x1b[39m\n\n");

	/* s */
	printf("\x1b[36m===== s =====\x1b[39m\n");
	char	*s1 = "123456";
	char	*s2 = "ABCDEF";
	int	sys_s = printf("printf_s   : 1 >> %s 2 >> %s\n", s1 ,s2);
	int	ft_s = ft_printf("ft_printf_s: 1 >> %s 2 >> %s\n", s1 ,s2);
	printf("sys: %d\n", sys_s);
	printf("ft : %d\n", ft_s);
	printf("\x1b[36m===== s =====\x1b[39m\n\n");

	/* diu */
	printf("\x1b[36m===== diu =====\x1b[39m\n");
	int	di1 = INT_MAX;
	int	di2 = INT_MIN;
	int	di3 = 0;
	unsigned int u1 = UINT_MAX;
	int	sys_di = printf("printf_di   : 1 >> %d 2 >> %i 3 >> %d 4 >> %u\n", di1, di2, di3, u1);
	int	ft_di = ft_printf("ft_printf_di: 1 >> %d 2 >> %i 3 >> %d 4 >> %u\n", di1, di2, di3, u1);
	printf("sys: %d\n", sys_di);
	printf("ft : %d\n", ft_di);
	printf("\x1b[36m===== diu =====\x1b[39m\n\n");
	
	/* p */
	printf("\x1b[36m===== p =====\x1b[39m\n");
	int	sys_p = printf("printf_p   : 1 >> %p\n", &s1);
	int	ft_p = ft_printf("ft_printf_p: 1 >> %p\n", &s1);
	printf("sys: %d\n", sys_p);
	printf("ft : %d\n", ft_p);
	printf("\x1b[36m===== p =====\x1b[39m\n\n");

	/* xX */
	printf("\x1b[36m===== x =====\x1b[39m\n");
	int	x1 = 1234567;
	int	sys_x = printf("printf_x   : 1 >>%X 2 >> %x 3 >> %x\n", UINT_MAX, INT_MIN , x1);
	int	ft_x = ft_printf("ft_printf_x: 1 >>%X 2 >> %x 3 >> %x\n", UINT_MAX, INT_MIN, x1);
	printf("sys: %d\n", sys_x);
	printf("ft : %d\n", ft_x);
	printf("\x1b[36m===== x =====\x1b[39m\n\n");

	/* random */
	printf("\x1b[36m===== random =====\x1b[39m\n");
	int sys_r = printf("%-+5da\n", 123);
	int ft_r = ft_printf("a%aaa\n");
	printf("sys: %d\n", sys_r);
	printf("ft : %d\n", ft_r);
	printf("\x1b[36m===== random =====\x1b[39m\n");
}
