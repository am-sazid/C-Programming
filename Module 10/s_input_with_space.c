#include<stdio.h>

int main()
{
    char s[20];
    fgets(s,7,stdin);
    // gets(s);
    printf("%s",s);
    return 0;
}