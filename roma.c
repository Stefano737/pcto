#include <stdio.h>
int main()
{
    int numero1, numero2, numero3;
    printf("ïnserisci i tre numeri:\n");
    scanf( "%d %d %d", &numero1, &numero2, &numero3);
    if(numero3-numero2 == numero2-numero1 || numero2-numero1 == numero3-numero2)
    {
        printf("i tre numeri possono essere considerati in progressione aritmetica\n");
    }
    else
    {
        printf("i tre numeri non possono essere considerati in progressione aritmetica\n");
    }
return 0;
}