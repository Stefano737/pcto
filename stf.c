#include <stdio.h>
int main()
{ 
    int eta;
    printf("quanti anni hai?");
    scanf(" %d", &eta);
    if(eta>=18)
    {
        printf("sei maggiorenne ed è lecito che tu ti droghi\n");
    }
    else
    {
        printf("non sei maggiorenne e non è lecito che tu ti droghi\n");
    }
}