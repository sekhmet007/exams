
/*supprimer un noeud d une liste chainer si les data sont identique
donc il faut comperer le noeud entre eux*/

//#include "ft_list.h"
#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void    ft_list_remouv_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
        if((begin_list == NULL) || (*begin_list == NULL))
            return;

        t_list  *current = *begin_list;

        if (cmp(current->data, data_ref) == 0)
        {
                *begin_list = current->next;
                free(current);
                ft_list_remouv_if(begin_list, data_ref, cmp);
        }
        current = *begin_list;
        ft_list_remouv_if(&current->next, data_ref, cmp);
}
