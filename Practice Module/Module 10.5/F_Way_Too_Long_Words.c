#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char s[105];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",s);
        int sz = strlen(s);
        int dif = sz-2;
        if (sz > 10)
        {
            printf("%c%d%c\n",s[0],dif,s[sz-1]);
        }
        else
        {
            printf("%s\n",s);
        }
        
    }
    
    
    return 0;
}