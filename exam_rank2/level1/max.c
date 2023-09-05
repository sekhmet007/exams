/* le but est de trouver la valeur max dans un tableau d entier
on retourne le resultat*/

#include <stdlib.h>

int     max(int* tab, unsigned int len)
{
    int res;// res represente la valeur max que l on retourne
    unsigned int i;

    if(len == 0 || tab == NULL)
        return (0);

    res = tab[0];
    i = 1;

    while (i < len)
    {
        if (res < tab[i])
            res = tab[i];
        i++;
    }
    return (res);
}