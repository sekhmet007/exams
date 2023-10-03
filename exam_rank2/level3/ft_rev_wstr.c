/*le programme prend une chaine de caractere en parametre et affiche ses mots dans
l odre inverse, il ne doit pas avoir d espace suplementaire*/



#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

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
       // tab[mot][caractere_mot] = '\0';
        mot++;
    }
    tab[mot] = NULL;
    return (tab);
    }
int    ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        char **mots = ft_split(av[1]); // Split de la string
        if (mots == NULL)
          return 1;

        // trouver le nbr de mots
        
        int count_mots = 0;
        
        while (mots[count_mots] != NULL)
            count_mots++;


        // Reverse and print les mot
        
        for (i = count_mots - 1; i >= 0; i--)
        {
            write(1, mots[i], ft_strlen(mots[i]));
            if (i > 0)
            {
                write(1, " ", 1);
            }
        }

        // Free memory 
        for (i = 0; i < count_mots; i++)
        {
            free(mots[i]);
        }
        free(mots);
    }
    write(1, "\n", 1);
    return 0;
}
