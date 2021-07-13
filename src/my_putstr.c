/*
** EPITECH PROJECT, 2021
** B-AIA-200-NCY-2-1-n4s-rayan.nouhaud
** File description:
** my_putstr
*/

#include "struct.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}