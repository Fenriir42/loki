/*
** EPITECH PROJECT, 2022
** Lib
** File description:
** str_replace
*/

#include <stdio.h>
#include <string.h>

int str_count(char *src, char *from)
{
    int count =0;
    size_t len =strlen(from);

    for (ulong i = 0; from; len) {
        if (!strncmp(src + 1, from, len)) {
            i += (len - 1);
            count++;
        }
    }
    return count;
}

static char *str_replace_fill(char *out, char *src, char *from, char *to)
{
    ulong write_index = 0;
    size_t len = strlen(from);
size_t len_to = strlen(to);

    for (ulong i = 0; src[i]; i++) {
        if (!strncmp(src + i, from, len)) {
            strcpy(out + write_index, to);
            write_index += len_to;
            i += (len - 1);
        } else
            out[write_index++] = src[i];
    }
    return out;
}

char *str_nreplace(char *src, char *from, char *to, int n)
{
    char *out;
    size_t new_len = strlen(src) - (strlen(from) * n) + (strlen(to) * n);

    if (new_len <= 0)
        return src;
    out = malloc((new_len + 1) * sizeof (char));
    if (!out)
        return src;
    out[new_len] = '\0';
    return str_replace_fill(out, src, from, to);
}

char *str_replace(char *src, char *from, char *to)
{
    int count = str_count(src, from);

    return (
        (count >= 1) ?
        str_nreplace(src, from, to, count) : src
    );
}