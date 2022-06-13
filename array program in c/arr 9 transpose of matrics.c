// WAP to print transpose of matrics
// transpose of matrics means convert row into column and column into row......

#include<stdio.h>
main()
{
    int arr[3][3];
    int i,j;
    printf("Enter array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",arr[j][i]);
        }
          printf("\n");
    }

}
