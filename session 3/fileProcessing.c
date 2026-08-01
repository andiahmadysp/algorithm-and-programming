#include <stdio.h>


int main(){
    FILE *file;

    file = fopen("example.txt", "w");

    // membuka file
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // menulis ke file
    fprintf(file, "Hello world!\n");

    // menutup file
    fclose(file);

    return 0;
}