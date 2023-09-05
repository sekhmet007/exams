/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_world.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:36:10 by ecullier          #+#    #+#             */
/*   Updated: 2023/09/05 14:08:05 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*le but est d extraire et ecrire le dernier mot d une string*/

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		 while (av[1][i])//je parcours la string jusqu a la  fin
		 	i++;

		while (--i && (av[1][i]) == ' ' || av[1][i] =='\t')
		//je suis a la fin de la string et j ignore les esp et les tab
			;

		while(i && av[1][i] != ' ' && av[1][i] != '\t')
		// je suis a lafin du dernier mot et je decremente tant que j ai pas d esp ou de tab
			i--;

		if (av[1][i] == ' ' || av[1][i] == '\t')
		// je trouve le debut de dernier mot en avançant tant que c est des esp et des tab
			i++;

		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
	        // tant que ma string existe et qu je n est pas d esp ou de tab
			write(1, &av[1][i++], 1);// j ecrit le dernier mot
	}
	write(1, "\n", 1);
	return (0);
}