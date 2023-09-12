
/*le but est d 'ecrire autant de fois une lettre de l'alphabet en fct de sa place
dans l'alphabet*/

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j;
    int multiplicateur;

    if (ac == 2)
    {
        while(av[1][i])
        {  multiplicateur = 1;
                if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                    multiplicateur = av[1][i] - 64;
                if (av[1][i] >= 'a' && av[1][i] <= 'z')
                    multiplicateur = av[1][i] - 96;
            j = 0;
            while (j < multiplicateur)
            {    write(1, &av[1][i], 1);
                j++;
            }
        i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}