#include<stdio.h>

int main() {
    // int var = 5;
    // printf("var: %d", var);
    // printf("\nAdress of var: %d", &var);

    // Declare and initialize an integer variable
    int num = 10;
    // Declare a pointer and assign the address of variable num to that pointer
    int * p;
    p = &num;
    // Get the value of variable num via poiter p
    printf("\nnum = %d", *p); // 10

    // Change the value of variable num
    num = 1;
    printf("\nnum = %d", *p); // 1

    // Change *p to 100
    *p = 100;
    printf("\nnum = %d", num); // 100
    printf("\nnum = %d", *p); // 100
}