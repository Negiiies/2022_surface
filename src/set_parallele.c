#include<lapin.h>

t_bunny_position project_paralell(int x, int y, int z )
{
    t_bunny_position W;
    int i;

    i = 5;
    W.x = x * 2 * i - y * i;
    W.y = y * i - z;
    return (W);
}
