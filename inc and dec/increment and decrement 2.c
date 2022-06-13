#include<stdio.h>
main()
{
    int i=10;
    int j=20;
    int c;

    c=i++ + ++j;
    printf("%d %d %d",i,j,c);

}
