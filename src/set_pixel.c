#include <lapin.h>
void put_pixel(t_bunny_pixelarray *pxa,
               t_bunny_position *pos,
               unsigned int color)
{
    int i = 0;
    int width = pxa->clipable.clip_width;
    int height = pxa->clipable.clip_height;
    int px = width * height;
    unsigned int* tmp = (unsigned int* )pxa-> pixels;
    i = (width * pos-> y) + pos->x;
    if (i >= 0 &&  i < px)
        {
            tmp[i] = color;
        }
    i += 1;
}

