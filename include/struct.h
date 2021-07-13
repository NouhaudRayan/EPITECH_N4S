/*
** EPITECH PROJECT, 2021
** oy
** File description:
** yi
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define		READ_SIZE (1)
#define		SIZE_MALLOC (4096)

typedef struct {
  int		idx;
  int		idx_line;
  int		k;
  int		value_read;
  char		buf[READ_SIZE];
  char		*line;
} get;

typedef struct {
    char **values;
    char *temp;
    float capt;
    int left_capt;
    int right_capt;
    int boolean;
} nfs;

void my_nfs(nfs *);

int menu_speed(nfs *);

int my_getword(char *);

void my_putchar(char c);

void my_putstr(char *str);

char *my_getline_modif(int a);

int	end_condition(char *str);

int my_getword(char *str);

char *verif_str(char *str);

char **my_str_to_word_array_modif(char *str, char lim);

int	choose_direction(float result, char *value);

int	handle_direction(nfs *use);

int menu_direction(nfs *use);

char *my_good_str(char *);

#endif /* !MATCHSTICK_H_ */