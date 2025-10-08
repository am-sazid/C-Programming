// #include<stdio.h>

// int main()
// {
//     for (int i = 1 ; i <= 128; i *= 2)
//     {
//         printf("%d\n",i);
//     }
// }


#include<stdio.h>

int main()
{
    int user ;
    scanf("%d",&user);
    int sum = 0;
    for (int i = 0; i <=user; i += 1)
    {
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}