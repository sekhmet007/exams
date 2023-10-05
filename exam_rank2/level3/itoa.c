

/*transforme des entiers en chaine de caractere inverse de atoi*/

#include    <stdlib.h>
#include    <stdio.h>

char    *ft_itoa(int nbr)
{
    int     i = 0;
    int     temp = nbr;
    char *str;

    if (nbr == -2147483648)
        return ("-2147483648");

    str = malloc(sizeof(char) * (i + 1));
    if(!str)
        return (NULL);

    str[i] ='\0';

    if (nbr == 0)
        return ("0");

    if (nbr < 0)
    {
        i++;
        nbr *= -1;
        str[0] = '-';
    }

    while (temp)
    {
        temp /= 10;
        i++;
    }

    while (nbr)
    {
        str[--i] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (str);

}

int main()
{
    int number = -12345;
    char *result = ft_itoa(number);

    if (result)
    {
        printf("Le nombre %d sous forme de chaîne est : %s\n", number, result);
        free(result); // N'oubliez pas de libérer la mémoire allouée
    }
    else
    {
        printf("Erreur lors de l'allocation mémoire.\n");
    }

    return 0;
}
