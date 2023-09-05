/*fct qui verifie si le nbr est une puyissance de 2*/

int is_power_of_2(unsigned int n)
{
    if(n == 0)
        return (0);

    while (n > 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            return (0);
    }
    return (1);
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