// Bài 14: Viết hàm nhập vào một chuỗi ký tự chứa các chữ số và thực hiện các yêu cầu sau:
//  a. Chuyển chuỗi số vừa nhập thành một số nguyên.
//  b. Thực hiện tính tổng các chữ số của số nguyên đó.
// -------------------------------------------------------------

#include <stdio.h>
#include <string.h>

// Declare functions
int strToInt(char arr[]);
int compute(int num);

int main()
{
    char str[5]; // example: 1234

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert from string to integer
    int num = strToInt(str);

    // Sum
    int sum = compute(num);
    printf("\nSum = %d", sum);
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
