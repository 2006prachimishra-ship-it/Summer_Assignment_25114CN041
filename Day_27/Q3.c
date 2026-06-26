#include<stdio.h>
struct Salary{
int id;
char name[50];
float basic;
float bonus;
float deduction;
float net_salary;
};

int main()
{
struct Salary s[10];
int choice=0,i,n=0,search_id,found;

while(choice != 4)
{
printf("\n-----Salary RECORD-----\n");
printf("1. Add Salary record\n");
printf("2. Display Salary record\n");
printf("3. Search Salary record\n");
printf("4. Exit\n");

printf("Enter your choice:\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter the name of Employee: ");
scanf("%s",s[n].name);

printf("Enter the id of Employee: ");
scanf("%d",&s[n].id);

printf("Enter the basic salary:  ");
scanf("%f",&s[n].basic);

printf("Enter bonus amount: ");
scanf("%f",&s[n].bonus);

printf("Enter deduction amount: ");
scanf("%f",&s[n].deduction);

s[n].net_salary = s[n].basic + s[n].bonus - s[n].deduction;

n++;

printf("\nSALARY RECORD ADDED SUCCESSFULLY!\n");
break;

case 2:
if(n == 0)
{printf("No record found");}
else{
for(i=0;i<n;i++)
{
printf("Name: %s\n",s[i].name);
printf("ID: %f\n",s[i].id);
printf("Basic: %f\n",s[i].basic);
printf("Bonus: %f\n",s[i].bonus);
printf("Deduction: %f\n",s[i].deduction);
printf("Net Salary: %f\n", s[i].net_salary);

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
printf("id: %d\n",s[i].id);
printf("Basic: %f\n",s[i].basic);
printf("Bonus: %f\n",s[i].bonus);
printf("Deduction: %f\n",s[i].deduction);
printf("Net Salary: %f\n", s[i].net_salary);
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
