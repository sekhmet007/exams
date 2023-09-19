/*programme pour afficher la sortie en hexadecimal*/

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res = 0;
	int	i = 0;

	while(str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void	print_hexa(int nbr)
{
	char c[] = "0123456789abcdef";

	if( nbr >= 16)
		print_hexa(nbr / 16);
	write(1, &c[nbr % 16], 1);
}

int	main(int ac , char **av)
{
	int nbr;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else if(ac == 2)
	{
		nbr = ft_atoi(av[1]);
		if (nbr >= 0)           // si av[1] est positif
			print_hexa(nbr);
	}
	write(1, "\n", 1);
	return (0);
}
