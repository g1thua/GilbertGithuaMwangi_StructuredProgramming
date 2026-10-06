#include <stdio.h>
int main()
{
    char registration_number[100];
    char name[100];
    int marks;
    int n;
    char grade;
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
        if (marks >= 70)
        {
            grade = 'A';
        }
        else if (marks >= 60)
        {
        grade = 'B';
        }
        else if(marks >= 50)
        {
            grade = 'C';
        }
        else if(marks >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
        printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _   \n    STUDENT INFORMATION    \n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _   \nRegistration no: %s\nName: %s\nMarks: %d\nGrade: %c\n" ,registration_number,name,marks,grade);
        if (marks >= 40)
        {
            printf("Status: pass\n\n");
        }
        else
        {
            printf("Status: fail\n\n");
        }
    }
    return 0;
}