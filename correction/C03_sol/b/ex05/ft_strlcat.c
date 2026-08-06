/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojaouad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:14:07 by ojaouad           #+#    #+#             */
/*   Updated: 2026/07/27 15:14:17 by ojaouad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dl;
	unsigned int	sl;

	dl = 0;
	sl = 0;
	while (dl < size && dest[dl])
		dl++;
	while (src[sl])
		sl++;
	if (dl == size)
		return (size + sl);
	i = 0;
	while (src[i] && (dl + i) < (size - 1))
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (dl + sl);
}
