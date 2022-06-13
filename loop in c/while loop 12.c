//write a programm to find a sum all even number between 1 to n.

#include<stdio.h>
main()
{
int i,num,sum;

printf("Write a number");
scanf("%d",&num);
i=1;

while(i<=num)
{
    if(i%2==0)
    {
        sum=sum+i;
    }
     i=i+1;
}
printf("The sum of  even number from %d to %d = %d",num,sum);
}
