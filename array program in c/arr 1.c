//WAP to take no from user into array and print only even...

#include<stdio.h>
main()
{
    int arr[5];
    int i;
    printf("Enter array");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Your array");

    for(i=0;i<5;i++)
    {
        if(arr[i] % 2==0)
        {
            printf("\n%d",arr[i]);
        }
    }
}
