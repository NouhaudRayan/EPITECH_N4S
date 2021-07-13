/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    for (;(str[i] >= 'A' && str[i] <= 'Z') || (str [i] >= 'a' && str[i] <= 'z')
    ; i++) {
        return (1);
    }
    return (0);
}
