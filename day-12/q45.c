#include <stdio.h>
int palindrome(int n)
{
    int rev = 0, rem, temp;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (rev == n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    if (palindrome(n))
        printf("the number is palindrome");
    else
        printf("the number is not palindrome");
    return 0;
}