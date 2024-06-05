/*
** EPITECH PROJECT, 2021
** for_o
** File description:
** gestion of o
*/
#include "../include/my.h"

int count_o(char **map)
{
    int i = 0, j = 0, counter = 0;

    while (map[i] != NULL) {
        while (map[i][j] != '\0') {
            if (map[i][j] == 'O') {
                counter++;
            } j++;
        }
        j = 0;
        i++;
    }
    return (counter);
}

int **pos_o(char **map, int nb_of_o)
{
    int i = 0, j = 0, e = 0;
    int **po_o = malloc(sizeof(int *) * nb_of_o);

    while (map[i] != NULL) {
        while (map[i][j] != '\0') {
            if (map[i][j] == 'O') {
                po_o[e] = malloc(sizeof(int) * 2);
                po_o[e][0] = i, po_o[e][1] = j;
                e++;
            } j++;
        }
        j = 0;
        i++;
    }
    return (po_o);
}

char **replace_o(char **map, int **po_o, int nb_of_o, chtype o)
{
    int i = 0, e = 0;

    while (i < nb_of_o) {
        if (map[po_o[e][0]][po_o[e][1]] == ' ') {
            map[po_o[e][0]][po_o[e][1]] = 'O';
            mvaddch(po_o[e][0], po_o[e][1], o);
        }
        i++, e++;
    }
    return (map);
}
