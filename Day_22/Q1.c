#include<stdio.h>
#include<string.h>
int main()
{
int i,len,found=1;
char str[100];

printf("Enter the string: ");
scanf("%s",str);

len =strlen(str);

for(i=0;i<len/2;i++){
   if (str[i] != str[len-i-1])
   found=0;
   break;
}
if(found==1)
{printf("String is palindrome");}
else{
    printf("Not a palindrome string");
}
return 0;
}