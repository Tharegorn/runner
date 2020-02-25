/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** put_nbr
*/

#include <unistd.h>

void my_putchar(char c);

int negativ(int nb) 
{
    if (nb < 0) { 
        nb = nb * (-1);
        my_putchar('-');
        return nb;
    }
    return nb;
}

int my_put_nbr(int nb)
{
    long  mod = 1;

    nb = negativ(nb);
    if (nb == 0 ) {
        my_putchar(0);
        return 0;
    }
    while (nb % mod != nb) {
        mod *= 10;
    }
    while (mod >= 10) {
        my_putchar ((nb % mod) / (mod / 10) + 48);
        mod /= 10;
    }
    return (0);
}
