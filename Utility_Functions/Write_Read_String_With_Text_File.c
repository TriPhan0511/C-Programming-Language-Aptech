#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Functions Declaring
void writeStringToTextFile(char filePath[50], char str[50]);

// Function: Read a string from a text file: CHUA DUOC
// const char *getName()
// {
//     return "Belly";
// }

// main function
int main()
{

    // WRITE A STRING TO A TEXT FILE
    char filePath[50] = "D:\\output.txt";
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Use fgets() function to get string entered by user
    // Calling function writeStringToTextFile() to write a string to a text file
    writeStringToTextFile(filePath, name);
    printf("Wrote your name to %s !", filePath);
}

// Function: Write a string to a text file
void writeStringToTextFile(char filePath[50], char str[50])
{
    FILE *fp;
    fp = fopen(filePath, "w");
    fprintf(fp, "%s", str); // Use fprintf() function to write a string to a text file
    fclose(fp);
}