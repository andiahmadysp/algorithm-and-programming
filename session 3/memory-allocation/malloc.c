#include <stdio.h>
#include <stdlib.h>


int main(){
    int *arr;
    int n; 


    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // alokasi memory 
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }


     // tampilkan array;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    free(arr);
    return 0;
}