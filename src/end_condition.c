/*
** EPITECH PROJECT, 2021
** B-AIA-200-NCY-2-1-n4s-rayan.nouhaud
** File description:
** end_condition
*/

#include "struct.h"

int	end_condition(char *str)
{
    int i = strlen(str) - 1;
    int	j = 0;
    char *result = malloc(sizeof(char *) * strlen(str));

    for (; str[i] != ':' && str[i] != '\0'; i--);
    i--;
    for (; str[i] != ':' && str[i] != '\0'; i--);
    i++;
    for (; str[i] != ':' && str[i] != '\0'; j++, i++)
        result[j] = str[i];
    result[j] = '\0';
    if (strcmp(result, "Track Cleared") == 0) {
        my_getword("stop_simulation\n");
        return (1);
    }
    return (0);
}