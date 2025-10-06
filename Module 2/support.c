#include<stdio.h>

int main(){
    int a ;
    int b ;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    
    if (a > b){
        printf("A is Greater Than B\n");
    }
    else if (a < b) {
        printf("B is Grater Than A\n");
    }else{
        printf("They equal\n");
    }
    return 0;
}