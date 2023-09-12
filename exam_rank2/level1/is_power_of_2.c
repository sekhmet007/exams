/*fct qui verifie si le nbr est une puyissance de 2*/

int is_power_of_2(unsigned int n)
{
    if(n == 0)// si mon nbr est == a zero ce n est pas une puissance de 2
        return (0);

    while (n > 1)//tant que mon nbr est strictement sup a 1
    {
        if (n % 2 == 0)// si le reste de la divion du n par 2 est == a zero c est une puissance de 2
            n /= 2;//je divise le nbr par 2
        else
            return (0);// sinon ce n est pas une puissance donc retourne 0 pour faux
    }
    return (1);// dans ce cas le nbr est une puissance donc je retourne 1 pour vrai
}
#include <stdio.h>

int is_power_of_2(unsigned int n);

int main(void)
{
    unsigned int n;
    printf("Entrez un entier positif : ");
    scanf("%u", &n);
    if (is_power_of_2(n))
        printf("%u est une puissance de 2.\n", n);
    else
        printf("%u n'est pas une puissance de 2.\n", n);
    return 0;
}