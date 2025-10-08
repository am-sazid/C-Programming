#include<stdio.h>

int main()
{
    int user;
    scanf("%d",&user);
    for (int i = 1; i <= user; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n",i);
        }else{
            printf("%d No\n",i);
        }

    }
    return 0;
}