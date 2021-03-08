#include<stdio.h>
#include<stdlib.h>

int main() {
    int *p;
    int arrSize;

    // Enter the size of array
    printf("\nEnter the size of the array: ");
    scanf("%d", &arrSize);

    // Allocate memory for the array
    p = (int*)malloc(arrSize*sizeof(int));

    // Enter data to the array using pointer p 
    if (p != NULL)
    {
        printf("\nEnter data to the array: \n");
        for (int i = 0; i < arrSize; i++)
        {
            printf("Element %d = ", i);
            scanf("%d", (p+i));
        }
    }
    
    // Display the array
    if (p != NULL)
    {
        printf("\nThe array:\n");
        for (int i = 0; i < arrSize; i++)
        {
            printf("%d ", *(p+i));
        }
    }
}