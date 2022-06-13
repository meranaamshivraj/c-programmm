
//write a program to take number from users and print from 1 to n.

#include<stdio.h>
main()
{
int n,i;

printf("Enter a number");
scanf("%d",&n);

i=1;

while (i<=n)
{
printf("%d\n",i);

i=i+1;
}
}
