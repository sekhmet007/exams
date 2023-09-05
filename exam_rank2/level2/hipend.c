/*programme qui permet de savoir si une sous chaine s1 est presente dans la chaine s2
elle doit apparaitre dans le meme ordre
si s1 est contenue dans s2 alors on ecrit 1 sinon on ecrit 0*/

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0; // index pour parcourir av[1]
	int	j = 0; // index pour parcourir av[2]

	if(ac == 3)
	{
		while ( av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])// si le caractere s1 et compris dans s2
				i++;// j avance  dans av[1]
			j++;//j'avance dans av[2]
		}
		if (av[1][i] == '\0')// si j arrire a la fin ce la chaine av[1] alors tout les caractere ont ete trouve
			write(1, "1", 1);// alors dans ce cas j ecrai 1
		else   // sinon j ecris 0
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}