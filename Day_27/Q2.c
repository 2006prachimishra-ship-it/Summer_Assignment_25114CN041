#include<stdio.h>
struct Employee{
int id;
char name[50];
char department[30];
char designation [30];
};

int main()
{
struct Employee s[10];
int choice=0,i,n=0,search_id,found;

while(choice != 4)
{
printf("\n-----STUDENT RECORD-----\n");
printf("1. Add Employee\n");
printf("2. Display Employee\n");
printf("3. Search Employee\n");
printf("4. Exit\n");

printf("Enter your choice:\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter the name of employee: ");
scanf("%s",s[n].name);

printf("Enter the id of employee: ");
scanf("%d",&s[n].id);

printf("Enter the department of employee:  ");
scanf("%s",s[n].department);

printf("Enter employee's designation: ");
scanf("%s",s[n].designation);
n++;
printf("\nEMPLOYEE RECORD ADDED SUCCESSFULLY!\n");
break;

case 2:
if(n == 0)
{printf("No record found");}
else{
for(i=0;i<n;i++)
{
printf("Name: %s\n",s[i].name);
printf("Roll-no: %d\n",s[i].id);
printf("Marks: %s\n",s[i].department);
printf("Branch: %s\n",s[i].designation);
}
break;}

case 3:
if(n == 0)
{printf("No record found");}
else{
found = 0;
printf("Enter the id to be searched: ");
scanf("%d",&search_id);

for(i=0;i<n;i++)
{
if(s[i].id == search_id)
{
printf("Name: %s\n",s[i].name);
printf("Roll-no: %d\n",s[i].id);
printf("Marks: %s\n",s[i].department);
printf("Branch: %s",s[i].designation);
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
