#include <stdio.h>

int intro() {
    char name[20] = "";
    int age = 0;
    char grade;

    printf("Type name: ");
    scanf("%s", name);

    printf("\n");


    printf("Age: ");
    scanf("%d", &age);

    printf("\n");

    printf("Grade: ");
    scanf(" %c", &grade);

    printf("\n");

    printf("Your name is %s\n your age is %d\n Your grade is %c\n ", name, age, grade);
    

    return 0;
}


void addition(){
    // deklarasi variable
    int a, b, c;

    // terima input angka pertama dan simpan di variable a
    printf("First: ");
    scanf("%d", &a);

    // terima input angka kedua dan simpan di variable b
    printf("\nSecond: ");
    scanf("%d", &b);

    // lakukan penjumlahan a + b dan simpan di variable c
    c = a + b;

    // tampilkan resultnya
    printf("Result: %d\n", c);
}

void devided(){
    // deklarasi variable
    int a, b;
    float c;

    // terima input angka pertama dan simpan di variable a
    printf("First: ");
    scanf("%d", &a);

    // terima input angka kedua dan simpan di variable b
    printf("\nSecond: ");
    scanf("%d", &b);

    // lakukan pembagian a / b dan simpan di variable c
    c = (float) a / b;

    // tampilkan resultnya
    printf("Result: %.2f\n", c);
}




int mbg(){
    // Menggunakan tipe data long long untuk mencegah overflow jika angka sangat besar
    long long n, b, d;
    long long total_biaya, sisa_anggaran;

    // Membaca input n (jumlah siswa), b (biaya per porsi), dan d (total dana)
    scanf("%lld %lld %lld", &n, &b, &d);

    // Melakukan perhitungan
    total_biaya = n * b;
    sisa_anggaran = d - total_biaya;

    // Mencetak output sesuai format yang diminta
    printf("%lld %lld\n", total_biaya, sisa_anggaran);

    return 0;
}





int main(){
    // addition();
    // devided();

    // post increment
    // int a = 19;
    // int b = --a;

    // printf("%d\n", b);


    mbg();

    return 0;
}


