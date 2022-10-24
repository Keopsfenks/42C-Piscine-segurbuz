/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segurbuz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 03:45:52 by segurbuz          #+#    #+#             */
/*   Updated: 2022/10/24 12:56:42 by segurbuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar ((a / 10) + '0');
			ft_putchar ((a % 10) + '0');
			write(1, " ", 1);
			ft_putchar ((b / 10) + '0');
			ft_putchar ((b % 10) + '0');
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b += 1;
		}
		a += 1;
	}
}
