#include <stdio.h>

long long fact(int n)
{
    if (n <= 1)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    long long result = fact(n);

    printf("Factorial = %lld", result);

    return 0;
}