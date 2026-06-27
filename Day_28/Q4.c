#include <stdio.h>

struct Contact
{
char name[50];
long long phone;
};

int main()
{
struct Contact c[10];
int choice = 0, n = 0, i;
long long searchPhone;
int found;

while(choice != 4)
{
printf("\n===== Contact Management System =====\n");
printf("1. Add Contact\n");
printf("2. Search Contact\n");
printf("3. Display Contacts\n");
printf("4. Exit\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
case 1:

printf("\nEnter Name: ");
scanf("%s", c[n].name);

printf("Enter Phone Number: ");
scanf("%lld", &c[n].phone);

n++;

printf("\nContact Added Successfully!\n");
break;

case 2:

if(n == 0)
{
    printf("\nNo Contacts Found!\n");
}
else
{
    found = 0;

    printf("\nEnter Phone Number to Search: ");
    scanf("%lld", &searchPhone);

    for(i = 0; i < n; i++)
    {
    if(c[i].phone == searchPhone)
    {
    printf("\nContact Found!\n");
    printf("Name  : %s\n", c[i].name);
    printf("Phone : %lld\n", c[i].phone);

    found = 1;
    break;
    }
    }

if(found == 0)
{
printf("\nContact Not Found!\n");
}

break;

case 3:

if(n == 0)
{
printf("\nNo Contacts Found!\n");
}
else
{
printf("\n----- Contact List -----\n");

for(i = 0; i < n; i++)
{
    printf("\nName  : %s\n", c[i].name);
    printf("Phone : %lld\n", c[i].phone);
}
  }

break;
case 4:

printf("\nThank You!\n");
break;

default:

printf("\nInvalid Choice!\n");
}}

return 0;
}
}