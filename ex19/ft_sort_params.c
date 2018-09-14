

void ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
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

void	ft_printer(int argc, char *argv[])
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

void ft_str_swap(char ***argv, int argc, int *i)
{
    *(argv[argc + 1]) = (*argv[i]);
    *(argv[i]) = *(argv[i + 1]);
    *(argv[i + 1]) = *(argv[argc + 1]);
    *i = 0;
}

int		main(int argc, char *argv[])
{
    int	i;

    i = 0;
    while (i++ < (argc - 1))
    {
        if (i + 1 < argc && ft_strcmp(argv[i + 1], argv[i]) < 0)
            ft_str_swap(&argv, argc, &i)
    }
    ft_printer(argc, argv);
    return (0);
}
