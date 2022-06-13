// Write a C program to print all natural numbers in reverse order

#include<stdio.h>
main()
{
    int i,n;

    printf("Enter natural number");
    scanf("%d",&n);

    i=n;

    while(i>1)
    {
       n=n-1;
        printf("%d\n",n);
        i=i-1;
    }
}
