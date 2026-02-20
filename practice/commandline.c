#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int found;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

    i = 0;
    while (argv[1][i])
    {
        j = 0;
        found = 0;
        while (argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
            {
                found = 1;
                break ;
            }
            j++;
        }
        if (!found)
        {
            write(1, "\n", 1);
            return (0);
        }
        i++;
    }

    write(1, argv[1], i);
    write(1, "\n", 1);
    return (0);
}