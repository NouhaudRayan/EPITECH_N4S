/*
** EPITECH PROJECT, 2021
** B-AIA-200-NCY-2-1-n4s-rayan.nouhaud
** File description:
** my_nfs
*/

#include "struct.h"

void my_nfs(nfs *use)
{
    use->values = NULL;
    use->temp = NULL;
    use->capt = 0;

    while (1) {
        if (menu_speed(use) == 1)
            return;
        if (menu_direction(use) == 1)
            return;
    }
}