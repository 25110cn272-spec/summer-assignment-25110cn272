#include <stdio.h>
int main()
{
    int arr[100],n,i,j,sum,found=0;
    printf("enter the number of elements in array");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)   
     {
        scanf("%d",&arr[i]);
    }
    printf("enter the required sum");
    scanf("%d",&sum);
    printf ("the pairs with sum %d are",sum);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("%d %d\n",arr[i],arr[j]);
                found=1;
            }
        }
    }
    if(!found)
    {
        printf("no pairs found with the given sum");
    }
    return 0;
}