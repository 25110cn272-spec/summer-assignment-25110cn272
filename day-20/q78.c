#include<stdio.h>
int main()
{
    int a[10][10],n,i,j,flag=1;
    printf("enter the order orf the matrix");
    scanf("%d,&n");
    printf("enter the element of the matrix \n");
    for (i=0;i<n;i++)
    {
    for (j=0;j<n;j++)
    {
    scanf("%d",&a[i][j]);
    }
}
for (i=0;i<n;i++)
{
    for (j=0;j<n;j++)
    {
        if(a[i][j]!=a[j][i])
        {
            flag=0;
        }
    }
    if(flag==0)
    break;
}
if(flag==1)
printf("the matrix is symmetric");
else
printf("the matrix is not symmetric");
return 0;

}
