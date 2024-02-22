#include <stdio.h>
#include <stdarg.h>
#include <ansi_color.h>

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

