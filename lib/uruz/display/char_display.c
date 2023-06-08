/*
** EPITECH PROJECT, 2022
** loki
** File description:
** char_display
*/

#include "my.h"

int char_display(char c)
{
    return write(1, &c, 1);
}
