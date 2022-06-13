   //pointer

#include<stdio.h>                                   //header file
add(int *p, int *q)                                  //assign int variable p and q
{
   *p=*p+*q;
   *q=*p-*q;                                              //assignment operators using pointer
   *p=*p -*q;
}
main()
{
int a,b;
a=2;
b=4;
printf("%d %d\n",a,b);
add(&a,&b);                              //it locates the address of variables.....
printf("%d %d",a,b);

}
