/*
** EPITECH PROJECT, 2020
** My_runner
** File description:
** struct.h
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#ifndef structure
#define structure

typedef struct init
{
    sfSoundBuffer *sbuff;
    sfSoundBuffer *hont;
    sfSoundBuffer *balec;
    sfSound *couilles;
    sfSound *honteux;
    sfSound *sound;
    sfSound *russia;
    sfRenderWindow *w;
    sfTexture *staline;
    sfTexture *fondtext;
    sfTexture *obstacle;
    sfTexture *playertext;
    sfSprite *sobs;
    sfSprite *player;
    sfSprite *fond;
    sfSprite *cloud_one;
    sfSprite *cloud_two;
    sfSprite *cloud_three;
    sfSprite *cloud_four;
    sfSprite *cloud_five;
    sfSprite *cloud_six;
    sfClock *first;
    sfClock *second;
    sfClock *third;
    int a;
    int b;
    int c;
    int d;
    int saut;
    float meters;
    int h;
    sfInt8 red;
    sfInt8 green;
    sfInt8 blue;
    sfText *text;
    sfIntRect ground;
    sfIntRect rect;
} runner_t;

#endif