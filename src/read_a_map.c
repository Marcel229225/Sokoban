/*
** EPITECH PROJECT, 2021
** read_a_map
** File description:
** for tchek the p
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

int *read_map(char **load)
{
    int p, m;
    int  *buffer = malloc(sizeof(int) * 2);

    for (p = 0; load[p] != NULL; p++) {
        for (m = 0; load[p][m] != '\0'; m++)
            if (load[p][m] == 'P') {
                buffer[0] = p;
                buffer[1] = m;
            }
    }
    return (buffer);

}
