#include<stdio.h>
int main()
{
    char str[100], *ptr;
    int length=0;
    printf("enter a string");
    scanf("%s", str);
    ptr= str;
    while(*ptr)
    {
        length++;
        ptr++;

    }
printf("length of the string=%d \n",length);
return 0;
}