/*
** EPITECH PROJECT, 2021
** swap_position_of_p
** File description:
** swap then position of p with space
*/

#include "../include/my.h"

void moove_the_p(char **load)
{
    chtype p = 'P', e = ' ', x = 'X', o = 'O';
    int *c = read_map(load), u, count_oo = count_o(load);
    int **po_o = pos_o(load, count_oo);
    move(c[0], c[1]);
    curs_set(1);
    while (count_o(load) > 0) {
        u = getch();
        up1(load, c, u);
        up2(load, c, u);
        load = replace_o(load, po_o, count_oo, o);
        down1(load, c, u);
        down2(load, c, u);
        load = replace_o(load, po_o, count_oo, o);
        left1(load, c, u);
        left2(load, c, u);
        load = replace_o(load, po_o, count_oo, o);
        right1(load, c, u);
        right2(load, c, u);
        load = replace_o(load, po_o, count_oo, o);
        if (count_o(load) < 0) break;
        refresh(); }
}
