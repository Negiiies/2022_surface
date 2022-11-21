#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>
#include "fonction.h"
int main(void)
{
    t_bunny_window *win;
    t_bunny_pixelarray *px;
    t_bunny_position origin;
    t_bunny_position pos_a;
    t_bunny_position pos_b;
    int l;
    int h;
    int i;

    l = 766;
    h = 766;
    win = bunny_start(l, h, false, "fl: Open a window tutorial");
    px = bunny_new_pixelarray(l, h);
    origin.x = 0;
    origin.y = 0;
    pos_a.x = 0;
    pos_a.y = 0;
    pos_b.x = l + 1;
    pos_b.y = h + 1;
    clear_pixelarray(px, YELLOW);
    i = 0;
    while(pos_a.x <= l) {
        stu_draw_line(px, &pos_a, &pos_b, i / 3);
        bunny_blit(&win->buffer, &px->clipable, &origin);
        bunny_display(win);
        pos_a.x += 1;
        pos_b.x -= 1;
        i += 1;
    }
    i = l;
    pos_a.x = l + 1;
    pos_a.y = 0;
    pos_b.x = 0;
    pos_b.y = h + 1;
    while(pos_a.y <= h) {
        stu_draw_line(px, &pos_b, &pos_a, i / 3);
        bunny_blit(&win->buffer, &px->clipable, &origin);
        bunny_display(win);
        pos_a.y += 1;
        pos_b.y -= 1;
        i -= 1;
    }
    usleep(1e6);
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
