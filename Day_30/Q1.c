#include<stdio.h>
#include<string.h>

int main()
{
int i,found,count=0,choice =0;
char name[100][50],search[50];
int marks[100];

while(choice != 4)
{
printf("\n-----STUDENT RECORD-----\n");
printf("1.Add student\n");
printf("2.Display student\n");
printf("3.Search student\n");
printf("4.Exit\n");

printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter the name of student: \n");
scanf("%s",name[count]);

printf("Enter student marks:\n ");
scanf("%d",&marks[count]);

count++;

printf("Record Added Sucessfully!");
break;

case 2:
if (count == 0)
{
printf("No records found");
}
else
{
printf("Enter student record\n");
for(i=0;i<count;i++)
{
printf("Student name: %s\n",name[i]);
printf("Student marks: %d\n",marks[i]);
}

break;

case 3:
if(count == 0)
{
printf("No record found\n");
}
else
{
found=0;
printf("Enter the student you want to search:\n ");
scanf("%s",search);

for(i=0;i<count;i++)
{
if(strcmp(name[i],search) == 0)
{
printf("name = %s",name[i]);
printf("marks = %d",marks[i]);
found =1;
}
if(found == 0)
{
printf("Not found");
}
}
}
break;

case 4:
printf("Exit");
 break;

default:
printf("Invalid");

}
}
}
return 0;
}