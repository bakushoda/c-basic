#include <stdio.h>

int ft_countwords(char *str);

int main(void)
{
    char    str[] = "hello world dafld sdfkasdf";
    int     counter;

    counter = ft_countwords(str);
    printf("%d", counter);
    return (0);
}

int ft_countwords(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ')
            count++;
        i++;
    }
    return count;
}