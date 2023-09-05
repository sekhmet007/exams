/*le programme prend une chaine de caractere en parametre et affiche ses mots dans
l odre inverse*/

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	next;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;// Revenir au caractere precedent '\0'

		while (i >= 0)
		{
			if (av[1][i] == ' ')// Si le caractere actuel est un espace, un mot est trouve
			{
				next = i + 1;// Boucle pour parcourir le mot inverse a partir du car suivant
				while (av[1][next] && av[1][next] != ' ')// et tant qu'il dif d 1 espace
				{
					write(1, &av[1][next], 1);
					next++;
				}
				write(1, " ", 1);
			}
			else if (i == 0)// Ou si le debut de la chaine est atteint
			{
				next = i;// Boucle pour parcourir le mot inverse a partir du car actuel
				while (av[1][next] && av[1][next] != ' ')// et tant qu'il dif d 1 espace
				{
					write(1, &av[1][next], 1);
					next++;
				}
			}
			// Passer au mot precedent
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
