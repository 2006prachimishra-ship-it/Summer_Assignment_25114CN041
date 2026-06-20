#include<stdio.h>
int main()
{
int i=0,count=0;
char str[100],ch;

printf("Enter the string: ");
scanf("%[^\n]",str);

printf("Enter the character:\n ");
scanf(" %c", &ch);

while(str[i] != '\0')
{
if(str[i]==ch)
{
count++;
}
i++;
}
printf("The frequency of %c is %d",ch,count);
return 0;
}