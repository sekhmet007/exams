/* le but est de savoir si un nbr est nbr premier
un nbr premier est un nbr divisible par 1 et par lui-meme
attention 1 n est pas un nbr premier */

#include <unistd.h>

void    ft_putnbr(int nbr)
{
    char c;

    if(nbr >= 10)
        ft_putnbr(nbr / 10);
    c = nbr % 10 + '0';
    write(1, &c, 1);
}

int     ft_atoi(char *str)
{
    int res = 0;
    int i = 0;

    while (str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res);
}
int     is_prime(int nbr)
{
    if( nbr <= 1)
        return (0);

    for (int i = 0; i * i <= nbr; i++)
    {
        if (nbr % i == 0)
            retrun (0);
    }
    return (1);
}


int     main(int ac, char ** av)
{
    if(ac != 2)
    {
        write(1, "\n", 1);
        return(0);
    }

    int limit = ft_atoi(av[1]);

    if(limit <= 0)
    {
        write(1, "\n", 1);
        return (0);
    }

    int sum = 0; //sum = somme => res

    for(int i = 2; i <= limit; i++)
    {
        if(is_prime(i))
            sum += 1;
    }
    ft_putnbr(sum);
    write(1, "\n", 1);
    return (0);
}
