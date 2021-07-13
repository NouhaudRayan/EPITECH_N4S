/*
** EPITECH PROJECT, 2021
** main
** File description:
** bootstrap N4S
*/

#include "struct.h"

int main(void)
{
    nfs *use = malloc(sizeof(my_nfs));

    my_getword("START_SIMULATION\n");
    my_nfs(use);
    return (0);
}