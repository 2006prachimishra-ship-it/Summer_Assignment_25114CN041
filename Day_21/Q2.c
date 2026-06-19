#include<stdio.h>
int main()
{
int i,len=0;
char str[100],temp;

printf("Enter the string: ");
scanf("%[^\n]",str);

while(str[len] != '\0')
{
    len++;
}
for(i=0;i<len/2;i++){
    temp = str[i];
    str[i] = str[len-i-1];
    str[len-i-1] = temp;
}
printf("The reversed string is: %s",str);
return 0;
}