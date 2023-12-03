#include <unistd.h>
#include <stdio.h>
#include "manhattan.h"


int manhattan(point a, point b){
    return ABS((b.x - a.y) + (b.y - a.x));
}

// int main(){
//     point a;
//     point b;

//     a.x = 5;
//     a.y = 8;

//     b.x = 3;
//     b.y = 6;

//     printf("%d", manhattan(a, b));
// }