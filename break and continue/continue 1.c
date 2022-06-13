//Continue program

//continue statement is use to that value which value users does not have.

#include<stdio.h>
main()
{
    int i,j;

    for(i=1; i<=5; i=i+1)
    {
        for(j=1; j<=5; j=j+1)
        {
            if(i==3 || i==5)
            {
                printf(" ");
                continue;
            }
            else
            {
                printf("*");

            }

        }
        printf("\n");
    }
}

