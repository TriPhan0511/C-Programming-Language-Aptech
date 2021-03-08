#include<stdio.h>

int main() {
    int num = 10;

    // int * p;
    // p = &num;

    int * p = &num;

    printf("The address of num: %d", &num);
    printf("\nThe address of num: %d", p);


}