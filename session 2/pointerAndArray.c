#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a; // dereference
    *a = *b;
    *b = temp;
}


void usingPointer(){
     // pointer: memungkinkan kita memanipulasi atau mengakses nilai langsung pada alamat memori. 
    int x = 20, y = 50;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
}

int main(){


   // deklarasi variable
   int n, i;
   float sum = 0.0, average;

   // get total elemen
   printf("Masukan jumlah elemen: ");
   scanf("%d", &n);

   int arr[n]; // deklarasi array dengan ukuran yang kita tentunkan;    

   // fill array value
   printf("Masukan %d elemen: \n", n);
   for (int i = 0; i < n; i++)
   {
        scanf("%d", &arr[i]);
   }

   int *ptr = arr; // pointer yang merujuk ke array;

   for (int i = 0; i < n; i++)
   {
        sum += *(ptr + i); // mengakses elemen array lewat pointer;

        // 1000 address index pertama
        // 1004 address index kedua

        // integer = 4 bit

        // ptr + i = (1000 + (i * size_of(int)) )
        // ptr + i = (1000 + (i * 4))

        // i = 1
        // 1000 + (1 * 4) = 1004

        // i = 2
        // 1000 + (2 * 4) = 1008
   }
   


   average = sum / n;
   printf("Rata-rata nilai = %.2f\n", average);

    return 0;
}