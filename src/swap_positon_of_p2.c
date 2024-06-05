/*
** EPITECH PROJECT, 2021
** swap_position_of_p2
** File description:
** for swap the position of p
*/

#include "../include/my.h"

void left1(char  **load, int *c, int u)
{
    chtype p = 'P', e = ' ', x = 'X';
    c = read_map(load);
    if (u == KEY_LEFT && load[c[0]][c[1] - 1] != '#'
        && load[c[0]][c[1] - 1]
        != 'X') {
        mvaddch(c[0], c[1], e);
        mvaddch(c[0], c[1]-1, p);
        load[c[0]][c[1]] = ' ';
        load[c[0]][c[1]-1] = 'P';
    }
    c = read_map(load);
    move(c[0], c[1]);
}

void left2(char  **load, int *c, int u)
{
    chtype p = 'P', e = ' ', x = 'X';
    c = read_map(load);
    if (u == KEY_LEFT && load[c[0]][c[1] - 1] == 'X'  &&
        load[c[0]][c[1] - 2] != 'X' &&
        load[c[0]][c[1] - 1] != 'O' &&
        load[c[0]][c[1]-2] != '#') {
        mvaddch(c[0], c[1], e);
        mvaddch(c[0], c[1]-1, p);
        mvaddch(c[0], c[1]-2, x);
        load[c[0]][c[1]] = ' ';
        load[c[0]][c[1]-1] = 'P';
        load[c[0]][c[1]-2] = 'X';
    }
    c = read_map(load);
    move(c[0], c[1]);
}

void right1(char  **load, int *c, int u)
{
    chtype p = 'P', e = ' ', x = 'X';
    c = read_map(load);
    if (u == KEY_RIGHT && load[c[0]][c[1] + 1] != '#'
        && load[c[0]][c[1] + 1] != 'X') {
        mvaddch(c[0], c[1], e);
        mvaddch(c[0], c[1]+1, p);
        load[c[0]][c[1]] = ' ';
        load[c[0]][c[1]+1] = 'P';
    }
    c = read_map(load);
    move(c[0], c[1]);
}

void right2(char  **load, int *c, int u)
{
    chtype p = 'P', e = ' ', x = 'X';
    c = read_map(load);
    if (u == KEY_RIGHT && load[c[0]][c[1] + 1] == 'X' &&
        load[c[0]][c[1] + 2] != 'X' && load[c[0]][c[1] + 1] != 'O' &&
        load[c[0]][c[1]+2] != '#') {
        mvaddch(c[0], c[1], e);
        mvaddch(c[0], c[1]+1, p);
        mvaddch(c[0], c[1]+2, x);
        load[c[0]][c[1]] = ' ';
        load[c[0]][c[1]+1] = 'P';
        load[c[0]][c[1]+2] = 'X';
    }
    c = read_map(load);
    move(c[0], c[1]);
}
