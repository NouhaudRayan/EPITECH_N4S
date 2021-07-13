/*
** EPITECH PROJECT, 2021
** B-AIA-200-NCY-2-1-n4s-rayan.nouhaud
** File description:
** verif_str
*/

#include "struct.h"

char *verif_str(char *str)
{
    int x = 0;
    int y = 0;
    char *tmp = malloc(sizeof(char *) * 100);

    for (; x != 3; y++)
        if (str[y] == ':')
            x++;
    x = 0;
    for (; str[y] != 0; y++)
        if ((str[y] >= '0' && str[y] <= '9')
        || str[y] == '.' || str[y] == ':') {
	        tmp[x] = str[y];
    	    x++;
	    }
    tmp[x - 1] = '\0';
    return (tmp);
}