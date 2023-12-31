#ifndef FONCTION_H_
#define FONCTION_H_

void clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color);
void stu_draw_line(t_bunny_pixelarray *px,
                   t_bunny_position   *pos_a,
                   t_bunny_position   *pos_b,
                   unsigned int        color);

float get_ratio(int a, int b, int x);

int get_value(int a, int b, float ratio);

void put_pixel(t_bunny_pixelarray *pxa,
               t_bunny_position *pos,
               unsigned int color);
t_bunny_position project_paralell(int x, int y, int z);

#endif /*FONCTION_H_*/
