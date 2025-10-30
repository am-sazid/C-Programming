#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);   
    char number[n + 1];  
    scanf("%s", number);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += number[i] - '0'; 
    }

    if (sum % 3 == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
