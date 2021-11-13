/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** main function
*/

#include "my.h"

int create_tab(char **map, int y, int x, int **tab)
{
    if (map[y][x] == '.')
        tab[y][x] = 1;
    else
        tab[y][x] = 0;
    return tab[y][x];
}

int bsq(char **map, int len, int widght)
{
    int **tab = malloc(sizeof(int *) * (len + 1));
    int inc = 0;

    for (inc = 0; inc < len; inc++)
        tab[inc] = malloc(sizeof(int) * widght);
    tab[inc] = NULL;
    int x = 0;
    int y = 0;
    for (y = 0; map[y] != NULL; y++)
        for (x = 0; x < widght; x++)
            tab[y][x] = create_tab(map, y, x, tab);
    tab = my_algo(tab, len, widght);
    check_biggest_square(tab, map, len, widght);
}

int main(int ac, char **av)
{
    int widght = 0;
    int len = 0;

    if (ac != 2)
        return 84;
    char **map = my_open_read(av[1]);
    map++;
    while (map[len] != NULL)
        len++;
    while (map[1][widght] != '\0')
        widght++;
    bsq(map, len, widght);
    return 0;
}