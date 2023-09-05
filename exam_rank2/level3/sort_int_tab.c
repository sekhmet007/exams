

/* trie a bulle : trie d un tableau d entier en ordre croissant*/

#include <stdio.h>

void    sort_int_tab(int *tab, unsigned int size)
{
    for(unsigned int elem_trie = 0; elem_trie < size - 1; elem_trie++)
    {
        for(unsigned int a_trier = 0; a_trier < size - elem_trie - 1; a_trier++)
        {
            if(tab[a_trier] > tab[a_trier + 1])
            {
                int swap = tab[a_trier];
                tab[a_trier] = tab[a_trier + 1];
                tab[a_trier + 1] = swap;
            }
        }
    }
}
int main()
{
    int arr[] = {4, 2, 7, 1, 9, 3};
    unsigned int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Avant le tri : ");
    for (unsigned int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sort_int_tab(arr, arr_size);
    printf("Après le tri : ");
    for (unsigned int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
