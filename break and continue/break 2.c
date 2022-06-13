
//Write a program to make a simple calculator using break statement

#include<stdio.h>
main()
{
    char choice;
    int a,b,c;

    printf("Enter your choice:+,-,*,/\n");
    scanf("%c",&choice);
    printf("Enter two number");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
        case '+':
            c=a+b;
        printf("\n addition is %d",c);
        break;

        case '-':
            c=a-b;
        printf("\n subtractioin is %d",c);
        break;

        case '*':
            c=a*b;
        printf("\n multiplication is %d",c);
        break;

        case '/':
            c=a/b;
        printf("\n division is %d",c);
        break;

        default:
            printf("Its Wrong Choice");
        }
}
