/*
** EPITECH PROJECT, 2023
** Kepler
** File description:
** Unittests
*/

#include <criterion/criterion.h>

#include "test/critekion.h"
#include "test/fix_teknorm.h"

#include "uruz/uruz.h"


TEST(str_len, single_character)
_ {
    CR_ASSERT_EQ(str_len("a"), 1);
}

TEST(str_len, word)
_ {
    CR_ASSERT_EQ(str_len("hello"), 5);
}

TEST(str_len, sentence)
_ {
    CR_ASSERT_EQ(str_len("hello world"), 11);
}

TEST(str_len, special_characters_sequences)
_ {
    CR_ASSERT_EQ(str_len(" !&~\n\t"), 6);
}

TEST(str_len, empty)
_ {
    CR_ASSERT_EQ(str_len(""), 0);
}

TEST(str_len, null)
_ {
    CR_ASSERT_EQ(str_len(NULL), 0);
}

TEST(str_len, cut_string)
_ {
    CR_ASSERT_EQ(str_len("foo\0bar"), 3);
}

TEST(str_len, long_string)
_ {
    char *long_sentence = (
        "I'd just like to interject for a moment. What you're referring to as"
        " Linux, is in fact, GNU/Linux, or as I've recently taken to calling "
        "it, GNU plus Linux. Linux is not an operating system unto itself, but"
        " rather another free component of a fully functioning GNU system made"
        " useful by the GNU core libs, shell utilities and vital system"
        " components comprising a full OS as defined by POSIX.\nMany computer"
        " users run a modified version of the GNU system every day, without"
        " realizing it. Through a peculiar turn of events, the version of GNU"
        " which is widely used today is often called Linux, and many of its"
        " users are not aware that it is basically the GNU system, developed by"
        " the GNU Project.\nThere really is a Linux, and these people are using"
        " it, but it is just a part of the system they use. Linux is the"
        " kernel: the program in the system that allocates the machine's"
        " resources to the other programs that you run. The kernel is an"
        " essential part of an operating system, but useless by itself; it can"
        " only function in the context of a complete operating system. Linux is"
        " normally used in combination with the GNU operating system: the whole"
        " system is basically GNU with Linux added, or GNU/Linux. All the"
        " so-called Linux distributions are really distributions of GNU/Linux!"
    );

    CR_ASSERT_EQ(str_len(long_sentence), 1273);
}
