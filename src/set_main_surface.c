#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>
#include "fonction.h"

int main(void)
{
    t_bunny_window *win;
    t_bunny_pixelarray *px;
    t_bunny_position origin;
    t_bunny_position Wa;
    t_bunny_position Wb;

    win = bunny_start(1000, 1000, false, "fl: Open a window tutorial");
    px = bunny_new_pixelarray(1000, 1000);
    origin.x = 0;
    origin.y = 0;
    clear_pixelarray(px, YELLOW);
    Wa = project_paralell(80, 80, 80);
    Wb = project_paralell(80, 90, 80);
    printf("%d : %d | %d : %d \n",Wb.x,Wb.y,Wa.x,Wa.y);
    stu_draw_line(px,&Wa,&Wb, RED);
    bunny_blit(&win->buffer, &px->clipable, &origin);
    bunny_display(win);
    usleep(1e7);
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
