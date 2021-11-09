/*
** EPITECH PROJECT, 2021
** lib
** File description:
** str to array
*/

#include <stdlib.h>
#include <stdio.h>

static int my_nb_strings(char const *str, char delimiter)
{
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == delimiter)
            a++;
    return (a + 1);
}

static int my_nb_char(char const *str, char delimiter, int pos)
{
    int a = 0;

    while (str[pos] != delimiter && str[pos] != '\0') {
        a++;
        pos++;
    }
    return (a + 1);
}

char **my_str_to_array(char *str, char delimiter)
{
    int a = 0;
    int b = 0;
    int pos = 0;
    char **array = malloc(sizeof(char *) * (my_nb_strings(str, delimiter) + 1));

    for (int s = 0; s < my_nb_strings(str, delimiter); s++) {
        pos = pos + my_nb_char(str, delimiter, pos);
        array[s] = malloc(sizeof(char) * (pos + 1));
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delimiter) {
            array[a][b] = '\0';
            b = 0;
            a++;
        } else
            array[a][b++] = str[i];
    }
    array[a + 1] = NULL;
    return array;
}
