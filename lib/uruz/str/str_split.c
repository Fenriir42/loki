/*
** EPITECH PROJECT, 2023
** minishell 1
** File description:
** str_split
*/

#include "uruz/uruz.h"
#include "uruz/u_utils.h"

static bool is_separator(char c, char const *separators)
{
    return (str_index_of(separators, c) != K_SENTINEL);
}

static int count_sepa(char const *str, char const *separators)
{
    int count = 1;

    for (int i = 0; str[i]; i++)
        if (is_separator(str[i], separators) &&
        !is_separator(str[i + 1], separators))
            count++;
    return count;
}

static char **string_split(char const *str, char const *separators)
{
    char **array = NULL;
    size_t len = 0;
    size_t count = 0;
    size_t i = 0;

    array = mem_calloc(sizeof(char *), (count_sepa(str, separators) + 1));
    while (true) {
        if (len != 0 && ((is_separator(str[i], separators) &&
        !is_separator(str[i - 1], separators)) ||
        (!str[i] && !is_separator(str[i - 1], separators)))) {
            array[count] = str_copy_at(str, (i - len), i);
            count++;
            len = 0;
        } if (!is_separator(str[i], separators)) {
            len++;
        } if (!str[i])
            break;
        i++;
    }
    return array;
}

char **str_split(char const *str, char const *separators)
{
    if (!str || !separators)
        return NULL;
    return string_split(str, separators);
}
