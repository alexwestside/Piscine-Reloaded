/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:29:44 by orizhiy           #+#    #+#             */
/*   Updated: 2018/09/16 15:29:46 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int count_if;

	count_if = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			count_if++;
		tab++;
	}
	return (count_if);
}
