#include<stdio.h>
int main()
{
    int start, end, i,j, prime;
    printf("enter starting number");
    scanf("%d",&start);
    printf("enter ending point");
    scanf("%d",&end);
    printf("prime number between%d and %d are:/n",start,end);
    for(i=start;i<=end;i++)
    {
        if(i<=1)
        continue;
        prime=1;
        for(j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                prime=0;
                break;
            }
        }
        if (prime)
        printf("%d\n", i);
    }
    return 0;
}