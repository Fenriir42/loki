/*
** EPITECH PROJECT, 2022
** loki
** File description:
** str_isalpha.c
*/

int str_is_alpha(char const input)
{
    if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')
        || (input >= '0' && input <= '9'))
        return (1);
    return (0);
}
