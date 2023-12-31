
/*la fct calcule la longueur du segement initial de s qui ne contient que des octet
absent de reject.
elle renvoie le nbr d octet du segment initial de s.*/

#include <stdlib.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j;

    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++; 
    }
    return (i);// je retourne la taille de *s donc son index i
}

#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject);

int main(void)
{
    char str1[] = "Hello world";
    char str2[] = "Hello";
    char str3[] = "world";
    char str4[] = "12345";
    char str5[] = "67890";
    char str6[] = "1234567890";
    char reject1[] = " ";
    char reject2[] = "lo";
    char reject3[] = "789";

    printf("ft_strcspn: %zu\n", ft_strcspn(str1, reject1));
    printf("strcspn: %zu\n", strcspn(str1, reject1));

    printf("ft_strcspn: %zu\n", ft_strcspn(str1, reject2));
    printf("strcspn: %zu\n", strcspn(str1, reject2));

    printf("ft_strcspn: %zu\n", ft_strcspn(str1, reject3));
    printf("strcspn: %zu\n", strcspn(str1, reject3));

    printf("ft_strcspn: %zu\n", ft_strcspn(str2, str3));
    printf("strcspn: %zu\n", strcspn(str2, str3));

    printf("ft_strcspn: %zu\n", ft_strcspn(str4, str5));
    printf("strcspn: %zu\n", strcspn(str4, str5));

    printf("ft_strcspn: %zu\n", ft_strcspn(str6, reject3));
    printf("strcspn: %zu\n", strcspn(str6, reject3));

    return 0;
}