#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    scanf("%s",s);
    int sz = strlen(s);
    int i = 0;
    int j = sz-1;

    int count = 0;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            count++;
        }
        
        i++;
        j--;
    }
    int diff = sz / 2;

    if (diff == count)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    return 0;
}