/*
** EPITECH PROJECT, 2024
** putstr
** File description:
** putstr
*/

int my_putstr(char const *str)
{
    int test = 0;

    while (str[test] != '\0') {
    my_putchar(str[test]);
    test++;
    }
}
