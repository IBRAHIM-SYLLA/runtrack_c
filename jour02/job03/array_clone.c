#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *dest, char *src){
    int i = 0;
    while (src[i] != 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return dest;
}

char *my_strdup(char *src){
    int i = 0;

    while(src[i] != 0){
        i++;
    }
    i += 1;
    char *p = malloc(sizeof(char) * (i));

    return my_strcpy(p, src);
}

char **array_clone(char **strs, int n){
    int i = 0;


    char **clones = malloc(sizeof(char*) * (n + 1));

    while (i < n)
    {
        clones[i] = my_strdup(strs[i]);
        i++;
    }
    clones[i] = NULL;
    return clones;
}

// int main(){
//     char *strs[4] = {"ib", "ti", "cy", NULL};
//     int n = 3;
//     char **stock = array_clone(strs, n);
//     int i = 0;
//     while (strs[i] != NULL)
//     {
//         printf("%s ", stock[i]);
//         i++;
//     }
// }