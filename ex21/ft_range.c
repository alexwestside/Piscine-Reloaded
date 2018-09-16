/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:28:40 by orizhiy           #+#    #+#             */
/*   Updated: 2018/09/16 15:28:43 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = -1;
	if (min >= max)
		return (NULL);
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min))))
		return (NULL);
	while (min < max)
	{
		tab[++i] = min;
		min++;
	}
	return (tab);
}
