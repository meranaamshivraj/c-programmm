//WAP to take 5 numbers from users and print thr maximum number of them using array..

#include<stdio.h>
int main()
{
    int arr[5];
    int i,max=0;

    printf("Enter your number");

    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
 printf("The maximum number is %d",max);

}
