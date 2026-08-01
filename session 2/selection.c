#include <stdio.h>


void ifElse(){
    // if: code block yang akan di eksekusi ketika kondisi terpenuhi
    // else if: code block yang akan di eksekusi ketika kondisi terpenuhi dan ketika if sebelumnya tidak terpenuhi
    // else: code block yang akan dijalankan ketika semua kondisi tidak terpenuhi

    int number; 
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
}


void switchCase(char grade){
    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        break;
    case 'C': 
        printf("Well done\n");
        break;
    case 'D': 
        printf("You passed\n");
        break;
    case 'F':
        printf("Better try again.\n");
        break;
    default:
        printf("Invalid grade\n");
        break;
    }
}
int main(){
    // switch case: alternative else if
    char grade;
    printf("Enter your grade (A/B/C/D/F): ");
    scanf(" %c", &grade);

    if (grade == 'A')
    {
        /* code */
    } else if (grade == 'B')
    {
        /* code */
    }

    // c, d, e
    return 0;
}