#include<stdio.h>
#include<string.h>

char task[100][50];
int status[100];
int count=0;

void addTask()
{
printf("Enter Task: ");
scanf(" %[^\n]",task[count]);

status[count]=0;
count++;

printf("Task Added Successfully!\n");
}

void displayTasks()
{
int i;

if(count==0)
{
printf("No Tasks Found!\n");
return;
}

printf("\nToday's Tasks\n");

for(i=0;i<count;i++)
{
printf("%d. %s - ",i+1,task[i]);

if(status[i]==0)
printf("Pending\n");
else
printf("Completed\n");
}
}

void completeTask()
{
int n;

displayTasks();

printf("Enter Task Number: ");
scanf("%d",&n);

if(n>=1 && n<=count)
{
status[n-1]=1;
printf("Task Completed!\n");
}
else
printf("Invalid Task Number!\n");
}

void achievement()
{
int i,completed=0;

for(i=0;i<count;i++)
{
if(status[i]==1)
completed++;
}

if(completed==count && count>0)
printf("\n Congratulations! All Tasks Completed! \n");
else
printf("\nCompleted %d out of %d Tasks.\n",completed,count);
}

int main()
{
int choice;

while(1)
{
printf("\n===== Daily Progress Management System =====\n");
printf("1. Add Task\n");
printf("2. Display Tasks\n");
printf("3. Complete Task\n");
printf("4. Today's Achievement\n");
printf("5. Exit\n");

printf("Enter Choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:
addTask();
break;

case 2:
displayTasks();
break;

case 3:
completeTask();
break;

case 4:
achievement();
break;

case 5:
return 0;

default:
printf("Invalid Choice!\n");
}
}
}