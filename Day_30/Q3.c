#include <stdio.h>
#include <string.h>

int main()
{
char employee[100][50],search[50];
int salary[100];
int count=0,choice,i,found;

while(1)
{
printf("\n----- Mini Employee Management System -----\n");
printf("1. Add Employee\n");
printf("2. Display Employees\n");
printf("3. Search Employee\n");
printf("4. Exit\n");

printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:

printf("Enter Employee Name: ");
scanf(" %[^\n]",employee[count]);

printf("Enter Salary: ");
scanf("%d",&salary[count]);

count++;

printf("Employee Added Successfully!\n");
break;

case 2:

if(count==0)
{
printf("No Employee Records Found!\n");
}
else
{
printf("\nEmployee Records\n");

for(i=0;i<count;i++)
{
printf("\nEmployee %d\n",i+1);
printf("Name : %s\n",employee[i]);
printf("Salary : %d\n",salary[i]);
}
}

break;

case 3:

if(count==0)
{
printf("No Employee Records Found!\n");
}
else
{
found=0;

printf("Enter Employee Name to Search: ");
scanf(" %[^\n]",search);

for(i=0;i<count;i++)
{
if(strcmp(employee[i],search)==0)
{
printf("\nEmployee Found!\n");
printf("Name : %s\n",employee[i]);
printf("Salary : %d\n",salary[i]);
found=1;
break;
}
}

if(found==0)
{
printf("Employee Not Found!\n");
}
}

break;

case 4:

printf("Exiting Program...\n");
return 0;

default:

printf("Invalid Choice!\n");
}
}
return 0;
}
