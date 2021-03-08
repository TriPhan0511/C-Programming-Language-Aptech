// Passing Pointers to Functions

#include<stdio.h>

int addOne(int *p) {
    return (*p)++;
}

int main() {
    int num = 10;
    int *p;
    p = &num;

    // Display the value of num and *p after increment
    printf("\nBefore increment, num = %d, *p = %d", num, *p);

    // Increase *p by 1
    addOne(p);

    // Display the value of num and *p after increment
    printf("\nAfter increment, num = %d, *p = %d", num, *p);

}

