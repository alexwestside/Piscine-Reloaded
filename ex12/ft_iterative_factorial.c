
int	ft_iterative_factorial(int nb)
{
	int ret;

	ret = 1;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb >= 1)
		ret *= nb--;
	return (ret);
}