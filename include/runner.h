/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** runner.h
*/

#include "stuct.h"
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#ifndef header
#define header

sfRenderWindow *createwin(sfRenderWindow *w);
void create_variables(runner_t *r, char **av);
void create_variables_two(runner_t *r);
void create_variables_three(runner_t *r);
void calc(runner_t *r);
void draw_clouds(runner_t *r);
void draw_player(runner_t *r);
void draw_obs(runner_t *r);
void event_manager(runner_t *r);
void destroyer(runner_t *r);
void display_ground(runner_t *r);
void window_gesting(runner_t *r);
int my_strlen(char *s);
void my_putstr(char *s);
void calc_meters(runner_t *r);
void my_putchar(char c);
int my_put_nbr(int nb);
void display_text(runner_t *r);
void check_crashs(runner_t *r);
void draw_sprites(runner_t *r);

#endif
