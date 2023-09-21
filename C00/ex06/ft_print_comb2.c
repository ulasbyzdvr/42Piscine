/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:09:22 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/09/03 19:35:16 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int a)
{
	int		onlar;
	int		birler;

	if (a < 10)
	{
		ft_putchar('0');
		ft_putchar(a + '0');
	}
	else
	{
		onlar = a / 10;
		birler = a % 10;
		ft_putchar(onlar + '0');
		ft_putchar(birler + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a);
			ft_putchar(' ');
			ft_print(b);
			if (a < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
