// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     int b[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//         scanf("%d",&b[i]);
//     }
    
//     int c[n] ;

//     for (int i = 0; i < n; i++)
//     {
//         c[i] = b[i];

//     }

//     for (int i = 0; i < n; i++)
//     {
//         int sum = a[i] + b[n-1];
//         printf("%d ",sum);
//     }
    
    
//     return 0;
// }



#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }


    for (int i = 0; i < n; i++)
    {
        c[i] = b[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = a[i] + c[i];
        printf("%d ", sum);
    }

    return 0;
}
