/* la fct inverse l ordre des caractere dans une string*/

#include <stdlib.h>

char    *ft_strrev(char *str)
{
    char    *start;
    char    *end;
    char    temp;

    if(!str)
        return (NULL);

    start = str;
    end = str;

    while(*end)
        end++;
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return (str);
}

#include <stdio.h>


char	*ft_strrev(char *str);

int	main()
{
	char str[] = "Hello World";
	printf("Original string: %s\n", str);
	ft_strrev(str);
	printf("Reversed string: %s\n", str);
	return (0);
}