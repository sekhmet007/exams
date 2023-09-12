/*renvoie un pointeur sur une nouvelle chaine de caractere qui est duplique depuis src.
la memmoire occupe par cette nouvelle chaine est obtemur en appelant malloc.*/

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    char    *dest;
    int     i = 0;

    while (src[i])
        i++;
    dest = malloc(sizeof (char) * (i + 1));
    if(!dest)
        return (NULL);
    i = 0;
    while (src[i])
    {
         dest[i] = src[i];
         i++;
    }
    dest[i] = '\0';
    return (dest);
}


int main(void)
{
    char *src = "Hello world!";
    char *dup = ft_strdup(src);

    if (dup == NULL)
    {
        printf("Erreur : échec de l'allocation mémoire.\n");
        return 1;
    }

    printf("La chaîne originale est : %s\n", src);
    printf("La chaîne dupliquée est : %s\n", dup);

    free(dup);
    return 0;
}