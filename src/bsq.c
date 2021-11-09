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
        tab[y + 1][x + 1] = 1;
    else
        tab[y + 1][x + 1] = 0;
    return tab[y + 1][x + 1];
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

    for (int i = 0; map[0][i] != '\0'; i++)
        tab[0][i] = 0;
    for (int i = 0; map[i] != NULL; i++) {
        tab[i][0] = 0;
    }
    for (y = 0; map[y] != NULL; y++)
        for (x = 0; x < widght - 1; x++)
            tab[y][x] = create_tab(map, y, x, tab);
    tab = my_algo(tab, len, widght);
    check_biggest_square(tab, map);
}

int main(int ac, char **av)
{
    int wight = 0;
    int len = 0;
    if (ac != 2)
        return 84;
    char **map = my_open_read(av[1]);
    map++;
    while (map[len++] != NULL);
    while (map[1][wight++] != '\0');
    bsq(map, len + 2, wight + 2);
    free(map);
    return 0;
}