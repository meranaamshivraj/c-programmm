#include<stdio.h>
main()
{
    int i,n,sum=0;
    i=1;
    printf("Enter number");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("%d",sum);
}
