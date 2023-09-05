
/* le but est de remplacer les lettre dans un string de la façon suivante :
a devient z, m devient m, idem pour les ;ujuscule
trouver le pivot qui m et n donc m = 109 et n = 110 == 219
M = 77 et N = 78 == 155 */
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if(ac == 2)
    {
        while(av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = 219 - av[1][i];

            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] = 155 - av[1][i];

            write(1, &av[1][i++], 1);
        }

    }
    write(1, "\n", 1);
    return (0);
}