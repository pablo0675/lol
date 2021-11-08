/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i = i + 1);
    return (i);
}
