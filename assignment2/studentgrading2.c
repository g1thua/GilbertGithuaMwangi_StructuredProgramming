#include <stdio.h>

int main()
{
    char registration_number[100];
    char name[100];
    int marks;
    int n;
    char grade;
    int marks_category;

    printf("enter number of students: ");
    scanf("%d" ,&n);
    for(int i = 0; i < n ; i++)
    {
        printf("Student's registration number: ");
        scanf("%s" ,registration_number);
        printf("student's name:");
        scanf("%s" ,name);
        printf("input student's marks: ");
        scanf("%d" ,&marks);
        marks_category = marks / 10;

        switch (marks_category)
        {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            default:
                grade = 'F';
        }
        printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _   \n    STUDENT INFORMATION    \n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _   \nRegistration no: %s\nName: %s\nMarks: %d\nGrade: %c\n" ,registration_number,name,marks,grade);
        switch (marks_category)
        {
            case 10:
            case 9:
            case 8:
            case 7:
            case 6:
            case 5:
            case 4:
            printf("status: pass\n");
            break;
            default:
            printf("status: fail\n");

        }
    }
    return 0;    

}