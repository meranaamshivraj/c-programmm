//WAP to take character array input and calculate no of capital letters and small case letter...

#include<stdio.h>
int main()
{
    char arr[5];
    int i,x=0,y=0;
    printf("enter your character");

    for(i=0; i<5; i++)
    {
        scanf("%c",&arr[i]);
    }

    for(i=0; i<5; i++)
    {
        if(arr[i]>64 &&  arr[i ]<91)
        {
            x++;
        }
        else if(arr[i]>96  &&  arr[i]<123)
        {
            y++;
        }
    }
    printf("No of capital letters is %d",x);
    printf("\nNo of small letter is %d",y);
}
