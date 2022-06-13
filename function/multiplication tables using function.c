//Write a function which will accept a number and print the multiplication tables.

#include<stdio.h>

mul()
{
    int i,b,n;
        printf("enter a number");
        scanf("%d",&n);



     i=1;
     while(i<=10)
     {
         b=n*i;
         printf("%d\n",b);
     i=i+1;

     }
}
main()
{
    mul();

}
