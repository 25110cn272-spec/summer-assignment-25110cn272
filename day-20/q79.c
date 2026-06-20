#include<stdio.h>
int main()
{
    int a[10][10],rows,columns,i,j,sum;
    printf("enter number of rows and columns");
    scanf("%d %d", &rows,&columns);
    printf("enter the element of the matrix \n");
    for(i=0; i<rows; i++);
    {
        for (j=0; j<columns; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("row-wise sums are \n");
    for (i=0; i<rows; i++)
    {
        sum=0;
        for(j=0; j<columns; j++)
        {
            sum+=a[i][j];
        }
        printf("sum of row %d=%d\n", i+1, sum);
    }
    return 0;
    
}
