

/*la fct a pour but de trier la list donnee selon l ordre specifier par la fct de comparaison et de renvoyer
un pointeur vers le premier element de la liste triee*/

//#include "list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
    int     data;
    t_list  *next;
};

t_list  *sort_list(t_list *lst,int (*cmp)(int,int))
{
        int     swap;
        t_list  *current = lst;

        while (current->next != NULL)
        {
                if(((*cmp)(current->data, current->next->data)) == 0)
                {
                    swap = current->data;
                    current->data = current->next->data;
                    current->next->data = swap;

                    current = lst;
                }
                else
                        current = current->next;
        }
        current = lst;
        return (lst);
}
t_list	*add_int(t_list *list, int nb)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	new->data = nb;
	new->next = list;
	return (new);
}

int		ascending(int a, int b)
{
		return (a <= b);
}

int	main(void)
{
	t_list *list;

	list = NULL;
	list = add_int(list, 9);
	list = add_int(list, 3);
	list = add_int(list, 2);
	list = add_int(list, 4);
	list = add_int(list, 1);
	list = sort_list(list, &ascending);

	while(list != NULL)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
	
	return (0);
}
