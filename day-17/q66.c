#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],unionarr[200];
    int n1,n2,i,j,k=0,found;    
    printf("enter size of first array");
    scanf("%d",&n1);
    printf("enter the elements of first array\n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
        unionarr[k++]=arr1[i];
    }
    printf("enter size of second array");
    scanf("%d",&n2);
    printf("enter the elements of second array\n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
        found=0;
        for(j=0;j<k;j++)
        {
            if(arr2[i]==unionarr[j])
            {
                found=1;
                break;
            }
        }
        if(!found)
        {
            unionarr[k++]=arr2[i];
        }
    }
    printf("the union of the two arrays is:\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",unionarr[i]);
    }
    return 0;
}