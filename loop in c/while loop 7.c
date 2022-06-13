//write a programm to take number from user and print from n to 1.

#include<stdio.h>
main()
{
      int n,i;
    printf("Enter a number");
    scanf("%d",&n);

    while (n>=1)
    {
        printf("%d\n",n);

        n=n-1;
    }
}
