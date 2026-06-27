#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
struct Account a[10];
int choice = 0, n = 0, i;
int accNo, found;
float amount;

while(choice != 4)
{
printf("\n===== Bank Account System =====\n");
printf("1. Create Account\n");
printf("2. Deposit Money\n");
printf("3. Display Accounts\n");
printf("4. Exit\n");

printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:

printf("\nEnter Account Number: ");
scanf("%d",&a[n].accNo);

printf("Enter Name: ");
scanf("%s",a[n].name);

printf("Enter Balance: ");
scanf("%f",&a[n].balance);

n++;

printf("\nAccount Created Successfully!\n");
break;

case 2:

printf("\nEnter Account Number: ");
scanf("%d",&accNo);

found = 0;

for(i = 0; i < n; i++)
{
    if(a[i].accNo == accNo)
    {
    printf("Enter Deposit Amount: ");
    scanf("%f",&amount);

    a[i].balance = a[i].balance + amount;

    printf("\nMoney Deposited Successfully!\n");
    found = 1;
    break;
            }
    }

    if(found == 0)
    printf("\nAccount Not Found!\n");

    break;

case 3:

if(n == 0)
{
printf("\nNo Accounts Found!\n");
}
else
{
printf("\n----- Account Details -----\n");

for(i = 0; i < n; i++)
{
printf("\nAccount Number : %d\n",a[i].accNo);
printf("Name           : %s\n",a[i].name);
printf("Balance        : %.2f\n",a[i].balance);
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