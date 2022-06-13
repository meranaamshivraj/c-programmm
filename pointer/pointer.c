#include<stdio.h>

main()
{
    int a=100;
    char b='A';
    float c=1.2;
    int *p;
    char *q;
    float *r;
    p=&a;
    q=&b;
    r=&c;
    printf("\n%d=%u",*p,p);
    printf("\n%c=%u",*q,q);
    printf("\n%f=%u",*r,r);
}
