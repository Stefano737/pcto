#include <stdio.h>
int main()
{
    char stringa[]="";
    int x=0;
    printf("ïnserisci una parola\n");
    scanf("%s", stringa);
    while(stringa[x] != '\0')
    {
        x++;
    }
    printf("ïl numero di lettere è %d\n", x);

}