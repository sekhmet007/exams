
/*le premier mot devient le dernier : rotation d un mot vers la gauche*/
#include <unistd.h>

int     main(int ac, char **av)
{
        int     i = 0;
        int     start;
        int     end;
        int     space = 0; //on utilis uniquement a 1 lorsque on veut signaler un espace ou tab

        if(ac > 1 && av[1][0])//verifie s'il y a  plus d un arg et que la chaine n est pas vide
        {
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;

            start = i;

            while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
                i++;

            end = i;

            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;

            while(av[1][i])
            {
                    while ((av[1][i] == ' ' && av[1][i + 1] == ' ')
                                            || (av[1][i] == '\t'  && av[1][i + 1] == '\t'))
                            i++;
                    if (av[1][i] == ' ' || av[1][i] == '\t')

                            space = 1;

                    write(1, &av[1][i++],1);
            }
            if(space)
                write(1, " ", 1);

            while(start < end)
            {
                write(1, &av[1][start++], 1);
            }

        }
        write(1, "\n", 1);
        return(0);
}
