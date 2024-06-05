/*
** EPITECH PROJECT, 2021
** display_window
** File description:
** display a window
*/

#include <ncurses.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "../include/my.h"

int main(int ac, char **av)
{
    int c;
    if (ac != 2)
        return (84);
    else {
        if (av[1][0] == '-' && av[1][1] == 'h')
            usage();
        else {
            char **save = for_map(av[1]);
            int n = 0;
            initscr();
            keypad(stdscr, true);
            noecho();
            for (n = 0; save[n] != NULL; n++) {
                printw("%s\n", save[n]);
            }
            moove_the_p(save);
            endwin();
        }
    }
    return (0);
}
