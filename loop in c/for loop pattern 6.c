
//pattern Program 6

#include<stdio.h>
main()
{

int i,j;

for(i=1;i<=4;i=i+1)
{
    for(j=1;j<=4;j=j+1)
    {
           if(i==1 || i==4|| i+j==5)
           {
               printf("*");
           }
           else
            {
                printf(" ");
            }
                   }

        printf("\n");
    }
}

