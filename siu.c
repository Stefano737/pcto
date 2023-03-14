#include <stdio.h>
int main()
{
    int lato1,lato2,lato3;
    printf("inserisci il valore della lunghezza dei tre lati: ");
    scanf("%d %d %d", &lato1, &lato2, &lato3);
    
    if (lato1+lato2>lato3 && lato2+lato3>lato1 && lato3+lato1>lato2)
    {
        printf("i tre lati possono essere di un triangolo"); 
    }
    
else 
{
    printf("i tre lati non possono essere di un triangolo");
}
return 0;
}
