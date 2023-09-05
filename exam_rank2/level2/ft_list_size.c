/*la fct doit calculer la taille d une liste chainer avec l aide d une sturcture*/

#include <stdlib.h>

typedef struct	s_list
{
	struct s_list *next;
	void	*data;
}	t_list;

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == NULL)
		return (0);
	else
		return (ft_list_size(begin_list->next) + 1);
}