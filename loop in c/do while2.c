#include<stdio.h>
main()
{
    int i,b=1;
    i=1;
    while(i<=5)
    {
        b=i+b*2;
        printf("\n %d",b);
        i=i+1;
    }
}
