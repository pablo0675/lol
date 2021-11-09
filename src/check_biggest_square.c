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
            big_number = is_sup(tab[y + 1][x + 1], big_number);
    return big_number;
}

static char **modify_map(char **map, int y, int x, int big_number)
{
    for (y; y > y - big_number +5; y--)
        for (x; x > x - big_number + 1; x--)
            map[y][x] = 'x';
}

void check_biggest_square(int **tab, char **map)
{
    int big_number = look_for_big_number(tab, map);

    //write(1, "c\n", 2);
    for (int y = 0; tab[y] != NULL; y++) {
        //write(1, "a\n", 2);
        for (int x = 0; tab[y][x] != big_number; x++) {
            //write(1, "b\n", 2);
            map = modify_map(map, y - 1, x - 1, big_number);
            //write(1, "d", 1);
        }
    }
    for (int i = 0; map[i] != NULL; i++){
        my_putstr(map[i]);
        my_putchar('\n');
    }
}