/*
** EPITECH PROJECT, 2021
** usage
** File description:
** description of the project
*/

#include "../include/my.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("      map  file representing the warehouse map, ");
    my_putstr(" containing '#'for walls, \n");
    my_putstr("           'P' for the player, 'X'");
    my_putstr("for boxes and 'O'");
    my_putstr("for storage locations.");
    exit (84);
}
