/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "stuct.h"
#include "runner.h"
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>

void help(void)
{
    my_putstr("Finite runner created with CSFML.\n\n");
    my_putstr("USAGE\n ./my_runner map.txt\n\n\n");
    my_putstr("OPTIONS\n -h            print the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n KEY_UP        move up.\n");
    my_putstr(" KEY_DOWN      move down.\n");
    my_putstr(" ESCAPE        close the game.\n");
}

void make_game(char **av) 
{
    runner_t *r = malloc(sizeof (runner_t));

    create_variables(r, av);
    sfSound_setBuffer(r->couilles, r->balec);
    sfSound_setBuffer(r->sound, r->sbuff);
    sfSound_setBuffer(r->honteux, r->hont);
    sfSound_play(r->sound);
    window_gesting(r);
    destroyer(r);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    if (av[1][0] == '-' && av[1][1] == 'h')
        help();
    else {
        make_game(av);
    }
    return (0);
}
