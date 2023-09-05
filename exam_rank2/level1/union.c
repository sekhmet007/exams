/*ce programme prend deux tring en entree et affiche sans doublon les caractere qui apparaissent
dans l'une ou l'autre des chaines. les caracterer affiche sont dans l ordre d apparition*/

#include <unistd.h> // Pour la fonction write

int main(int ac, char **av)
{
	int		i = 0;
	int		found[256] = {0};
	char	*s1 = av[1];
	char	*s2 = av[2];

	if (ac == 3)
	{
		for(i = 0; s1[i] != '\0'; i++)
		{
			if(found[(unsigned char) s1[i]] == 0)
			{
				found[(unsigned char) s1[i]] = 1;
				write(1, &s1[i], 1);
			}
		}
		for(i = 0; s2[i] != '\0'; i++)
		{
			if(found[(unsigned char) s2[i]] == 0)
			{
				found[(unsigned char) s2[i]] = 1;
				write(1, &s2[i],1);
			}
		}

	}

	write(1, "\n", 1);
	return 0;
}

