/*
** EPITECH PROJECT, 2021
** day08
** File description:
** dup a string
*/

#include <stdlib.h>

char *my_strdup(char *str)
{
    int len = my_strlen(str) + 1;
    char *dup = malloc(len);

    dup = my_strcpy(dup, str);
    dup[len - 1] = '\0';
    return dup;
}
