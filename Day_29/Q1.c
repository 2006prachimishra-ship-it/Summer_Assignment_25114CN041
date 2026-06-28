#include <stdio.h>
int main()
{
float n1,n2;
int choice;

while(choice != 5)
{
printf("-----MENU DRIVEN CALCULATOR-----\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1: 
printf("Enter the two numbers: ");
scanf("%f%f",&n1,&n2);
printf("Sum = %f\n",n1 + n2);
break;

case 2:
printf("Enter the two numbers: ");
scanf("%f%f",&n1,&n2);
printf("Difference = %f\n",n1 - n2);
break;

case 3:
printf("Enter the two numbers: ");
scanf("%f%f",&n1,&n2);
printf("product = %f\n",n1 * n2);
break;

case 4:
printf("Enter the two numbers: ");
scanf("%f%f",&n1,&n2);
printf("Division = %f\n",n1 / n2);
break;

case 5:
printf("Exit\n");
break;

default: 
printf("Invalid choice");
}
}
return 0;
}