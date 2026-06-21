#include<stdio.h>
int main()
{
int i=0,j, count,max=0;
char str[100],maxchar=0;

printf("Enter the string: ");
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
if (count > max)
{max = count;
maxchar = str[i];
}
i++;
}
printf("The maximum ocurring character is: %c\n",maxchar);
printf("The frequency of the character is: %d",count);
return 0;
}