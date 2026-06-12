#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    printf("the %dth Fibonacci number is %d", n, fibonacci(n));
    return 0;
}