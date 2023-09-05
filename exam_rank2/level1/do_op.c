/* le but est de gerer l'ensemble des operateur arithmetique
le 1arg et le 3arg sont des entiers ne base 10 et le 2arg est l operateur + -  * / % */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac == 4)
    {
        if (av[2][0] == '+')
            printf ("%d", (atoi(av[1])) + (atoi(av[3])));
        if (av[2][0] == '-')
            printf ("%d", (atoi(av[1])) - (atoi(av[3])));
        if (av[2][0] == '*')
            printf ("%d", (atoi(av[1])) * (atoi(av[3])));
        if (av[2][0] == '/')
            printf ("%d", (atoi(av[1])) / (atoi(av[3])));
        if (av[2][0] == '%')
            printf ("%d", (atoi(av[1])) %  (atoi (av[3])));
    }
    printf("\n");
    return(0);
}