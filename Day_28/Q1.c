#include <stdio.h>

struct Book
{
int id;
char title[50];
char author[50];
int quantity;
};

int main()
{
struct Book b[10];
int choice = 0, n = 0, i;
int bookId, found;

while(choice != 5)
{
printf("\n===== Library Management System =====\n");
printf("1. Add Book\n");
printf("2. Issue Book\n");
printf("3. Return Book\n");
printf("4. Display Books\n");
printf("5. Exit\n");

printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice)
{
case 1:

printf("\nEnter Book ID: ");
scanf("%d", &b[n].id);

printf("Enter Book Title: ");
 scanf("%s", b[n].title);

printf("Enter Author Name: ");
scanf("%s", b[n].author);

printf("Enter Quantity: ");
scanf("%d", &b[n].quantity);

n++;

 printf("\nBook Added Successfully!\n");
break;

case 2:

if(n == 0)
{
printf("\nNo Books Available!\n");
}
else
{
found = 0;

printf("\nEnter Book ID to Issue: ");
scanf("%d", &bookId);

for(i = 0; i < n; i++)
{if(b[i].id == bookId)
{
    found = 1;

if(b[i].quantity > 0)
{
    b[i].quantity--;
    printf("\nBook Issued Successfully!\n");
    }
else
{
printf("\nBook Not Available!\n");
}

break;
}
    }

if(found == 0)
printf("\nBook Not Found!\n");
    }

break;

case 3:

if(n == 0)
{
printf("\nNo Books Available!\n");
}
else
{
found = 0;

printf("\nEnter Book ID to Return: ");
scanf("%d", &bookId);

for(i = 0; i < n; i++)
{
    if(b[i].id == bookId)
    {
    b[i].quantity++;
    found = 1;

    printf("\nBook Returned Successfully!\n");
    break;
    }
}

if(found == 0)
printf("\nBook Not Found!\n");
}

break;

case 4:

if(n == 0)
{
    printf("\nNo Books Available!\n");
}
else
{
 printf("\n----- Book Records -----\n");

for(i = 0; i < n; i++)
{
    printf("\nBook ID   : %d\n", b[i].id);
    printf("Title     : %s\n", b[i].title);
    printf("Author    : %s\n", b[i].author);
    printf("Quantity  : %d\n", b[i].quantity);
}
    }

    break;

case 5:

    printf("\nThank You!\n");
    break;

    default:

    printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}