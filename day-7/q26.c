#include <stdio.h>

int fib(int n)
{
    if (n < 2)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, i = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (i < n)
    {
        printf("%d ", fib(i));
        i++;
    }

    return 0;
}