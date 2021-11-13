/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** check_biggest_square
*/

#include "my.h"

static int is_sup(int tab, int big_number)
{
    if (tab >= big_number) {
        big_number = tab;
        return big_number;
    }
    return big_number;
}

static int look_for_big_number(int **tab, char **map)
{
    int big_number = 0;

    for (int y = 0; map[y] != NULL; y++)
        for (int x = 0; map[y][x] != '\0'; x++)
            big_number = is_sup(tab[y][x], big_number);
    return big_number;
}

static char **modify_map(char **map, int y, int x, int big_number)
{
    int z = y - big_number;
    int z2 = x - big_number;

    for (z; y > z; y--)
        for (int x2 = x; x2 > z2; x2--)
            map[y - 1][x2 - 1] = 'x';
    return map;
}

void check_biggest_square(int **tab, char **map, int len, int widght)
{
    int big_number = look_for_big_number(tab, map);
    int a = 0;
    int x = 0;
    int y = 0;

    for (y = 1; y < len && tab[y - 1][x - 1] != big_number; y++)
        for (x = 1; x < widght && tab[y - 1][x - 1] != big_number; x++);
    map = modify_map(map, y - 1, x, big_number);
    for (int i = 0; i < len; i++){
        for (int b = 0; b < widght; b++)
            my_putchar(map[i][b]);
        my_putchar('\n');
    }
}
