/*le tableau est rempli avec les valeurs consecutive commençant a start et se terminant a end en les incluant.*/

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	i = 0;//index pour parcourir le tableau
	int	size;// var pour stoker la taille
	int	*tab;//pointeur vers un tableau d entier

	if(start > end)// odre decroissant
		size = start - end + 1;
	else// orde croissant
		size = end - start + 1;

	tab = malloc(sizeof(int) * size);
	if(!tab)
		return (NULL);

	while(i < size)//boucle pour remplir le tableau
	{
		if(start <= end)
			tab[i] = start++;
		else
			tab[i] = start--;
		i++;
	}
	return (tab);
}
int	main(void)
{
	int	*range;
	int	i;

	range = ft_range(1, 3);
	i = 0;
	while (i < 3)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
