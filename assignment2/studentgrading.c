#include <stdio.h>
int main()
{
    int marks;
    char grade;
    printf("input student's marks: ");
    scanf("%d" ,&marks);
    if (marks > 70)
    {
        grade = 'A';
    }
    else if (marks > 60)
    {
        grade = 'B';
    }
    else if(marks > 50)
    {
        grade = 'C';
    }
    else if(marks > 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'E';
    }
    switch(grade)
    {
        case 'A':
        printf("grade %c\n" ,grade);
        break;
        case 'B':
        printf("grade %c\n" ,grade);
        break;
        case 'C':
        printf("grade %c\n" ,grade);
        break;
        case 'D':
        printf("grade %C\n" ,grade);
        break;
        case 'E':
        printf("grade %c\n" ,grade);
        break;
    }
    return 0;
}