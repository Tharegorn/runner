/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_strlen.c
*/

int my_strlen(char *s)
{
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    return (count);
}