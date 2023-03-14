#include <stdio.h>
int main()
{
    int anno;
   printf("ïn che anno sei nato?");
   scanf("%d", &anno);
   if( anno == 1969)
   { 
    printf("sei nato lo stesso anno dello sbarco sulla luna!\n");
   }
   else if (anno>1969)
   {
    printf("sei nato %d anni dopo lo sbarco sulla luna!\n", anno-1969);
   }
   else if (anno<1969)
   {
    printf("sei nato %d anni prima dello sbarco sulla luna\n", 1969-anno);
   }
   return 0;
}