// Bài 2: Viết chương trình nhập vào một phép tính bất kỳ như: +,-,*,/ và
// thực hiện yêu cầu sau:
//  a. Nếu phép tính = + thực hiện tính tổng
//  b. Nếu phép tính = - thực hiện tính hiệu
//  c. Nếu phép tính = * thực hiện tính tích
//  d. Nếu phép tính = / thực hiện tính thương
// -------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

// Declare function compute()
void compute(char operator, int num1, int num2);

int main()
{
    char operator;
    int num1, num2;

    printf("Enter an operator: ");
    operator= getchar();
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calling function compute()
    compute(operator, num1, num2);
}

// Function: Implement function compute()
void compute(char operator, int num1, int num2)
{
    switch (operator)
    {
    case '+':
        printf("Addition = %d", num1 + num2);
        break;
    case '-':
        printf("Subtraction = %d", num1 - num2);
        break;
    case '*':
        printf("Multiplication = %d", num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Zero Division Error!");
        }
        else
        {
            printf("Division = %d", num1 / num2);
        }
        break;

    default:
        printf("Wrong input!");
        break;
    }
}
