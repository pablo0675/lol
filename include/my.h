/*
** EPITECH PROJECT, 2021
** headers
** File description:
** lib
*/

#ifndef MY_H_
    #define MY_H_
    #define Exit_success 0
    #define Exit_failure 84
    #define atod(value) (value - '0')
    #define dtoa(value) (value + '0')
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

void my_putchar(char c);
int my_strlen(char const *str);
int my_put_nbr(int nb);
char *my_revstr(char *str);
int my_putstr(char const *str);
char *infinadd(char *str1, char *str2);
char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src, int len2);
char **my_str_to_array(char *str, char delimiter);
int my_strcmp(char const *s1, char const *s2);
char **my_open_read(char *str);
int **my_algo(int **tab, int len, int widght);
void check_biggest_square(int **tab, char **map, int len, int widght);
char *my_strdup(char *str);

#endif /* !MY_H_ */
