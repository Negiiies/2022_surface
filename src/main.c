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
 
    l = 798;
    h = 599;
    win = bunny_start(l, h, false, "fl: Open a window tutorial");
    px = bunny_new_pixelarray(l, h);
    origin.x = 0;
    origin.y = 0;
    pos_a.x = 0;
    pos_a.y = 0;
    pos_b.x = l+1;
    pos_b.y = h+1;
    clear_pixelarray(px, GREEN);
     int i;
     int j;
     i = 0;
     j = 0;

     while(pos_a.x <= l) {
    stu_draw_line(px, &pos_a, &pos_b, BLACK);
    bunny_blit(&win->buffer, &px->clipable, &origin);
    bunny_display(win);
    pos_a.x += 1;
    pos_b.x -= 1;
    i += 1;
     }
     /* pos_a.x = 0;
        pos_a.y = 0;
        pos_b.x = l+1;
        pos_b.y = h+1;*/
     while(pos_a.y <= h) {
         stu_draw_line(px, &pos_b, &pos_a, BLACK);
         bunny_blit(&win->buffer, &px->clipable, &origin);
         bunny_display(win);
         pos_a.y += 1;
         pos_b.y -= 1;
         j += 1;
     }

     usleep(1e6);
     bunny_stop(win);
     return (EXIT_SUCCESS);
}
