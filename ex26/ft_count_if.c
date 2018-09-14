

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
