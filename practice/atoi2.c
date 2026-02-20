#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
    char    str[] = "---++1234ab121";
    int     i;

    i = ft_atoi(str);
    printf("%d", i);
    return (0);
}

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
    {
        i++;
    }
    sign = 1;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign = sign * -1;
        }
        i++;
    }
    result = 0;
    while (str[i] >='0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    result = result * sign;
    return (result);
}