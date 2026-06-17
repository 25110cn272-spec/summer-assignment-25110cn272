#include<stdio.h>
int main()
{
    int arr[100],i,n;
    int expectedsum , actualsum=0,missing;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements of array\n");  
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        actualsum+=arr[i];
    }
    expectedsum=(n*(n+1))/2;
    missing=expectedsum-actualsum;
    printf("the missing number is %d",missing);
    return 0;
}
