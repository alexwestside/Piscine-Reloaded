/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:28:07 by orizhiy           #+#    #+#             */
/*   Updated: 2018/09/16 15:28:09 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if ((!(*s1) && *s2) || (!(*s2) && *s1))
		return (*s1 - *s2);
	return (0);
}

void	ft_printer(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i++ < argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
}

void	ft_str_swap(char **av, int *i)
{
	av[0] = av[*i + 1];
	av[*i + 1] = av[*i];
	av[*i] = av[0];
	*i = 0;
}

int		main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i++ < (ac - 1))
		if (i + 1 < ac && ft_strcmp(av[i + 1], av[i]) < 0)
			ft_str_swap(av, &i);
	ft_printer(ac, av);
	return (0);
}
