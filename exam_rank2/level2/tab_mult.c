/*le but est d ecrire la table de multiplication */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int res = 0;
	int i = 0;

	while (str[i])
	{		
		if (str[i] >= '0' && str[i]  <= '9')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (res);
}
void	tab_mult(int nbr2)
{
	int  nbr1 = 1;// on commemce a 1 car on multiplie pas par 0

	while(nbr1 <= 9)
	{
		ft_putnbr(nbr1);
		write(1, " x ", 3);
		ft_putnbr(nbr2);
		write(1, " = ", 3);
		ft_putnbr(nbr1 * nbr2);
		write(1, "\n", 1);
		nb1++;
	}
}

int	main(int ac, char **av)
{	
	int nbr;
	
	if (ac != 2)
		write(1, "\n", 1);
	else if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		
		if (nbr == 0)
			return (0);
		else if (nbr >= 0)
			tab_mult(nbr);
	}
	return (0);
}
