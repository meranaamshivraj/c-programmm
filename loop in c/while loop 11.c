//write C programm to print multiplication table of given number.

#include<stdio.h>
main()
{
int n,i;

printf("Write a number");
scanf("%d",&n);

i=n;

while(i>=n)
{
printf("%d * %d ==%d/n",i);

i=n+i;
}


}
