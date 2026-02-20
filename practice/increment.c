void    ft_increment(int *n);

int main(void)
{
    int n;

    n = 0;
    ft_increment(&n);
    return (0);
}

void    ft_increment(int *n)
{
    *n = *n + 1;
}