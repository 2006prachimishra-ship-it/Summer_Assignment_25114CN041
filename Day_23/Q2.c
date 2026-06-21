#include<stdio.h>
int main()
{
int i=0,j, count;
char str[100];

printf("Enter the  string: ");
scanf("%s",str);

while(str[i] != '\0'){
    count=0;
    j=0;

    while(str[j] != '\0')
    {
    if(str[i] == str[j])
    
    count++;
    
    j++;
    }
if (count > 1)
{printf("First  repeating character is %c: ",str[i]);
return 0;}
i++;
}
printf("No repeating characters found");
return 0;
}