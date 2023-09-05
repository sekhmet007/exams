
/*le but est de comparer deux string et de chercher les occurances dans l ordre
d'aparition sans doublon*/

#include <unistd.h> // Pour la fonction write

int main(int ac, char **av)
{
	if (ac == 3)
	{
		char *s1 = av[1];
		char *s2 = av[2];
		int found[256] = {0}; // Tableau pour marquer les caractères trouvés

		// Marquer les caractères de s2 comme trouvés dans le tableau
		for (int i = 0; s2[i] != '\0'; i++)
		{
			found[(unsigned char)s2[i]] = 1;
		}

		// Parcourir s1 et écrire les caractères communs non répétés dans s2
		for (int i = 0; s1[i] != '\0'; i++)
		{
			if (found[(unsigned char)s1[i]] == 1)
			{
				write(1, &s1[i], 1);
				found[(unsigned char)s1[i]] = 0; // Pour éviter la répétition
			}
		}
	}

	write(1, "\n", 1);
	return 0;
}

