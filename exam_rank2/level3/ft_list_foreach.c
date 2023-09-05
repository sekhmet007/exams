
// #include "ft_list.h"
 #include <stdlib.h>
 #include <stdio.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;


 void   ft_list_foreach(t_list *begin_list, void (*f)(void *))
 {
        t_list *current = begin_list;

        while(current != NULL)
        {
            (*f)(current->data);

            current = current->next;
        }
 }
//current represente le pointeur vers l element courant de la list.

void print_int(void *data)
{
    printf("%d ", *(int*)data);
}

int main()
{
    t_list *list = NULL;
    int n1 = 10, n2 = 20, n3 = 30;
    list = malloc(sizeof(t_list));
    list->data = &n1;
    list->next = malloc(sizeof(t_list));
    list->next->data = &n2;
    list->next->next = malloc(sizeof(t_list));
    list->next->next->data = &n3;
    list->next->next->next = NULL;

    ft_list_foreach(list, print_int);
    printf("\n");

    free(list->next->next);
    free(list->next);
    free(list);

    return 0;
}
