#include <stdio.h>
#include <stdarg.h>
#include <ansi_color.h>

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
                const char *fmt, ...)
{
    int n;
    va_list args;

    printf(__color(color));
    va_start(args, fmt);
    n = vprintf(fmt, args);
    printf(RESET);
    va_end(args);

    return n;
}
