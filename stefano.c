#include <stdio.h>

int main()
{
    int age;
    char sesso;
    printf("Inserisci la tua età:");
    scanf(" %d", &age);
    
    printf("Inserisci il tuo sesso:");
    scanf(" %c", &sesso);
    printf(" Hai %d anni e sei %c\n", age, sesso);
    return 0;
}