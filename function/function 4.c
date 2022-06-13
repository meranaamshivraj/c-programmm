
//Write a function which accept two parameters value.

#include<stdio.h>

add(int x, int y)
{
    int z;
    z=x+y;
    printf("\nAdditon is %d",z);
}
area(float r)
{
    float area;
    area=3.14*r*r;
    printf("\nArea of circle is %f",area);
}

main()
{
    add(10,51);
    area(4);
}

