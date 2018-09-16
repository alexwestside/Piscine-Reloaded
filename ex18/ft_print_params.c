/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:27:52 by orizhiy           #+#    #+#             */
/*   Updated: 2018/09/16 15:27:57 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 0)
		return (0);
	while (av++ && *av)
	{
		ft_putstr(*av);
		ft_putchar('\n');
	}
}
