/*
** EPITECH PROJECT, 2021
** B-AIA-200-NCY-2-1-n4s-rayan.nouhaud
** File description:
** my_getword
*/

#include "struct.h"

int my_getword(char *str)
{
    my_putstr(str);
    str = my_getline_modif(0);
    if (end_condition(str) == 1)
        return (1);
    return (0);
}