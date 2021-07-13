/*
** EPITECH PROJECT, 2021
** B-AIA-200-NCY-2-1-n4s-rayan.nouhaud
** File description:
** my_getline_modif
*/

#include "struct.h"

char *my_getline_modif(int a)
{
    static get use;

    if ((use.idx == 0 && (use.value_read = read(a, use.buf, READ_SIZE)) < 1)
    || (use.idx_line == 0 && (use.line = malloc(SIZE_MALLOC)) == NULL))
        exit(0);
    while (use.idx != use.value_read) {
        if (use.buf[use.idx] == '\n' || use.buf[use.idx] == 0) {
            use.idx += 1;
	        use.line[use.idx_line] = 0;
            use.idx_line = 0;
	        return (use.line);
	    }
        use.line[use.idx_line] = use.buf[use.idx];
        use.idx_line += 1;
        use.idx += 1;
    }
    use.idx = 0;
    my_getline_modif(a);
    return (use.line);
}