#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    // Method 01
    // int i = 0;
    // while (i < 10)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Equal\n");
    //         break;
    //     }
    //     else if (a[i] == '\0' || a[i] < b[i])
    //     {
    //         printf("A is Smaller\n");
    //         break;
    //     }
    //     else if (b[i] == '\0' || a[i] > b[i])
    //     {
    //         printf("B is Smaller\n");
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }

    // }

    // Method 2

    int cmp = strcmp(a,b);
    if (cmp < 0)
    {
        printf("A Is Smaller");
    }
    else if (cmp > 0)
    {
        printf("B is Smaller");
    }
    else{
        printf("Equal");
    }
    
    

    return 0;
}