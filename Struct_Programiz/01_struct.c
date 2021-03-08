#include <stdio.h>

struct Person
{
    char name[50];
    int citNo;
    float salary;
};

int main()
{
    // Create struct variables
    struct Person person1, person2, p[3];

    // Input data into array of Person
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("\nEnter data of person %d:\n", i + 1);
        printf("Name: ");
        fgets(p[i].name, sizeof(p[i].name), stdin);
        printf("\nCity code: ");
        scanf("%d", &p[i].citNo);
        printf("\nSalary: ");
        scanf("%f", &p[i].salary);
    }

    // Display the array of Person
    printf("Information:\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nInformation of person %d\n", i + 1);
        printf("Name: ");
        puts(p[i].name);
        printf("\nCity code: %d", p[i].citNo);
        printf("\nSalary: %.2f", p[i].salary);
    }
}