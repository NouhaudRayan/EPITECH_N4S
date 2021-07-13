/*
** EPITECH PROJECT, 2021
** B-AIA-200-NCY-2-1-n4s-rayan.nouhaud
** File description:
** direction
*/

#include "struct.h"

int	choose_direction(float result, char *value)
{
    my_putstr("wheels_dir:");
    if (result < 0.0)
        my_putchar('-');
    my_putstr(value);
    value = my_getline_modif(0);
    if (end_condition(value) == 1)
        return (1);
    return (0);
}

int	handle_direction_two(nfs *use, int i)
{
    if (use->capt >= 600 && use->boolean == 0) {
        i = choose_direction(atof(use->values[1]) - atof(use->values[31]), "0.1\n");
        use->boolean = 1;
    }
    if (use->capt >= 400 && use->boolean == 0) {
        i = choose_direction(atof(use->values[1]) - atof(use->values[31]), "0.2\n");
        use->boolean = 1;
    }
    if (use->capt >= 200 && use->boolean == 0) {
        i = choose_direction(atof(use->values[1]) - atof(use->values[31]), "0.3\n");
        use->boolean = 1;
    }
    if (use->boolean == 0) {
        i = choose_direction(atof(use->values[1]) - atof(use->values[31]), "0.5\n");
        use->boolean = 1;
    }
    return (i);
}

int	handle_direction(nfs *use)
{
    int	i = 0;
    use->boolean = 0;

    if (use->capt >= 1500 && use->boolean == 0) {
        i = choose_direction(atof(use->values[1]) - atof(use->values[31]), "0.005\n");
        use->boolean = 1;
    }
    if (use->capt >= 1000 && use->boolean == 0) {
        i = choose_direction(atof(use->values[1]) - atof(use->values[31]), "0.05\n");
        use->boolean = 1;
    }
    i = handle_direction_two(use, i);
    return (i);
}

int menu_direction(nfs *use)
{
    my_putstr("GET_INFO_LIDAR\n");
    use->temp = my_getline_modif(0);
    end_condition(use->temp);
    use->temp = verif_str(use->temp);
    use->values = my_str_to_word_array_modif(use->temp, ':');
    use->capt = atof(use->values[15]);
    if (handle_direction(use) == 1)
    	return (1);
    return (0);
}