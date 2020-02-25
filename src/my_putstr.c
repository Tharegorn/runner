/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_putstr.c
*/

#include "runner.h"
#include <unistd.h>

void my_putstr(char *s)
{
    write (1, s, my_strlen(s));
}