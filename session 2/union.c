#include <stdio.h>
#include <string.h>

// union: memungkinkan satu variable memiliki banyak tipe data 
// ukurannya: ngikut ke tipe data paling besar
union Data
{
    int i; // 4 bit
    float f; // 4 bit
    char str[20]; // 8 bit
};

// ukuran union 8 bit, dia ngikut ke tipe data yang ukurannya paling besar
int main(){
    union Data data;

    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    printf("data.f : %.2f\n", data.f);
    
    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);
    return 0;
}