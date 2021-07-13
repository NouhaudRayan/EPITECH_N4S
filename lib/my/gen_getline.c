/*
** EPITECH PROJECT, 2021
** getline file
** File description:
** matchstick
*/

#include <stdio.h>
#include <stdlib.h>

char *my_getline(void)
{
    char *text;
    size_t len = 0;
    ssize_t read;

    read = getline(&text, &len, stdin);
    if (read == -1) {
        return (NULL);
    }
    return text;
}