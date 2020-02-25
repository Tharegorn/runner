/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** check_crashs.c
*/

#include "runner.h"
#include "stuct.h"
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>

void display_text(runner_t *r)
{ 
    sfText_setPosition(r->text, (sfVector2f) { 30, 30});
    sfRenderWindow_drawText(r->w, r->text, NULL);
}

void calc_meters(runner_t *r)
{
    r->d += 15;
    if (r->d >= 1920)
        r->d = 5;
    r->meters += 0.1;
}

void check_crashs(runner_t *r)
{
    if (r->b == 930) {
        if (r->c >= 1500 && r->c <= 1650) {
            sfRenderWindow_close(r->w);
            my_putstr("Vous avez effectué un total de : ");
            my_put_nbr(r->saut);
            my_putstr(" sauts pour ");
            my_put_nbr(r->meters);
            my_putstr(" mètres parcourus !\n");
        }
    }
}