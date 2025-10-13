#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int Even = 0, Odd = 0, Positive = 0, Negative = 0 ;
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d",&x);

        if ( x % 2 == 0)
        {
            Even++;
        }
        if (x % 2 != 0)
        {
            Odd++;
        }
        if (x > 0 )
        {
            Positive++ ;
        }
        if (x < 0 )
        {
            Negative++ ;
        }
    }

    printf("Even: %d\n",Even);
    printf("Odd: %d\n",Odd);
    printf("Positive: %d\n",Positive);
    printf("Negative: %d\n",Negative);
    return 0;
}