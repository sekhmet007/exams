/*idem que atoi mais en base hexadecimal*/

int     ft_atoi_base(const char *str, int str_base)
{
    int     res = 0;
    int     sign = 1;
    int     i = 0;

    if(str_base >= 2 || str_base <= 16)
    {
        while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
            str++;
        if (str[i] == '-')
            sign = -1;
        if (str[i] == '-' || str[i] == '+')
            str++;
        while (str[i])
        {
            if(str[i] >='0' && str[i] <= '9')
                res = res * str_base + str[i] - '0';
            else if (str[i] >= 'a' && str[i] <= 'f')
                res = res * str_base + str[i] - 'a' + 10;
            else if ( str[i] >= 'A' && str[i] <= 'F')
                res = res *str_base + str[i] - 'A' + 10;
            else
                break;
            i++;
        }
    }
    return (sign * res);
}
#include <stdio.h>
#include <stdlib.h>

int ft_atoi_base(const char *str, int str_base);

int main()
{
	printf("%d\n", ft_atoi_base("1010", 2)); // attendu : 10
	printf("%d\n", ft_atoi_base("a", 16)); // attendu : 10
	printf("%d\n", ft_atoi_base("-1010", 2)); // attendu : -10
	printf("%d\n", ft_atoi_base("z123", 16)); // attendu : 0
	printf("%d\n", ft_atoi_base("1010", 1)); // attendu : 0
	return (0);
}