#include <unistd.h>
#include <stdio.h>
#include "print_album.h"
#include "../../jour03/job02/my_itoa.c"

void print_album(t_album *album){
    int i = 0;
    int j = 0;
    while (album->title[i] != 0)
    {
        i++;
    }
    while (album->artist[j] != 0)
    {
        j++;
    }
    // sizeof pour donner le nombre d'octet a allouer
    write(1, album->title, sizeof(char*) * i);
    write(1, " by ", 1);
    write(1, album->artist, sizeof(char*) * j);
    write(1, "released in ", 1);
    write(1, my_itoa(album->year), 4);

}

int main(){
    t_album album;

    album.artist = "tiakola";
    album.title = "La Melo et Ganx";
    album.year = 2023;

    print_album(&album);
}