#include<stdio.h>
int main()
{
int i=0;
char str[100];

printf("Enter the string: ");
scanf("%[^\n]",str);

while(str[i] != '\0')
{
if(str[i] >= 'a' && str[i] <= 'z'){
    str[i] = str[i] -32;
}
i++;
}
printf("The converted string is : %s",str);
return 0;
}