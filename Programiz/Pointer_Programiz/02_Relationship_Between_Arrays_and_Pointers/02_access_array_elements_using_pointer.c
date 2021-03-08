// Enter data to an array and then sum them

#include<stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    // Input the data to array, and sum them
    for (int i = 0; i < 5; i++)
    {
        printf("%d: ", i);
        scanf("%d", arr+i);

        sum += *(arr+i);
    }

    // Display the array
    printf("\nThe array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr+i));
    }
    
    // Display the sum
    printf("\nSum = %d", sum);
}

