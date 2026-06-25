#include<stdio.h>
int main()
{
int choice;
float amount,balance=5000,new_balance;

printf("1. Check balance\n");
printf("2. Withdraw money\n");
printf("3. Deposit money\n");
printf("Enter choice: ");
scanf("%d",&choice);

if(choice == 1)
{
printf("Your current balance is: %f",balance);
}

else if(choice == 2)
{
printf("Enter the amount you want to withdraw: ");
scanf("%f",&amount);

if(amount <= balance)
 {
 new_balance = balance - amount;
 printf("The new balance is: %f",new_balance);
 }
else
 {
 printf("Insufficient balance");
 }
}
else if(choice == 3)
{
printf("Enter the amount you want to deposit: ");
scanf("%f",&amount);

new_balance = balance + amount;
printf("The new balance is: %f", new_balance);
}
else
{
printf("Invalid");
}
return 0;
}