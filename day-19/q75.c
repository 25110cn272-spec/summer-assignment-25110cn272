#include <stdio.h>

int main() 
{
    int r, c;

    printf("Enter number of rows and columns");
    scanf("%d %d", &r, &c);

    int A[100][100];

    printf("Enter elements of the matrix\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Transpose of the matrix\n");
    for (int i = 0; i < c; i++) 
    {
        for (int j = 0; j < r; j++) 
        {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }

    return 0;
}