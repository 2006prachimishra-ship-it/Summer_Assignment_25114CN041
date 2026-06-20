#include<stdio.h>
int main()
{
int i=0,count=0;
char str[100];

printf("Enter the sentence: ");
scanf("%[^\n]",str);

while(str[i] != '\0')
{
if (str[i] == ' ')
{count++;}
i++;
}
printf("The number of words in the given sentence are: %d",count+1);
return 0;
}