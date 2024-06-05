/*
** EPITECH PROJECT, 2020
** My.h
** File description:
** My.h
*/

#ifndef MY_H_
#define MY_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>

void my_putchar(char c);
int my_putstr(char const *str);
void usage(void);
int *read_map(char **load);
void moove_the_p(char **load);
void up1(char  **load, int *c, int u);
void up2(char  **load, int *c, int u);
void down1(char  **load, int *c, int u);
void down2(char  **load, int *c, int u);
void left1(char  **load, int *c, int u);
void left2(char  **load, int *c, int u);
void right1(char  **load, int *c, int u);
void right2(char  **load, int *c, int u);
char **my_str_tab(char *src, char a);
int count(char *map, char a);
char **for_map(char const *filepath);
int count_o(char **map);
int **pos_o(char **map, int nb_of_o);
char **replace_o(char **map, int **po_o, int nb_of_o, chtype o);

#endif
