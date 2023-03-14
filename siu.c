#include <stdio.h>
int main()
{
    int lato1,lato2,lato3;
    printf("inserisci il valore della lunghezza dei tre lati:\n ");
    scanf("%d %d %d", &lato1, &lato2, &lato3);
    
    if (lato1+lato2>lato3 && lato2+lato3>lato1 && lato3+lato1>lato2)
    {
        printf("i tre lati possono essere di un triangolo\n"); 
         
if (lato1 == lato2 && lato2 == lato3)
 {
    printf("ïl triangolo è equilatero\n");
 }

else if (lato1!=lato2 && lato1!=lato3 && lato2!=lato3)
{
    printf("ïl triangolo è scaleno\n");
}

else
{
    printf("il triangolo è isoscele\n");
}
    }
    
else 
{
    printf("i tre lati non possono essere di un triangolo\n");
}
return 0;
}
