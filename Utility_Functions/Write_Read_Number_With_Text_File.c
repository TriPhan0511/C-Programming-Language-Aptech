#include <stdio.h>
#include <stdlib.h>

// Functions Declaring
void writeToTextFile();
int readFromTextFile();

int main()
{
    char filePath[50] = "D:\\a_text_file.txt";
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call writeToTextFile() function
    writeToTextFile(filePath, num);
    printf("\nWrote the number to file %s !", filePath);

    // Call readFromTextFile() function
    printf("\nNumber from file %s: %d", filePath, readFromTextFile(filePath));
}

// Function: Write a number to a text file
void writeToTextFile(char filePath[50], int num)
{
    FILE *ptr;
    ptr = fopen(filePath, "w");

    // Using fprintf to write to text file
    fprintf(ptr, "%d", num);
    fclose(ptr);
}

// Function: Read a number from a text file
int readFromTextFile(char filePath[50])
{
    FILE *ptr = fopen(filePath, "r");

    if (ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    int num;
    fscanf(ptr, "%d", &num);
    fclose(ptr);

    return num;
}