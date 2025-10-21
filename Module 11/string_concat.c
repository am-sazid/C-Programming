#include<stdio.h>
#include<string.h>

int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    // int idx = strlen(a);
    // int idxb = strlen(b);

    // for (int i = 0; i < idxb+1; i++)
    // {
    //     a[idx+i] = b[i];
    // }
    strcat(a,b);

    printf("%s %s",a,b);
    
    return 0;
}