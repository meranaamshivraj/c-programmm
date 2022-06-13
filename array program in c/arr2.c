//WAP to take five number and print their addition using array...
#include<stdio.h>
int main()
{

    int arr[5];
    int i,sum=0;

    printf("Enter your number");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
   printf("Addition of number is %d",sum);
}
