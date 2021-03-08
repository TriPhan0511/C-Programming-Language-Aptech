#include<stdio.h>

void swap(int *p1, int *p2);

int main() {
    int num1, num2;

    // printf("Enter the first number: ");
    // scanf("%d", &num1);
    // printf("Enter the first number: ");
    // scanf("%d", &num2);

    num1 = 1;
    num2 = 2;

    // Before swap
    printf("\nNumber 1: %d, Number 2: %d", num1, num2);

    // Swap two numbers
    swap(&num1, &num2);

    // After swap
    printf("\nNumber 1: %d, Number 2: %d", num1, num2);

}

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

