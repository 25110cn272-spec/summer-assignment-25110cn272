#include<stdio.h>

int sun(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a, b;
    printf("enter the value of a and b");
    scanf("%d%d", &a, &b);
    printf("the sum is %d", sun(a, b));
    return 0;
}
