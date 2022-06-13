//Write C program to find the sum of first and last digit of any number


#include<stdio.h>
main()
{
    int n,first,last,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    last=n%10;
    printf("\nlast=%d",last);
    while(n>0)
    {
    first=n%10;
    printf("\nfirst=%d",first);
    n=n/10;
    }
    sum=first+last;
    printf("\n\n%d",sum);
}
