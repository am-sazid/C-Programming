#include<stdio.h>

int main()
{
    int a = 23;
    float b = 2;
    int add = a + b;
    int sub = a - b;
    int multi = a * b;
    float div = a / b;
    printf("Result = %d\n",add);
    printf("Result = %d\n",sub);
    printf("Result = %d\n",multi);
    printf("Result = %.2f\n",div);
    return 0; 
}