#include<stdio.h>

int main()
{
    int a ;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);

    if (a % b == 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}