Write C program to find first and last digit of any number

#include<stdio.h>
main()
{
    int n,first,last;
    printf("enter a number");
    scanf("%d",&n);
    last=n%10;
    printf("\nlast=%d",last);
    while(n>0)
    {
    first=n%10;

    n=n/10;
    }
     printf("\nfirst=%d",first);

}
