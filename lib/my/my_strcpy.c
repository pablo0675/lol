/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** my_strcpy.c
*/

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src, int len2)
{
    int len = my_strlen(src);

    for (int i = 0; src[i] != '\0'; i = i + 1)
        dest[i] = src[i];
    dest[len2] = '\0';
    return (dest);
}
