#include <stdio.h>

char    *ft_reverse(char *str);

int main(void)
{
    char    str[] = "helloworld";

    ft_reverse(str);
    printf("%s", str);
    return (0);
}

char    *ft_reverse(char *str)
{
    int     size;
    int     i;
    char    tmp;

    size = 0;
    while (str[size])
    {
        size++;
    }
    i = 0;
    size--;
    while (i < size)
    {
        tmp = str[i];
        str[i] = str[size];
        str[size] = tmp;
        i++;
        size--;
    }
    return (str);
}