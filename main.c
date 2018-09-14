//
// Created by Olexandr Rizhiy on 9/14/18.
//

#include <stdio.h>

int	ft_strlen(char *str)
{
    char *p;

    p = str;
    while (*p)
        p++;
    return (p-str);
}

char	*ft_strdup(char *src)
{
    char	*dup;
    char    *res;

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


int		main(int ac, char **av)
{
    char *res = ft_strdup("unit");
    printf("%s", res);

}