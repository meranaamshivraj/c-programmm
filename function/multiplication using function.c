
//WAP to make multiplication table using function.

#include<stdio.h>
mul(int n)
{
    int i,b;
    i=1;

    while(i<=10)
    {
        b=n*i;
        printf("%d\n",b);
        i=i+1;
    }
}
main()
{
    mul(13);
}

