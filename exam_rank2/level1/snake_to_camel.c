/*le but est de remplacer la case snake par la case camel
supprimer les '_' dans la string et chaque mot doit commencer par une lettre majuscule*/

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] == '-')// si mon caracter est un _
			{
				i++;// alors j avance au prochain caractere 
				av[1][i] -= 32;// et je transforme ce caractere en majuscule
			}
			write(1, &av[1][i++], 1);// j ecris ma string
		}
	}
	write(1, "\n", 1);
	return (0);
}