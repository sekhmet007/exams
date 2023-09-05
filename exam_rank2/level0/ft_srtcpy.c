/*copier la chaine source dans la chaine de destination */

//s1 = dest s2 = src
char    ft_strcpy(char *s1, char *s2)
{
    int i =0;

    while(s2)
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}