#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    scanf("%s",s);
    // int count = 0;
    // for (int i = 0; s[i] != '\0' ; i++)
    // {
    //     count ++;
    // }
    // printf("%d",count);
    int sz = strlen(s);
    printf("%d\n",sz);
    return 0;
}