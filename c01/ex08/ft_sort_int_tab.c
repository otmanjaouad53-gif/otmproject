/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojaouad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:07:57 by ojaouad           #+#    #+#             */
/*   Updated: 2026/07/20 14:08:04 by ojaouad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if(tab[x] > tab[y])
			{
				ft_swap(&tab[x], &tab[y]);
			}
			y++;
		}
		x++;
	}
}
