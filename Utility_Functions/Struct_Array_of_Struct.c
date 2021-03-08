#include <stdio.h>

struct Person
{
    char name[50];
    int citNo;
    float salary;
};

typedef struct Person Employee;

// Function: Input data into array of Employees
void inputData(Employee employees[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\nEmployee %d: \n", i + 1);
        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        printf("City Code: ");
        scanf("%d", &employees[i].citNo);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
}

// Function: Display data in the array of Employees
void displayData(Employee employees[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEmploye %d\n", i + 1);
        printf("Name: %s", employees[i].name);
        printf("City Code: %d\n", employees[i].citNo);
        printf("Salary: %.2f\n", employees[i].salary);
    }
}

int main()
{
    Employee employees[10];
    int n; // number of employees

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Calling inputData() function to input data into "employees" array
    printf("-----Input Data-----\n");
    inputData(employees, n);

    // Calling displayData() function to display data in "employess" array
    printf("\n-----Information-----\n");
    displayData(employees, n);
}