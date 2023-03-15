#include <stdio.h>
int main()
{
    int x = 100;
    while(x>=0)
    {
    if(x%2 == 0)
    {
    printf ( "%d è pari\n" , x);
    }
    x=x-1;
}
}