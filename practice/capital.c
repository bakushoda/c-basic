#include <stdio.h>

char    *ft_capitalize(char *str);

int main(void)
{
    char    str[] = "as feuhfu dA984A";

    ft_capitalize(str);
    printf("%s", str);
    return (0);
}

char    *ft_capitalize(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }
    i = 0;
    while (str[i])
    {
        if (i == 0 || !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
                    || (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
                    || (str[i - 1] >= '0' && str[i - 1] <= '9'))
                    &&(str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
    return(str);
}