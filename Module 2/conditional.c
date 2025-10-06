#include<stdio.h>

int main(){
    int a ;
    // int b ;
    printf("Enter a :");
    scanf("%d",&a);
    // printf("Enter b :");
    // scanf("%d\n",&b);
    
    if (a > 10){
        printf("A is Greater Than B\n");
    }
    else if (a < 10) {
        printf("B is Grater Than A\n");
    }else{
        printf("They equal\n");
    }
    return 0;
}