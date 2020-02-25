/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** display_sprite.c
*/

#include "stuct.h"
#include "runner.h"
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>

void draw_obs(runner_t *r)
{
    sfSprite_setPosition(r->sobs, (sfVector2f) {r->c, 790});
    sfRenderWindow_drawSprite(r->w, r->sobs, NULL);
}

void draw_player(runner_t *r)
{
    sfSprite_setTextureRect(r->player, r->rect);
    sfSprite_setRotation(r->player, 180);
    sfSprite_setPosition(r->player, (sfVector2f) {r->a, r->b});
    sfRenderWindow_drawSprite(r->w, r->player, NULL);
}
void draw_clouds(runner_t *r)
{
    sfSprite_setPosition(r->cloud_one, (sfVector2f) {r->d + 900, 400});
    sfRenderWindow_drawSprite(r->w, r->cloud_one, NULL);
    sfSprite_setPosition(r->cloud_two, (sfVector2f) {r->d + 69, 350});
    sfRenderWindow_drawSprite(r->w, r->cloud_two, NULL);
    sfSprite_setPosition(r->cloud_three, (sfVector2f) {r->d - 99, 210});
    sfRenderWindow_drawSprite(r->w, r->cloud_three, NULL);
    sfSprite_setPosition(r->cloud_four, (sfVector2f) {r->d + 325, 45});
    sfRenderWindow_drawSprite(r->w, r->cloud_four, NULL);
    sfSprite_setPosition(r->cloud_five, (sfVector2f) {r->d - 700, 290});
    sfRenderWindow_drawSprite(r->w, r->cloud_five, NULL);
    sfSprite_setPosition(r->cloud_six, (sfVector2f) {r->d - 425, 170});
    sfRenderWindow_drawSprite(r->w, r->cloud_six, NULL);
}

void calc(runner_t *r)
{
    r->ground.left = r->ground.left + 5;
    if (r->ground.left >= 2010) {
        r->ground.left = 0;
    }
    r->c += 10 + rand()%60;
    if (r->c >= 1780)
        r->c = 10;
    r->rect.left = r->rect.left + 291;
    if (r->rect.left >= 1161 && r->rect.top >= 1431) {
        r->rect.left = 0;
        r->rect.top = 0;
    } else {
        if (r->rect.left >= 1746) {
            r->rect.left = 0;
            r->rect.top += 477;
        }
    }
    calc_meters(r);
}

void display_ground(runner_t *r)
{
    r->red = 0;
    r->green = 150;
    r->blue = 220;
    sfRenderWindow_clear(r->w, sfColor_fromRGB(r->red, r->green, r->blue));
    sfSprite_setTextureRect(r->fond, r->ground);
    sfSprite_setPosition(r->fond, (sfVector2f) {0, 930});
    sfRenderWindow_drawSprite(r->w, r->fond, NULL);
}