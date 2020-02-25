/*
** EPITECH PROJECT, 2019
** create_win.c
** File description:
** create_win.c
*/

#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>

sfRenderWindow *createwin(sfRenderWindow *w)
{
    sfVideoMode params = {1920, 1080, 32};
    char s[9] = "My_Runner";

    w = sfRenderWindow_create(params, s, sfFullscreen | sfClose, NULL);
    return (w);
}
