#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int arr[n];
    int *ptr = arr;

    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    
    for(int i = n-1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    
    int sum = 0, max = *ptr, min = *ptr;
    for(int i = 0; i < n; i++) {
        sum += *(ptr + i);
        if(*(ptr + i) > max) max = *(ptr + i);
        if(*(ptr + i) < min) min = *(ptr + i);
    }

    double avg = (double)sum / n;

    // Print results
    printf("%d\n", sum);
    printf("%.2lf\n", avg);
    printf("%d\n", max);
    printf("%d\n", min);

    return 0;
}
