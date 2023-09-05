
/*le but est d'ecrire une string a l envers*/

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while(av[1][i])// je parcours tt la chaine pour me retourver a la fin
            i++;
        while (i--)//tant que je peux d ecrementer pour retrouver le debut de la chaine 
            write(1, &av[1][i], 1);//je l ecris
    }
    write(1, "\n", 1);
    return (0);
}