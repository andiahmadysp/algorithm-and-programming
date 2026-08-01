#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // alokasi memory dengan calloc
    arr = (int *) calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    // mengisi array
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    // tampilkan isi array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // mengubah ukuran array
    printf("Enter new number of elements: ");
    scanf("%d", &n);

    arr = (int *)realloc(arr, n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    // tampilkan isi array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    free(arr);

    return 0;
}