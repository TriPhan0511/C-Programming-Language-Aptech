#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char filePath[50] = "D:\\a_binary_file.bin";
    ptr = fopen(filePath, "w+b"); // mode "wb": Write to a binary file

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    fprintf(ptr, "%d", num);
    printf("Done!");

    fclose(ptr); // Close the file
}