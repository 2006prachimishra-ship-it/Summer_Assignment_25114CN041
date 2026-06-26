#include<stdio.h>
struct Student{
int roll;
char name[50];
float marks;
char branch[30];
};

int main()
{
struct Student s[10];
int choice=0,i,n=0,search_roll,found;

while(choice != 4)
{
printf("\n-----STUDENT RECORD-----\n");
printf("1. Add Student\n");
printf("2. Display Student\n");
printf("3. Search Student\n");
printf("4. Exit\n");

printf("Enter your choice:\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter the name of student: ");
scanf("%s",s[n].name);

printf("Enter the roll-no of student: ");
scanf("%d",&s[n].roll);

printf("Enter the marks of student:  ");
scanf("%f",&s[n].marks);

printf("Enter student's branch: ");
scanf("%s",s[n].branch);
n++;
printf("\nSTUDENT RECORD ADDED SUCCESSFULLY!\n");
break;

case 2:
if(n == 0)
{printf("No record found");}
else{
for(i=0;i<n;i++)
{
printf("Name: %s\n",s[i].name);
printf("Roll-no: %d\n",s[i].roll);
printf("Marks: %f\n",s[i].marks);
printf("Branch: %s",s[i].branch);
}
break;}

case 3:
if(n == 0)
{printf("No record found");}
else{
found = 0;
printf("Enter the roll no to be searched: ");
scanf("%d",&search_roll);

for(i=0;i<n;i++)
{
if(s[i].roll == search_roll)
{
printf("Name: %s\n",s[i].name);
printf("Roll-no: %d\n",s[i].roll);
printf("Marks: %f\n",s[i].marks);
printf("Branch: %s",s[i].branch);
found = 1;
break;
}

}
if(found == 0)
{printf("No record found");}
break;
}

case 4:
printf("Thank You");
break;

default:
printf("Invalid choice");
}
}

return 0;

}
