#include<stdio.h>
int main()
{
int i=0,count;
char str[100];

printf("Enter the string: ");
scanf("%s",str);

while(str[i] != '\0'){
    count=1;
    while(str[i] == str[i+1])
    {
    count++;
    i++;
    }
    printf("%c%d",str[i],count);
    i++;
}
return 0;
}