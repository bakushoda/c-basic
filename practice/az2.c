#include <unistd.h>

void    ft_putalpha(void);

int main(void)
{
    ft_putalpha();
    return (0);
}

void    ft_putalpha(void)
{
    int     i;
    char    c;
    
    i = 1;
    c = 'a';
    while (c <= 'z')
    {
        if (i % 2 == 1)
        {
            c = c - ('a' - 'A');
            write(1, &c, 1);
            c = c + ('a' - 'A');
        }
        else
        {
            write(1, &c, 1);
        }
        i++;
        c++;
    }
    write(1, "\n", 1);
}