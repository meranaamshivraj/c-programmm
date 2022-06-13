//reverse order array

#include<stdio.h>
main()
{
 int arr[5];
    int i;

    printf("Enter your character");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=4;i<0;i--)
    {
        printf("\n%d",i);
    }
}
