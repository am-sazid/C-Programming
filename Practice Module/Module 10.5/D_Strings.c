#include<stdio.h>
#include<string.h>

int main()
{
    char a[11],b[11];
    scanf("%s %s",a,b);
    int sza = strlen(a);
    int szb = strlen(b);
    printf("%d %d\n",sza,szb);
    printf("%s%s\n",a,b);
    
    for (int i = 0; i < 1; i++)
    {
        char tmp = b[0];
        b[0] = a[0];
        a[0] = tmp;
        
    }

    printf("%s %s",a,b);
    
    
    return 0;
}