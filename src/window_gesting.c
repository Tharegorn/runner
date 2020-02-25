/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** window_gesting.c
*/

#include "stuct.h"
#include "runner.h"
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>

void window_gesting(runner_t *r)
{
    sfTime timer = sfMilliseconds(30);

    r->saut = 0;
    r->h = 0;
    while (sfRenderWindow_isOpen(r->w)) {
        check_crashs(r);
        event_manager(r);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(r->second)) 
        >= sfTime_asMilliseconds(timer)) {
            calc(r);
            sfClock_restart(r->second);
        }
        draw_sprites(r);  
    }
}