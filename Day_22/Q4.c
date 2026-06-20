#include<stdio.h>
int main()
{
int i=0,j=0;
char str[100];

printf("Enter the string: ");
scanf("%[^\n]",str);

while(str[i] != '\0')
{
if(str[i] != ' '){
    str[j] = str[i];
    j++;
}
i++;
}
str[j] = '\0';
printf("String after removing spaces is : %s",str);
return 0; 
}