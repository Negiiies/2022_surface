#include <lapin.h>
#include <stdlib.h>
#include <unistd.h>
void clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color)
{
    int i = 0;
    int width = pxa->clipable.clip_width;
    int height = pxa->clipable.clip_height;
    int px = width * height;
    unsigned int* tmp = (unsigned int*)pxa-> pixels;
    while(i <= px)
        {
            tmp[i] = color;
            i += 1;
        }
}

