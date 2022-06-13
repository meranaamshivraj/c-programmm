//Write C program to calculate product of digits of a number

#include<stdio.h>
main()
{
    int n,b,product=1;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
    b=n % 10;
    product=product*b;
   n=n/10;
    }
     printf("product of number is:%d\n",product);
}
