//Write a programm to print all 1 to n number using while loop


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
    i=i+1;
}
}
