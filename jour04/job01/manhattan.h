#ifndef MANHATTAN_H
#define MANHATTAN_H
#endif

#define ABS(x) (x < 0 ? -x : x)
typedef struct point
{
    int x;
    int y;
} point;

int manhattan(point a, point b);