#include<stdio.h>
int main()
{
int i=0;
char str[100];

printf("Enter the string: ");
scanf("%[^\n]",str);

while(str[i] != '\0')
{
  i++;
}
printf("The lenght of the string is %d",i);
return 0;
}