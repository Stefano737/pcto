#include <stdio.h>
int main()
{
    int x = 0;
    int somma = 0;
    while (x<=100)
    {
        if(x % 2 == 0)
        {
            somma += x;
        }
        else{}
        x++;
    }
    printf("Somma totale: %d\n", somma);
    return 0;
}