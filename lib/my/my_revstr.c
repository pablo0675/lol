/*
** EPITECH PROJECT, 2021
** day 06
** File description:
** revstr
*/

#include <stdio.h>

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char last = '\0';
    int len = my_strlen(str);

    for (int i = 0; i < (len / 2); i = i + 1) {
        last = str[i];
        str[i] = str[(len - 1) - i];
        str[(len - i) - 1] = last;
    }
    return (str);
}
