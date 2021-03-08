#include<stdio.h>

int main() {
    int a[10], i=0, j=1;

    // Input data
    for (; i<=9; i ++) {
        printf("%d: ", i+1);
        scanf("%d", &a[i]);
    }

    // Display the array
    printf("\nThe array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    // printf("i = %d", i); // check

    // Compute the sum of data in the array
    int sum = 0;
    
}