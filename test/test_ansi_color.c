#include <stdio.h>
#include <stdarg.h>
#include "term/ansi_color.h"

int main()
{
    /**
     * test print of font color
    */
    print_color(FONT_BLACK, "hello:%d\n", 1);
    print_color(FONT_RED, "hello:%d\n", 2);
    print_color(FONT_GREEN, "hello:%d\n", 3);
    print_color(FONT_YELLOW, "hello:%d\n", 4);
    print_color(FONT_BLUE, "hello:%d\n", 5);
    print_color(FONT_PURPLE, "hello:%d\n", 6);
    print_color(FONT_CYAN, "hello:%d\n", 7);
    print_color(FONT_WHITE, "hello:%d\n", 8);

    /**
     * test print of bg color
    */
    
    return 0;
}
