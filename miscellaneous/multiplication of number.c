#include<stdio.h>
main()
{
    int n,i,b;
    printf("Enter number");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        b=n*i;
        printf("\n%d",b);
        i=i+1;
    }
}
