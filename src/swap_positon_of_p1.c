/*
** EPITECH PROJECT, 2021
** swap_position of p1
** File description:
** to swap the position
*/

#include "../include/my.h"

void up1(char  **load, int *c, int u)
{
    chtype p = 'P', e = ' ', x = 'X';
    c = read_map(load);
    if (u == KEY_UP && load[c[0] - 1][c[1]] != '#' &&
        load[c[0] - 1][c[1]] != 'X') {
        mvaddch(c[0], c[1], e);
        mvaddch(c[0]-1, c[1], p);
        load[c[0]][c[1]] = ' ';
        load[c[0]-1][c[1]] = 'P';
    }
    c = read_map(load);
    move(c[0], c[1]);
}

void up2(char  **load, int *c, int u)
{
    chtype p = 'P', e = ' ', x = 'X';
    c = read_map(load);
    if (u == KEY_UP && load[c[0] - 1][c[1]] == 'X'
        && load[c[0] - 2][c[1]] != 'X' &&
        load[c[0]-2][c[1]] != '#') {
        mvaddch(c[0], c[1], e);
        mvaddch(c[0]-1, c[1], p);
        mvaddch(c[0]-2, c[1], x);
        load[c[0]][c[1]] = ' ';
        load[c[0]-1][c[1]] = 'P';
        load[c[0]-2][c[1]] = 'X';
    }
    c = read_map(load);
    move(c[0], c[1]);
}

void down1(char  **load, int *c, int u)
{
    chtype p = 'P', e = ' ', x = 'X';
    c = read_map(load);
    if (u == KEY_DOWN && load[c[0] + 1][c[1]] != '#' &&
        load[c[0] + 1][c[1]] != 'X') {
        mvaddch(c[0], c[1], e);
        mvaddch(c[0]+1, c[1], p);
        load[c[0]][c[1]] = ' ';
        load[c[0]+1][c[1]] = 'P';
    }
    c = read_map(load);
    move(c[0], c[1]);
}

void down2(char  **load, int *c, int u)
{
    chtype p = 'P', e = ' ', x = 'X';
    c = read_map(load);
    if (u == KEY_DOWN && load[c[0] + 1][c[1]] == 'X' &&
        load[c[0] + 2][c[1]] != 'X' &&
        load[c[0] + 1][c[1]] != 'O' && load[c[0]+2][c[1]] != '#') {
        mvaddch(c[0], c[1], e);
        mvaddch(c[0]+1, c[1], p);
        mvaddch(c[0]+2, c[1], x);
        load[c[0]][c[1]] = ' ';
        load[c[0]+1][c[1]] = 'P';
        load[c[0]+2][c[1]] = 'X';
    }
    c = read_map(load);
    move(c[0], c[1]);
}
