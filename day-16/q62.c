#include <stdio.h>
int main()
{
    int arr[100], i, n;
    int maxfreq=0, freq,element;
    printf("enter the value if element ");
    scanf("%d", &n);
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
    for (i = 0; i < n; i++)
    {
        freq=1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq > maxfreq)
        {
            maxfreq = freq;
            element = arr[i];
        }
    }
    printf("the element with maximum frequency is %d", element);
    return 0;
}