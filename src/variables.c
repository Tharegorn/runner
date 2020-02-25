/*
** EPITECH PROJECT, 2020
** variables.c
** File description:
** variables.c
*/

#include "stuct.h"
#include "runner.h"
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>

void create_variables_three(runner_t *r)
{
    r->first = sfClock_create();
    r->second = sfClock_create();
    r->cloud_two = sfSprite_create();
    r->cloud_three = sfSprite_create();
    r->cloud_four = sfSprite_create();
    r->cloud_five = sfSprite_create();
    r->cloud_six = sfSprite_create();
    sfSprite_setTexture(r->cloud_two, r->staline, sfTrue);
    sfSprite_setTexture(r->cloud_three, r->staline, sfTrue);
    sfSprite_setTexture(r->cloud_four, r->staline, sfTrue);
    sfSprite_setTexture(r->cloud_five, r->staline, sfTrue);
    sfSprite_setTexture(r->cloud_six, r->staline, sfTrue);
    r->text = sfText_create();
    sfText_setString(r->text, "bite");
    sfText_setStyle(r->text, (sfUint32) {3});
    sfText_setColor(r->text, sfWhite);
}

void create_variables_two(runner_t *r)
{
    r->rect.left = 0;
    r->rect.top = 0;
    r->rect.width = 291;
    r->rect.height = 477;
    r->ground.left = 2010;
    r->ground.top = 150;
    r->ground.width = -2010;
    r->ground.height = -150;
    r->a = 1800;
    r->b = 930;
    r->c = 10;
    r->d = 10;
    r->honteux = sfSound_create();
    r->couilles = sfSound_create();
    r->hont = sfSoundBuffer_createFromFile("pics/honteux.ogg");
    r->balec = sfSoundBuffer_createFromFile("pics/koulair.ogg");
    create_variables_three(r);
}

void create_variables(runner_t *r, char **av)
{
    r->sbuff = sfSoundBuffer_createFromFile("pics/music.ogg");
    r->sound = sfSound_create();
    r->w = createwin(r->w);
    r->fondtext = sfTexture_createFromFile("pics/ground.png", NULL);
    r->playertext = sfTexture_createFromFile("pics/hero.png", NULL);
    r->obstacle = sfTexture_createFromFile("pics/cailloux.png", NULL);
    if (av[1][0] == 'b' && av[1][3] == 'e')
        r->staline = sfTexture_createFromFile("pics/zizi.png", NULL);
    else if (av[1][0] == 'v' && av[1][4] == 'n')
        r->staline = sfTexture_createFromFile("pics/vagina.png", NULL);
    else
        r->staline = sfTexture_createFromFile("pics/coud.png", NULL);
    r->sobs = sfSprite_create();
    r->player = sfSprite_create();
    r->fond = sfSprite_create();
    r->cloud_one = sfSprite_create();
    sfSprite_setTexture(r->sobs, r->obstacle, sfTrue);
    sfSprite_setTexture(r->player, r->playertext, sfTrue);
    sfSprite_setTexture(r->fond, r->fondtext, sfTrue);
    sfSprite_setTexture(r->cloud_one, r->staline, sfTrue);
    create_variables_two(r);
}

void destroyer(runner_t *r)
{
    sfSound_destroy(r->sound);
    sfSound_destroy(r->honteux);
    sfSound_destroy(r->couilles);
    sfSoundBuffer_destroy(r->sbuff);
    sfSoundBuffer_destroy(r->hont);
    sfSoundBuffer_destroy(r->balec);
    sfClock_destroy(r->first);
    sfClock_destroy(r->second);
    sfTexture_destroy(r->staline);
    sfTexture_destroy(r->playertext);
    sfTexture_destroy(r->obstacle);
    sfTexture_destroy(r->fondtext);
    sfSprite_destroy(r->fond);
    sfSprite_destroy(r->sobs);
    sfSprite_destroy(r->player);
    sfClock_destroy(r->third);
    sfRenderWindow_destroy(r->w);
}
