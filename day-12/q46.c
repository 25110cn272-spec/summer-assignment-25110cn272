#include <stdio.h>
int armstrong(int n)
{
    int sum = 0, rem, temp;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
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
    if (armstrong(n))
        printf("the number is armstrong");
    else
        printf("the number is not armstrong");
    return 0;
}