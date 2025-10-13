#include<stdio.h>
#include<limits.h>

int main()
{
    int N;
    scanf("%d",&N);
    int max = INT_MIN;
    for (int i = 1 ; i <= N ; i++)
    {
        int val;
        scanf("%d",&val);
        if (val > max)
        {
            max = val;
        }
    }
    printf("%d",max);
    return 0;
}