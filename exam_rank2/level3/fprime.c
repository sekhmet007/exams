/* decomposition d un nbr en facteur premier chaque nbr est seraprer par '*' */

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int nbr = atoi(av[1]);
        int diviseur = 2;

        if (nbr <= 0)//on ne peut pas decomposer un nbr inf ou = a 0
        {
            printf("\n");
            return (0);
        }

        if (nbr == 1)// cas pour nbr = a 1
        {
            printf("1\n");
            return (0);
        }

        while (nbr != 1)
        {
            if (nbr % diviseur == 0) //c est un facteur premier
            {
                printf("%d", diviseur);
                nbr /= diviseur;//mise a jour du nbr en le divisant par le diviseur
                if (nbr != 1)
                {
                    printf("*");
                }
            }
            else
            {
                diviseur++;
            }
        }
    }
    printf("\n");
    return 0;
}
