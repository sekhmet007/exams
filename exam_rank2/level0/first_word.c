
/*le but est de trouver le premier mot d une string et de l ecrire*/

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if(ac == 2)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
        i++;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
        {
            Write(1, &av[1][i++],1);
        }
    }
    write(1, "\n",1);
    return(0);
}