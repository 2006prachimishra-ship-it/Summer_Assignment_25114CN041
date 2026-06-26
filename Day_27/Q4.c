#include <stdio.h>

struct Student
{
int roll;
char name[50];
float m1, m2, m3;
float total, percentage;
char grade;
};

int main()
{
struct Student s[10];
int choice = 0, n = 0, i;
int searchRoll, found;

while(choice != 4)
{
    printf("\n===== Marksheet Generation System =====\n");
    printf("1. Add Student\n");
    printf("2. Display Marksheet\n");
    printf("3. Search Student\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

switch(choice)
{
case 1:

 printf("\nEnter Roll Number: ");
scanf("%d", &s[n].roll);

printf("Enter Name: ");
scanf("%s", s[n].name);

printf("Enter Marks of Subject 1: ");
scanf("%f", &s[n].m1);

printf("Enter Marks of Subject 2: ");
scanf("%f", &s[n].m2);

printf("Enter Marks of Subject 3: ");
scanf("%f", &s[n].m3);

s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
s[n].percentage = s[n].total / 3;

if(s[n].percentage >= 90)
    s[n].grade = 'A';
else if(s[n].percentage >= 75)
    s[n].grade = 'B';
else if(s[n].percentage >= 60)
    s[n].grade = 'C';
else if(s[n].percentage >= 40)
    s[n].grade = 'D';
else
     s[n].grade = 'F';

    n++;

printf("\nMarksheet Generated Successfully!\n");
    break;

case 2:

    if(n == 0)
    {
    printf("\nNo Student Records Found!\n");
    }
    else
    {
     printf("\n----- Student Marksheet -----\n");

    for(i = 0; i < n; i++)
        {
            printf("\nRoll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Total: %.2f\n", s[i].total);
            printf("Percentage: %.2f%%\n", s[i].percentage);
            printf("Grade: %c\n", s[i].grade);
                    }
            }

            break;

case 3:

    if(n == 0)
    {
     printf("\nNo Student Records Found!\n");
    }
    else
    {
    found = 0;

    printf("\nEnter Roll Number to Search: ");
     scanf("%d", &searchRoll);

    for(i = 0; i < n; i++)
    {
    if(s[i].roll == searchRoll)
        {
        printf("\nStudent Found!\n");
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total: %.2f\n", s[i].total);
        printf("Percentage: %.2f%%\n", s[i].percentage);
        printf("Grade: %c\n", s[i].grade);

        found = 1;
        break;
        }
        }

        if(found == 0)
        {
            printf("\nStudent Not Found!\n");
        }
            }

        break;

case 4:

printf("\nThank You!\n");
    break;

    default:

    printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}