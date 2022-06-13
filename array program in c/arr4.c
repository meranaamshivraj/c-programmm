//WAP character array from user and calculate No.of vowels character and consonant character

#include<stdio.h>
int main()
{
    char arr[5];
    int i,x=0,y=0;

    printf("Enter your array");

    for(i=0;i<5;i++)
    {
        scanf("%c",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'   )
        {
            x=x+1;
        }
        else
        {
            y=y+1;
        }
    }
    printf("The no of vowels in character is %d",x);
    printf("\nThe no consonant in character is %d",y);
}
