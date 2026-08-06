/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojaouad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:38:49 by ojaouad           #+#    #+#             */
/*   Updated: 2026/07/18 18:40:31 by ojaouad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int x)
{
	char	c;

	c = (x / 10) + '0';
	write(1, &c, 1);
	c = (x % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = 0;
		while (b <= 99)
		{
			if (a < b)
			{
				ft_putnum(a);
				write(1, " ", 1);
				ft_putnum(b);
				if (!(a == 98 && b == 99))
					write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
