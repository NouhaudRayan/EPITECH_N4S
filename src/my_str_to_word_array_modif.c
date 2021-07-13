/*
** EPITECH PROJECT, 2021
** B-AIA-200-NCY-2-1-n4s-rayan.nouhaud
** File description:
** my_str_to_word_array_modif
*/

#include "struct.h"

char **my_str_to_word_array_modif(char *str, char lim)
{
    char **result = malloc(sizeof(char *) * strlen(str));
    int	x = 0;
    int	y = 0;
    int k = 0;

    while (str[x] != 0) {
        k = 0;
        result[y] = malloc(sizeof(char *) * strlen(str));
        while (str[x] == lim && str[x++] != 0);
        while (str[x] != lim && str[x] != 0)
            result[y][k++] = str[x++];
        result[y++][k] = 0;
        while (str[x] == lim && str[x++] != 0);
    }
    result[y] = NULL;
    return (result);
}