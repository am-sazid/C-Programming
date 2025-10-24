#include<stdio.h>
#include<string.h>

int main()
{
    char s[100001];
    scanf("%s",s);

    int sz = strlen(s);
    char v[5] = {0};
    int vc = 0;
    for (int i = 0; i < sz; i++)
    {
        int val = s[i];
        v[val]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ",v[i]);
    }
    
    // int t = sz - vc;
    // printf("%d",t);
    
    return 0;
}