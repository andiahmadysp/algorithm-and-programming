#include <stdio.h>


int linearSearch(int arr[], int size, int toFind){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == toFind)
        {
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {2, 3, 0, 1, 4};

    int toFind = 1;
    int size = sizeof(arr) / sizeof(arr[0]);

    // 4 bit
    // size of array 4 bit * 5
    // = 20 bit
    // 20 bit / 4 bit
    // = 5

    int index = linearSearch(arr, size, toFind);

    if (index != -1)
    {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
        
    }

    return 0;
}