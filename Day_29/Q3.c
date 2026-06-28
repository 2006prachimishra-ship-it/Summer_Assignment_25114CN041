#include<stdio.h>
#include<string.h>
int main()
{
int i,choice=0,len;
char str[100],rev[100];

while(choice != 5)
{
printf("\n-----STRING FUNCTIONS-----\n");
printf("1.Enter the string:\n ");
printf("2.Display string\n");
printf("3.Find length\n");
printf("4.Reverse string\n");
printf("5.Exit\n");

printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter the string:");
scanf("%s",str);
break;

case 2:
printf("%s",str);
break;

case 3:
len = strlen(str);
printf("The length of string is:%d",len);
break;

case 4:
len = strlen(str);
for(i=0;i<len;i++)
{
rev[i] = str[len-i-1];
}
rev[len] = '\0';
printf("The reversed string is %s",rev);
break;

case 5:
printf("Exit");
return 0;

default:
printf("Not valid");
break;
}
}
return 0;
}