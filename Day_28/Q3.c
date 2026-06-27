#include <stdio.h>

struct Ticket
{
int ticketNo;
char name[50];
char destination[30];
};

int main()
{
struct Ticket t[10];
int choice = 0, n = 0, i;
int ticketNo, found;

while(choice != 4)
{
printf("\n===== Ticket Booking System =====\n");
printf("1. Book Ticket\n");
printf("2. Cancel Ticket\n");
printf("3. Display Bookings\n");
printf("4. Exit\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
case 1:

printf("\nEnter Ticket Number: ");
scanf("%d", &t[n].ticketNo);

printf("Enter Passenger Name: ");
scanf("%s", t[n].name);

printf("Enter Destination: ");
scanf("%s", t[n].destination);

n++;

printf("\nTicket Booked Successfully!\n");
break;

case 2:

printf("\nEnter Ticket Number to Cancel: ");
scanf("%d", &ticketNo);

found = 0;

for(i = 0; i < n; i++)
{
if(t[i].ticketNo == ticketNo)
{
  t[i] = t[n - 1];
    n--;

printf("\nTicket Cancelled Successfully!\n");
found = 1;
break;
}
}

if(found == 0)
printf("\nTicket Not Found!\n");

break;

case 3:

if(n == 0)
{
printf("\nNo Bookings Found!\n");
}
else
{
printf("\n----- Booking Details -----\n");

for(i = 0; i < n; i++)
{
printf("\nTicket Number : %d\n", t[i].ticketNo);
printf("Passenger     : %s\n", t[i].name);
printf("Destination   : %s\n", t[i].destination);
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