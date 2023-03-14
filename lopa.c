#include <stdio.h>
int main()
{
    char sesso;
    printf("In che genere ti identifichi?");
    scanf("%c", &sesso);
    if (sesso == 'm')
    {
        printf("sei maschio\n");
    }
    else if (sesso == 'f')
    {
        printf("sei femmina\n");
    }
    else 
    {
        printf("vabbe zi non lo so dimmmel te");
    }
}