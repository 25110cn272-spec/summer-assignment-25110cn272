#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int count[256] = {0};
    int i, max = 0;
    char ch;

    printf("Enter a string");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) 
    {
        count[(unsigned char)str[i]]++;
    }

    for (i = 0; i < 256; i++) 
    {
        if (count[i] > max) 
        {
            max = count[i];
            ch = i;
        }
    }

    printf("Maximum occurring character: %c\n", ch);
    printf("Frequency: %d\n", max);

    return 0;
}