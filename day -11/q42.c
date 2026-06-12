#include <stdio.h>
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main(void)
{
    int a, b;
    printf("enter the value of a and b");
    scanf("%d%d", &a, &b);
    printf("the maximum is %d", maximum(a, b));
    return 0;
}
