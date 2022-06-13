#include<stdio.h>
table (int n)
{
    int i=1;
    int b;
    printf("\n*****table of %d****\n",n);
    while(i<=10)
    {
        b=n*i;
        i=i+1;
        printf("\n%d",b);
        }

}
main()
{
    table(5);

}
