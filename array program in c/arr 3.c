//WAP to take number from users and calculate no of positive,negative and zeros number from given array....

#include<stdio.h>
main()
{
    int arr[10];
    int i,x=0,y=0,z=0;
    printf("Enter your numbers");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<10; i++)
    {
        if (arr[i]>0)
        {
            x=x+1;
        }
        else if (arr[i]<0)
        {
            y=y+1;
        }
        else
        {
            z=z+1;
        }
    }
    printf("\nThe no of positive no is %d",x);
    printf("\nThe no of negative no is %d",y);
    printf("\nThe no zeros no is %d",z);
}
