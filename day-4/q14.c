 #include <stdio.h>

int main() 
{
    int n, i;
    long long a = 0, b = 1, c;

    printf("Enter n ");
    scanf("%d", &n);

    if (n == 0)
        printf("%lld\n", a);
    else if (n == 1)
        printf("%lld\n", b);
    else 
    {
        for (i = 2; i <= n; i++) 
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%lld\n", b);
    }

    return 0;
}