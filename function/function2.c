#include<stdio.h>
#include<string.h>
main()
{
    char string1[15];
    int x=0,y=0,i=0;
    printf("\n enter your string");
    scanf("%s",string1);
    while(string1[i]!='\10')
    {
        if(string1[i]>=65&string1[i]<=90)
        {
            x=x+1;
        }
        else if(string1[i]>=97&& string1[i]<=122)
        {
            y=y+1;
        }
        i=i+1;
    }
    printf("\n%d,x");
    printf("\n%d",y);
}
