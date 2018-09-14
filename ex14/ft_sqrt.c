
int	ft_sqrt(int nb)
{
	int	i;

	i = -1;
	if (nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (i++ <= nb / 2)
		if (i * i == nb)
			return (i);
	return (0);
}