#include <stdio.h>
#include <string.h>

void forLoop(){
     // deklarasi variable untuk menyimpan jumlah bilangan ganjil
    int count = 0;

    // perulangan number rentang 1 - 100
    for (int i = 1; i <= 100; i++)
    {

        if (i % 2 != 0)
        {
            count++;
        }
    }

    printf("Jumlah bilangan ganjil dari 1 sampai 100 adalah: %d\n", count);
}


void whileLoop(){
    // while 
    char password[20];
    int attempt = 0;
    const char correctPassword[] = "secret";

    printf("Enter password: ");
    while (1)
    {
        scanf("%19s", password);

        if (strcmp(password, correctPassword) == 0)
        {
            printf("Password correct!\n");
            break;
        } else{
           

            if (attempt >= 3)
            {
                printf("Too many failed attemps. Exiting.\n");
                break;
            } else {
                printf("Password incorrect, try again: ");
                attempt++;
            }
        }
    }
    


}

int main(){
    int number = 0;
    int sum = 0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);
    
    printf("Total sum is: %d\n", sum);
    return 0;
}