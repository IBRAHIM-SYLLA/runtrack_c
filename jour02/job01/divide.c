#include <unistd.h>
#include <stdio.h>

int divide(int *val){
    int res = *val /2;
    return res;
}

// int main(){
//     int i = 2;
//     int *div = &i;
//     printf("%d", divide(div));
// }