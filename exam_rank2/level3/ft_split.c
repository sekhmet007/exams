/*fonction split separe chaque mot d une string, les stock separerment dans un tableau
a double entre (mot et caractere de chaque mot) et ecrit en sortie chaque mot separement*/

#include <stdlib.h>
#include <stdio.h>

char    is_separator(char c)
{
    return ( c == ' ' || c == '\n' || c == '\t');
}
char    **ft_split(char *str)
{
    char    **tab;
    int         mot = 0;
    int         caractere_mot;

    tab = (char **)malloc(sizeof(char *) * 256);
    if(tab == NULL)
        return (NULL);

    while (*str)
    {
        while(is_separator (*str))
            str++;

        if(*str == '\0')
            break;

        caractere_mot = 0;

        tab[mot] = (char *)malloc(sizeof(char) * 4096);
        if (tab[mot] == NULL)
            return (NULL);

        while(*str && !is_separator(*str))
            tab[mot][caractere_mot++] = *str++;
        tab[mot][caractere_mot] = '\0';
        mot++;
    }
    tab[mot] = NULL;
    return (tab);
    }
int main(int ac, char **av)
{
	int	i = 0;
	char	**tab;

	if (ac == 2)
	{
		tab = ft_split(av[1]);
		while (tab[i] != NULL)
		{
			printf("%s\n", tab[i]);
			free(tab[i]);
			i++;
		}
    }
    free(tab);
    return 0;
}
