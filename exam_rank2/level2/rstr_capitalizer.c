/*les minuscule sont transformer em mininuscule sur la derniere lettre du mot
si un  mot ne contient q une seul lettre et qu elle est en majuscule elle reste en majuscule*/

#include <unistd.h>

int	main(int ac, char ** av)
{
	int	i = 1;// argument (mot de la string)
	int 	j;//index de l argument (index du caractere du mot)

	if ( ac == 1)//si il n y a pas d arg on ecrit le retour a la ligne
		write(1, "\n", 1);
	else
	{
		while(i < ac)// bouble qui arcours tout les arg
		{
			j = 0;
			while(av[i][j])
			{
				if (av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32;
				if ((av[i][j] >= 'a' && av[i][j] <= 'z') && (av[i][j + 1] == ' '
									|| av[i][j + 1] == '\t'
									|| av[i][j + 1] == '\0'))
					av[i][j] -= 32;
				write(1, &av[i][j++], 1);
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}