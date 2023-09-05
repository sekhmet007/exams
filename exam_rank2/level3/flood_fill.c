/*le but est de remplis un tableau d axe x et y avec ce qu on veux dans ce cas 'F'*/
#include <stdio.h>
#include <stdlib.h>

typedef struct s_point
{
    int x;
    int y;
} t_point;

void    fill(char **tab, t_point size, t_point cur, char to_fill)
{
    //on verifie que les point x et y ne soit pas en dehors ou sur le bord du tableau a deux demansion
    if(cur.y < 0 || cur.x < 0 || cur.y >= size.y || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
            return;

    tab[cur.y][cur.x] = 'F';
//je rempli les case gauche droite haut et bas
    fill(tab, size, (t_point){cur.y - 1, cur.x}, to_fill);
    fill(tab, size, (t_point){cur.y + 1, cur.x}, to_fill);
    fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
}
void    flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}
