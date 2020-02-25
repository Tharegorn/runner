/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** draw_sprites.c
*/

#include "stuct.h"
#include "runner.h"
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>

void draw_sprites(runner_t *r)
{
    sfTime timed = sfMilliseconds(1);

    display_ground(r);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(r->first))
    >= sfTime_asMilliseconds(timed)) {
        draw_obs(r);
        sfClock_restart(r->first);
    }
    draw_clouds(r);
    draw_player(r);
    display_text(r);
    sfRenderWindow_display(r->w);
}
