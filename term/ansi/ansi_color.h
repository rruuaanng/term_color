#ifndef _TERM_COLOR_H
#define _TERM_COLOR_H

#include <stdio.h>

#define S_ULINE "\e[4m"
#define E_ULINE "\e[24m"
#define RESET "\e[0m"

enum font_color
{
    FONT_BLACK = 30,
    FONT_RED,
    FONT_GREEN,
    FONT_YELLOW,
    FONT_BLUE,
    FONT_PURPLE,
    FONT_CYAN,
    FONT_WHITE,
};

enum bg_color
{
    BG_BLACK = 40,
    BG_RED,
    BG_GREEN,
    BG_YELLOW,
    BG_BLUE,
    BG_PURPLE,
    BG_CYAN,
    BG_WHITE,
};

#define __get_color(x) ({ \
    int _c2 = x;          \
    _c2;                  \
})

#define __color(x) ({                       \
    char _c1[6];                            \
    sprintf(_c1, "\e[%dm", __get_color(x)); \
    _c1;                                    \
})

int print_color(enum font_color color,
                const char *fmt, ...);

#endif // _TERM_COLOR_H