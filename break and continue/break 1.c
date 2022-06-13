//Write a program to print all day of week using break statement


#include<stdio.h>
main()
{
int day;
printf("Enter A Day number");
scanf("%d",&day);

switch(day)
{
case 1:
printf("Monday\n");
break;

case 2:
printf("Tueday\n");
break;

case 3:
printf("Wednesday\n");
break;

default:
printf("Its Wrong Choice");
}
}
