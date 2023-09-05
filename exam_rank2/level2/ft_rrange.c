/*le fct prend deux entiers en argument start et end et renvoie un pointeur vers un tableau
aloue dynamiquement.
le tableau est rempli avec les valeurs consecutive commençant a end et se terminant a start en les incluant.*/

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i = 0;//index pour parcourir le tableau d entier
	int	size;// var pour stocker la taille du tableau
	int	*tab;// pointeur  vers le tableau d entier

	if( start > end)
		size = start - end + 1;
	else
		size = end - start + 1;

	tab = malloc(sizeof(int) * size);
	if(!tab)
		return (NULL);

	while(i < size)
	{
		if (start <= end)
			tab[i] = end ++;
		else
			tab[i] = end --;
		i++;
	}
	return (tab);
}

int main()
{
    int *arr;
    int i;

    arr = ft_rrange(1, 3);
    printf("Array: ");
    for (i = 0; i < 3; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}
