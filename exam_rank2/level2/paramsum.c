/*afficher le nom du programme*/

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	c;

	if(nbr >= 10)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	(void)av;

	if (ac == 1)
		write(1, '\n', 1);
	else
		ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}