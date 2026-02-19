#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char    dest[10];
    char    src[] = "hello";

    ft_strcpy(dest, src);
    printf("%s", dest);
    return (0);
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
