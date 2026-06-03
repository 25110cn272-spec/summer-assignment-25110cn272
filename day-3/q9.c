#include<stdio.h>
int main ()
{
    int num,i,prime=1;
    printf("enter the number");
    scanf("%d",&num);
    if(num<=1)
    {
        prime=0;
    }
    else{
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0){
                prime=0;
            }
        }

    }
    if(prime)
    printf("%d is a prime number", num);
    else
    printf("%d is not a prime number",num);
    return 0;
}