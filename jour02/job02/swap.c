#include <unistd.h>
#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;

    *a = *b;
    *b = temp;
}

// int main(){
//     int i = 2;

//     int j = 5;

//     swap(&i, &j);

//     printf("%d", i);
// }