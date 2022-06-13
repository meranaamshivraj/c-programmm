//wrie a programm to print all odd number upto n using while loop

#include<stdio.h>
main()
{
int n,i;

printf("Write a number");
scanf("%d",&n);
i=1;
while(i<=n)
{
printf("%d\n",i);
    i=i+2;
}
}
