#include<stdio.h>
#include<string.h>

int main()
{
    int a[101],b[101] ,tmp[101];
    scanf("%s %s",a,b);
    // int szb = strlen(b);
    // for (int i = 0; i <= szb ; i++)
    // {
    //     a[i] = b[i];
    // }

    strcpy(tmp,a);
    strcpy(a,b);
    strcpy(b,tmp);

    printf("%s %s",a,b);
    

    return 0;
}