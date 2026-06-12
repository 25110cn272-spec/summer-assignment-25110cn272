#include <stdio.h>
long  long  factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    printf("the factorial is %lld", factorial(n));
    return 0;
}