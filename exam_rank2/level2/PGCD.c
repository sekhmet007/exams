/*programme qui permet d afficher le plus grand denominateur commun*/

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if(ac == 3)
	{
		int	nb1 = atoi(av[1]);
		int	nb2 = atoi(av[2]);
		int 	swap;

		while(nb2 != 0)
		{
			swap = nb2;
			nb2 = nb1 % nb2;
			nb1 = swap;
		}
		printf("%d", nb1);
	}
	printf("\n");
	return (0);
}