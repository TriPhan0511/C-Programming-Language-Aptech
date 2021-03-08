// Bài 16: Xây dựng cấu trúc Student như sau:
// 	Name: char[30]
// 	Age : int
// 	Marks:
// 	English : float
// 	Computer : float
// 	Math : float
//  a. Viết hàm nhập vào một mảng với n phần tử Student.
//  b. Viết hàm in ra màn hình các Student vừa nhập từ mảng, theo cấu trúc sau:
// STT   Full name     Age      English   Computer     Math
// 1     Dung	    40          5          6          7
// 2     Binh          20          9          7          8

//  c. Tính điểm trung bình cho sinh viên và in danh sách sv có thêm cột điểm trung bình.
// -------------------------------------------------------------

#include <stdio.h>
#include <string.h>

typedef struct Mark
{
    float englishMark;
    float computerMark;
    float mathMark;
} mark;

typedef struct Student
{
    char name[50];
    int age;
    mark studentMark;
} student;

// Declare Functions
void inputData(student students[], int numberOfStudents);
void displayData(student students[], int numberOfStudents);
float avgMark(student s);
void displayData2(student students[], int numberOfStudents);

// main function
int main()
{
    student students[20];
    int numberOfStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // Calling inputData() function to enter data into the "students" array
    printf("Enter the information of students\n");
    inputData(students, numberOfStudents);

    // Calling displayData() function to display data on the screen
    printf("----------------Information of students----------------\n");
    displayData(students, numberOfStudents);

    // Calling displayData2() funtion to display data, include new field "Average Mark"
    printf("----------------Information of students----------------\n");
    displayData2(students, numberOfStudents);
}

// Function: Input data into array "students"
void inputData(student students[], int numberOfStudents)
{
    for (int i = 0; i < numberOfStudents; i++)
    {
        fflush(stdin);
        printf("-----Student %d-----\n", i + 1);
        printf("Name: ");
        gets(students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("English mark: ");
        scanf("%f", &students[i].studentMark.englishMark);
        printf("Computer mark: ");
        scanf("%f", &students[i].studentMark.computerMark);
        printf("Math mark: ");
        scanf("%f", &students[i].studentMark.mathMark);
    }
}

// Function: Display data in the array "students"
void displayData(student students[], int numberOfStudents)
{
    // printf("STT\tName\tAge\tEnglish\tComputer\tMath\n");
    printf("STT\tName\t\tAge\tEnglish\t\tComputer\tMath\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("%d\t%s\t\t%d\t%.1f\t\t%.1f\t\t%.1f\n",
               i + 1,
               students[i].name,
               students[i].age,
               students[i].studentMark.englishMark,
               students[i].studentMark.computerMark,
               students[i].studentMark.mathMark);
    }
}

// Function: Compute the student's average of marks
float avgMark(student s)
{
    return (s.studentMark.computerMark + s.studentMark.englishMark + s.studentMark.mathMark) / 3;
}

// Function: Display data in the array "students", include new field "Average Mark"
void displayData2(student students[], int numberOfStudents)
{
    printf("STT\tName\t\tAge\tEnglish\t\tComputer\tMath\t\tAverage Mark\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("%d\t%s\t\t%d\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\n",
               i + 1,
               students[i].name,
               students[i].age,
               students[i].studentMark.englishMark,
               students[i].studentMark.computerMark,
               students[i].studentMark.mathMark,
               avgMark(students[i]));
    }
}
