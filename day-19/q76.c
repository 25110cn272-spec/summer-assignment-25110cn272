#include <stdio.h>

int main() 
{
    int n, i, j, sum = 0;
    int a[100][100];

    printf("Enter the order of the square matrix ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) 
    {
        sum += a[i][i];
    }

    printf("Sum of principal diagonal elements = %d\n", sum);

    return 0;
}