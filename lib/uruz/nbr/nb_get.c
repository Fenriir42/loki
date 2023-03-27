/*
** EPITECH PROJECT, 2022
** lib
** File description:
** my_get_nbr
*/

int nb_get(char const *str)
{
    int res = 0;
    int negcount = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            res = res * 10 + str[i] - '0';
        if (res != 0 && (!(str[i] >= '0' && str[i] <= '9')))
            break;
        if (str[i] == '-')
            negcount++;
    }
    if ((negcount % 2) == 1)
        res *= -1 ;
    return res;
}
