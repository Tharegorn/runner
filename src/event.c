/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event.c
*/

#include "runner.h"
#include "stuct.h"
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>

void event_manager(runner_t *r)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(r->w, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(r->w);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(r->w);
        if (sfKeyboard_isKeyPressed(sfKeyUp)) {
            sfSound_play(r->honteux);
            r->b = 605;
            r->saut++;
        }
        if (sfKeyboard_isKeyPressed(sfKeyDown)) {
            sfSound_play(r->couilles);
            r->b = 930;
        }
    }
}
