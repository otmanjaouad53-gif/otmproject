/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojaouad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 23:59:13 by ojaouad           #+#    #+#             */
/*   Updated: 2026/08/03 13:58:22 by ojaouad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	rs;

	rs = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		rs = rs * nb;
		power--;
	}
	return (rs);
}
