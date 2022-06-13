//wrie a programm to print all even number upto n using while loop

#include<stdio.h>
main()
{
int n,i;

printf("Write a number");
scanf("%d",&n);
i=2;
while(i<=n)
{
printf("%d\n",i);
    i=i+2;
}
}
