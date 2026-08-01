#include <stdio.h>

// struct: digunakan untuk mengolompokan variable dengan tipe data yang berbeda
struct Student
{
    char name[50];
    int age;
    float gpa;
};

// ukuran struct itu jumlah dari semua variable yang ada


int main(){
    struct Student student1;


    // input
    printf("Enter name: ");
    scanf("%s", student1.name);

    printf("Enter age: ");
    scanf("%d", &student1.age);

    printf("Enter gpa: ");
    scanf("%f", &student1.gpa);

    // output
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("gpa: %.2f\n", student1.gpa);
    
    return 0;
}