#include<stdio.h>
int main()
{
    int arr[100],n,i;
    int largest,second_largest;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=second_largest=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    printf("Largest element = %d\n",largest);
    printf("Second largest element = %d\n",second_largest);
    return 0;
}