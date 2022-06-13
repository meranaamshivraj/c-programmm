//Wap to calculate 1's compliment of given number....


#include<stdio.h>
main()
{
    short x;


    printf("Enter your number");
    scanf("%d",&x);

    x= ~ x;

    printf("the 1 Compliment of given number is %d",x);
}
