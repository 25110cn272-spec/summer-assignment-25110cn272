#include<stdio.h>
int main()
{
    char str[100];
    int i, words=0;
    printf("enter a sentence");
    fgets(str, sizeof(str),stdin);
    for(i=0;str[i] !='\0';i++)
    {
        if((i==0 &&  str[i] !=' ' && str[i] !='\n') || (str[i]!= ' ' && str[i] != '\n' && str[i-1]==' '))
        {
            words++;
        }
    }
    printf("number of words = %d\n",words);
    return 0;
}