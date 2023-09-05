
/*le 1 er arg est une string, le 2eme arg est une lettre qui doit etre presente dans l arg1, 
si c'est le cas le 3 arg qui est une lettre remplace la lettre du arg2 dans arg1 donc dans la string*/

#include <unistd.h>

int main(int ac , char **av)
{
     int i = 0;

     if(ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
    {
        while (av[1][i])
        {
            if (av[1][i] ==  av[2][0])
                    av[1][i] = av[3][0];
            write (1, &av[1][i++], 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}

