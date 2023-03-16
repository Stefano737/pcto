#include <stdio.h>
int main()
{
    char stringa[] = "";
    printf("ïnserisci una stringa:\n");
    scanf("%s", stringa);

int i=0;
while(stringa[i] != '\0')
{ 
    i++;
    }

while (i >= 0)
{
    printf("%c\n", stringa[i]);
    i--;
}
}