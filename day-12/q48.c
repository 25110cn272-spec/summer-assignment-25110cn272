#include <stdio.h>
int prefect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    if (prefect(n))
        printf("the number is prefect");
    else
        printf("the number is not prefect");
    return 0;
}