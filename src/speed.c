/*
** EPITECH PROJECT, 2021
** B-AIA-200-NCY-2-1-n4s-rayan.nouhaud
** File description:
** speed
*/

#include "struct.h"

int	handle_speed_two(nfs *use, int i)
{
    if (use->capt >= 1000 && use->boolean == 0) {
        i = my_getword("car_forward:0.5\n");
        use->boolean = 1;
    }
    if (use->capt >= 600 && use->boolean == 0) {
        i = my_getword("car_forward:0.4\n");
        use->boolean = 1;
    }
    if (use->capt >= 400 && use->boolean == 0) {
        i = my_getword("car_forward:0.2\n");
        use->boolean = 1;
    }
    if (use->boolean == 0) {
        i = my_getword("car_forward:0.1\n");
        use->boolean = 1;
    }
    return (i);
}

int	handle_speed(nfs *use)
{
    int	i = 0;
    use->boolean = 0;

    if (use->capt >= 2000 && use->boolean == 0) {
        i = my_getword("car_forward:1.0\n");
        use->boolean = 1;
    }
    if (use->capt >= 1500 && use->boolean == 0) {
        i = my_getword("car_forward:0.8\n");
        use->boolean = 1;
    }
    i = handle_speed_two(use, i);
    return (i);
}

int menu_speed(nfs *use)
{
    my_putstr("GET_INFO_LIDAR\n");
    use->temp = my_getline_modif(0);
    end_condition(use->temp);
    use->temp = verif_str(use->temp);
    use->values = my_str_to_word_array_modif(use->temp, ':');
    use->capt = atof(use->values[15]);
    if (handle_speed(use) == 1)
    	return (1);
    return (0);
}