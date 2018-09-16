/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:28:28 by orizhiy           #+#    #+#             */
/*   Updated: 2018/09/16 15:28:30 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p)
		p++;
	return (p - str);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*res;

	if (!(dup = (char *)malloc(sizeof(*dup) * ft_strlen(src) + 1)))
		return (NULL);
	res = dup;
	while (*src)
	{
		*dup = *src;
		dup++;
		src++;
	}
	*dup = '\0';
	return (res);
}
