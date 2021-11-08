/*
** EPITECH PROJECT, 2021
** lib
** File description:
** str to array
*/

#include <stdlib.h>

static int my_nb_strings(char const *str, char delimiter)
{
    int a;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == delimiter)
            a++;
    return (a + 1);
}

static int my_nb_char(char const *str, char delimiter)
{
    int a = 0;

    while (str[a] != delimiter && str[a] != '\0')
        a++;
    return (a + 1);
}

char **str_to_array(char *str, char delimiter)
{
    int a = 0;
    int b = 0;
    int s = 0;
    char **array = malloc(sizeof(char *) * (my_nb_strings(str, delimiter) + 1));

    while (s < my_nb_strings(str, delimiter))
        array[s++] = malloc(sizeof(char) * (my_nb_char(str, delimiter) + 1));
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delimiter) {
            array[a][b + 1] = '\0';
            b = 0;
            a++;
        } else array[a][b++] = str[i];
    }
    array[a] = NULL;
    return array;
}

