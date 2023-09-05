/*le but est de transformer une string ecrite en case camel en snake case>
donc ont doit separer les mot par un '_' et supprimer les mujuscule*/

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                write(1, "_", 1);
                av[1][i] += 32;
            }
            write(1, &av[1][i], 1);
            i++;
        }

    }
    write(1, "\n", 1);
    return (0);
}