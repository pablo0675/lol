/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** my_putstr.c
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i = i + 1)
        my_putchar(str[i]);
    return (0);
}
