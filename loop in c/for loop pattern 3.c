
//        Pattern Program 3

#include<stdio.h>
main()
{
    int i,j;

for(i=4;i>=1;i=i-1)
{
    for(j=1;j<=i;j=j+1)
    {
        printf("*");     //instead of this we use printf("%d",j); for new pattern .
    }
    printf("\n");
}
}
