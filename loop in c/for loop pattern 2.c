
//        Pattern Program 2

#include<stdio.h>
main()
{
    int i,j;

for(i=1;i<=4;i=i+1)
{
    for(j=1;j<=i;j=j+1)
    {
        printf("*");           //when we use printf("%d",j) instead of this line we give new pattern try this.
    }
    printf("\n");
}
}
