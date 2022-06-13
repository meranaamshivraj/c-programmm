//Write a Pointer program

#include<stdio.h>
 add(int*p,int*q)
 {
     *p=*p+*p;
     *q=*q+*q;
 }
 main()
 {
     int a,b;
     a=2;
     b=4;

     printf("%d %d\n",a,b);
     add(&a,&b);
     printf("%d %d",a,b);
 }
