#include<stdio.h>
#include<string.h>

int main()
{
    char s[100001];
    scanf("%s",s);

    int sz = strlen(s);
    int vc = 0;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == 'a')
        {
            vc++;
            
        }
        else if (s[i] == 'e')
        {
            vc++;
            
        }
        else if (s[i] == 'i')
        {
            vc++;
            
        }
        else if (s[i] == 'o')
        {
            vc++;
            
        }
        else if (s[i] == 'u')
        {
            vc++;
            
        }
        
        
    }

    int t = sz - vc;
    printf("%d",t);
    
    return 0;
}