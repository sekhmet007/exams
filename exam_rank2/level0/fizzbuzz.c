
/*le but et d ecrire fizz si c est un miltiple de 3
buzz si c est un multiple de 5 et
fizzbuzz si c est un multiple des deux
pour un nbr <= 100
si ce n est pas un multiple alors ecrire le chiffre*/

#include <unistd.h>

void    ft_putnbr(int nbr)
{
    char c;
    if(nbr >= 10)
    ft_putnbr(nbr/10);
    c = nbr % 10 + '0';
    write(1, &c, 1);
}

int main(void)
{
    int i = 0;

    while (i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1, "FizzBuzz", 8);
        else if(i % 3 == 0)
            write(1, "Fizz", 4);
        else if (i % 5 == 0)
            write(1, "Buzz", 4);
        else
            ft_putnbr(i);
        write(1, "/n", 1);
        i++;
    }
    return(0);
}