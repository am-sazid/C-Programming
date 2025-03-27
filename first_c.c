// # include<stdio.h>

// int main (){
//     int age = 18;
//     float pi = 3.14;
//     char star = '*';
//     printf("%d\n",age);
//     printf("%f\n",pi);
//     printf("%c\n",star);
//     return 0;
// }

#include<stdio.h>

int main() {

    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    int sum = a + b;

    printf("The Sum : %d\n",sum);

    return 0;
}