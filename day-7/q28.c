#include <stdio.h>

int rev = 0;

void reverse(int n)
{
    if (n == 0)
        return;

    rev = rev * 10 + n % 10;
    reverse(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverse(num);

    printf("Reversed number = %d", rev);

    return 0;
}