// Bài 19: Cho một tệp có tên là string.txt lưu giá trị là 123456. Thực hiện các yêu cầu sau:
//  a. Đọc giá trị từ tệp string.txt cho vào biến string (chuỗi).
//  b. Chuyển giá trị chuỗi đó sang số nguyên.
//  c. Tính tổng các chữ số của số nguyên đó rồi ghi vào tệp output.txt (viết hàm)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declare functions
int strToInt(char arr[]);
int compute(int num);

// main function
int main()
{
    char filePath[50] = "D:\\string.txt";
    FILE *ptr = fopen(filePath, "r");

    if (ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    char str[50];
    fscanf(ptr, "%s", &str);
    fclose(ptr);

    // Convert from string to integer
    int num = strToInt(str);

    // Sum
    printf("\nSum = %d", compute(num));
}

// Function: Convert from string to integer
int strToInt(char arr[])
{
    int num = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        num = num * 10 + (arr[i] - '0');
    }
    return num;
}

// Function: Example: 1234 = 1+2+3+4 = 10
int compute(int num)
{
    int ans = 0;
    int remainder;

    while (num != 0)
    {
        remainder = num % 10;
        ans += remainder;
        num = num / 10;
    }
    return ans;
}
