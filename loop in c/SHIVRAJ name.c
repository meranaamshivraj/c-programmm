
//Print SHIVRAJ name using using function ..

#include<stdio.h>

s ()
{

int i,j;

    for(i=1;i<=5;i=i+1)
    {
        for(j=1;j<=5;j=j+1)
        {
            if(i==1 || i==5 || i==3 ||i+j==3||i+j==9)
            {
                printf("*");
            }
           else
           {
               printf(" ");
           }
    }
    printf("\n");
    }
}


h ()
{
printf("\n");
int i,j;

    for(i=1;i<=5;i=i+1)
    {
        for(j=1;j<=5;j=j+1)
        {
            if(j==1 || j==5 || i==3 )
            {
                printf("*");
            }
           else
           {
               printf(" ");
           }
    }
    printf("\n");
    }
}


i ()
{
printf("\n");
int i,j;

    for(i=1;i<=5;i=i+1)
    {
        for(j=1;j<=5;j=j+1)
        {
            if( j==3 )
            {
                printf("*");
            }
           else
           {
               printf(" ");
           }
    }
    printf("\n");
    }
}

v ()
{
printf("\n");
int i,j;

    for(i=1;i<=3;i=i+1)
    {
        for(j=1;j<=5;j=j+1)
        {
            if(i==j || i+j==6 )
            {
                printf("*");
            }
           else
           {
               printf(" ");
           }
    }
    printf("\n");
    }
}


r ()
{
printf("\n");
int i,j;

    for(i=1;i<=6;i=i+1)
    {
        for(j=1;j<=4;j=j+1)
        {
            if( i==1 || j==1 ||i==3|| i+j==6 ||i==5 && j==3 ||i==6 && j==4 )
            {
                printf("*");
            }
           else
           {
               printf(" ");
           }
    }
    printf("\n");
    }
}


a ()
{
printf("\n");
int i,j;

    for(i=1;i<=5;i=i+1)
    {
        for(j=1;j<=5;j=j+1)
        {
            if( i==1||i==3||j==1||j==5  )
            {
                printf("*");
            }
           else
           {
               printf(" ");
           }
    }
    printf("\n");
    }
}

j ()
{
printf("\n");
int i,j;

    for(i=1;i<=5;i=i+1)
    {
        for(j=1;j<=5;j=j+1)
        {
            if( i==1||j==3||i==5 && j==1 ||i==5 && j==2 ||i==4 && j==1 )
            {
                printf("*");
            }
           else
           {
               printf(" ");
           }
    }
    printf("\n");
    }
}


main()
{
    s ();
printf("----------------------------------------");
    h();
    printf("----------------------------------------");
    i();
    printf("----------------------------------------");
    v();
    printf("----------------------------------------");
    r();
    printf("----------------------------------------");
    a();
     printf("----------------------------------------");
    j();

}

