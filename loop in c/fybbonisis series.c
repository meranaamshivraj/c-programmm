//WAP to print Fybbonisis Series

#include<stdio.h>
main()
{
    int first=0,next=1,sum,i,term;

    printf("Enter number of Rows");
    scanf("%d",&term);

    i=0;
    while(i<=term)
    {
       sum=first+next;
        first=next;
        next=sum;
        printf("\n%d",first);
        i=i+1;
    }
  }
