/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** algo
*/

#include "my.h"

static int contagion(int **tab, int y, int x)
{
    if (tab[y][x] == 0)
        return 0;
    int minimum = tab[y - 1][x];
    if (minimum > tab[y - 1][x - 1])
        minimum = tab[y - 1][x - 1];
    if (minimum > tab[y][x - 1])
        minimum = tab[y][x - 1];
    printf("%d------", minimum);
    return (minimum + 1);
}

int **my_algo(int **tab, int len, int wight)
{
    for (int y = 1; y < len; y++) {
        for (int x = 1; x < wight; x++) {
            tab[y][x] = contagion(tab, y, x);
            printf("%d\n", tab[y][x]);
        }
    }
    return tab;
}
