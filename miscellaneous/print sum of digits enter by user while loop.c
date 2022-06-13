//Write a C program to print sum of digits enter by user

#include<stdio.h>
main()
{
    int i,n,b,sum=0;

    printf("enter a number");
    scanf("%d",&n);

    while(n>0)
    {
        b=n % 10;              //(% this sign is use for remainder)
        sum=sum+b;
      n=n /10;                  //( / this sign is use for division)

    }
    printf("%d",sum);
}
