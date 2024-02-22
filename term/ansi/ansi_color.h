#ifndef _TERM_COLOR_H
#define _TERM_COLOR_H

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

int print_color(enum font_color color,
                const char *fmt, ...);

#endif // _TERM_COLOR_H