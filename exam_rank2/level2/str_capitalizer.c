/*chaque debut de mot doit etre en majuscule et le reste en minuscule*/
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 1;//argument
	int	j;//index de l argument

	if(ac == 1)//si il n y a pas d arg ecrire le retour a la ligne
		write(1, "\n", 1);
	else
	{
		while(i < ac)//boucle pour parcourir tout les arg
		{
			j = 0;
			if(av[i][j] >= 'a' && av[i][j] <= 'z')
				av[i][j] -= 32;
			write(1, &av[i][j], 1);

			while(av[i][++j])//boucle qui pqrcours les caractere suivant de l arg
			{
				if (av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32;
				if ((av[i][j] >= 'a' && av[i][j] <= 'z') && (av[i][j - 1] == ' '
									 || av[i][j - 1] == '\t'
									 || av[i][j - 1] == '\0'))
					av[i][j] -= 32;
				write(1, &av[i][j], 1);
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}