/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:30:18 by orizhiy           #+#    #+#             */
/*   Updated: 2018/09/16 15:30:20 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_writer(char *str, int stream)
{
	while (*str)
	{
		write(stream, &(*str), 1);
		str++;
	}
}

void		ft_display_file(char *av)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	fd = open(av, O_RDONLY);
	if (fd == -1)
		return ;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_writer(buf, 1);
	}
	close(fd);
}

int			main(int ac, char **av)
{
	if (ac == 1)
		ft_writer("File name missing.\n", 2);
	else if (ac > 2)
		ft_writer("Too many arguments.\n", 2);
	else
		ft_display_file(av[1]);
	return (0);
}
