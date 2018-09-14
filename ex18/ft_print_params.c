

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