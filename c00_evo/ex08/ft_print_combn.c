/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segurbuz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:28:43 by segurbuz          #+#    #+#             */
/*   Updated: 2022/10/22 15:29:35 by segurbuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_output(int n, int *tab, int i)
{
	if (i == 1)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
	i = 0;
	while (i < n)
	{
		ft_putchar (tab[i] + '0');
		i++;
	}
}

void	ft_step_make(int n, int *tab)
{
	int		i;
	int		max;

	max = 9;
	i = n - 1;
	while (tab[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	tab[i] += 1;
	while (i < n)
	{
		tab[i + 1] = tab[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	int		tab[10];
	int		i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_print_output (n, tab, 0);
	while (tab[0] != 10 - n || tab[n - 1] != 9)
	{
		if (tab[n - 1] != 9)
		{
			tab[n - 1] += 1;
		}
		else
		{
			ft_step_make (n, tab);
		}
		ft_print_output (n, tab, 1);
	}
}
