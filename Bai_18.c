// Bài 18: Viết chương trình ghi một giá trị vào tệp có tên là input.txt.
// Đọc giá trị từ tệp input.txt cho vào biến n.
// Tổng các giá trị của n, sau đó ghi kết quả vào tệp output.txt.
//  Ví dụ:
// 	- Nhập giá trị vào tệp input.txt là 5
// 	- Đọc giá trị từ tệp input.txt là n=5
// 	- Tính tổng S=1+2+3+4+5 => S=15 thì số 15 được ghi vào tệp output.txt

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declare functions
int readFromTextFile(char filePath[50]);          // Read a number from a text file
void writeToTextFile(char filePath[50], int num); // Write a number to a text file
int compute(int num);                             // Example: 5 => 1+2+3+4+5 = 15

// main function
int main()
{
    char filePath[50] = "D:\\input.txt";
    char filePath2[50] = "D:\\output.txt";

    // Write a number into "input.txt" file
    int num = 6;
    writeToTextFile(filePath, num);

    // Take a number from a text file and save in variable num2
    int num2 = readFromTextFile(filePath);

    // Compute sum - Example: 5 => 1+2+3+4+5 = 15
    // And write the result into "output.txt" file
    int num3 = compute(num2);
    writeToTextFile(filePath2, num3);

    // Print to the screen to notify the program end.
    printf("Done!");
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

// Function: Write a number to a text file
void writeToTextFile(char filePath[50], int num)
{
    FILE *ptr;
    ptr = fopen(filePath, "w");

    // Using fprintf to write to text file
    fprintf(ptr, "%d", num);
    fclose(ptr);
}

// Function: Example: 5 => 1+2+3+4+5 = 15
int compute(int num)
{
    int result = 0;
    for (int i = 1; i <= num; i++)
    {
        result += i;
    }

    return result;
}
