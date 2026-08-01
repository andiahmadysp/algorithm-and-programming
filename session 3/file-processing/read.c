#include <stdio.h>


int main(){
    FILE *file;
    char buffer[5];

    file = fopen("example.txt", "r");

    // membuka file
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }


    // membaca dari file
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s\n", buffer);
    }

    // menutup file
    fclose(file);

    return 0;
}