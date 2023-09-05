/*fonction qui retourne le plus petit denominateur commun */

#include <stdio.h>

unsigned int pgcd(unsigned int nb1, unsigned int nb2)
{
    while (nb2 != 0)
    {
        unsigned int temp = nb2;
        nb2 = nb1 % nb2;
        nb1 = temp;
    }
    return (nb1);
}

unsigned int lcm(unsigned int nb1, unsigned int nb2)
{
    if (nb1 == 0 || nb2 == 0)
        return (0);
    return (nb1 * nb2) / pgcd(nb1, nb2);
}


int main(void)
{
	unsigned int a, b;
	unsigned int result;

	// Test case 1
	a = 12;
	b = 18;
	result = lcm(a, b);
	printf("LCM of %u and %u is %u\n", a, b, result);

	// Test case 2
	a = 7;
	b = 13;
	result = lcm(a, b);
	printf("LCM of %u and %u is %u\n", a, b, result);

	// Test case 3
	a = 0;
	b = 5;
	result = lcm(a, b);
	printf("LCM of %u and %u is %u\n", a, b, result);

	// Test case 4
	a = 16;
	b = 0;
	result = lcm(a, b);
	printf("LCM of %u and %u is %u\n", a, b, result);

	return (0);
}