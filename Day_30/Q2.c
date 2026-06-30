#include <stdio.h>
#include <string.h>

int main()
{
char book[100][50],search[50];
int count=0,choice,i,found;

while(1)
{
printf("\n----- Mini Library System -----\n");
printf("1. Add Book\n");
printf("2. Display Books\n");
printf("3. Search Book\n");
printf("4. Exit\n");

printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:

printf("Enter Book Name: ");
scanf(" %[^\n]",book[count]);

count++;

printf("Book Added Successfully!\n");
break;

case 2:

if(count==0)
{
printf("No Books Available!\n");
}
else
{
printf("\nBook List\n");

for(i=0;i<count;i++)
{
printf("%d%s\n",i+1,book[i]);
}
}

break;

case 3:

if(count==0)
{
printf("No Books Available!\n");
}
else
{
found=0;

printf("Enter Book Name to Search: ");
scanf(" %[^\n]",search);

for(i=0;i<count;i++)
{
if(strcmp(book[i],search)==0)
{
printf("Book Found!\n");
found=1;
break;
}
}

if(found==0)
{
printf("Book Not Found!\n");
}
}

break;

case 4:

printf("Exit\n");
return 0;

default:

printf("Invalid Choice!\n");
}
}
return 0;
}