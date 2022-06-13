//wrie a programm to print all even number upto n using while loop and if else statement.

#include<stdio.h>
main()
{
int n,i;

printf("Write a number");
scanf("%d",&n);
i=1;
while(i<=n)
{
    if (i % 2==1)
    {
        printf("%d\n",i);
    }
    i=i+1;
}
}
