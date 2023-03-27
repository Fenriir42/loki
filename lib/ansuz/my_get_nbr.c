/*
** EPITECH PROJECT, 2022
** get number
** File description:
** str to nbr
*/

int my_getnbr(char *str)
{
    int n = 0;
    int res = 0;

    if (str[n] == ' ')
        n++;
    while (str[n] >= '0' && str[n] <= '9') {
        res = res * 10 + str[n] - 48;
        n++;
    }
    return res;
}
