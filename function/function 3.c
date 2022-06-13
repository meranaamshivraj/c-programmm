//program 1: write a function which will take two numbers inputs and print addition.

//program2:write a function which will take radius of circle and print area of circle.


#include<stdio.h>

add()
{
    int a,b,c;

printf("Enter two numbers");
scanf("%d %d",&a,&b);

c=a+b;
printf("The addition of two numbers is:%d",c);

}

Area()
{
    float r,area;
    printf("\nEnter the radius of circle");
    scanf("%f",&r);

    area= 3.14 * r * r;

    printf("The area of circle is:%f",area);
}
main()
{
    add();
    Area();
}

