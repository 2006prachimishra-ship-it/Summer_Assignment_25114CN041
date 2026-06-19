#include<stdio.h>
int main()
{
int i=0 ,len=0,vowel=0,consonant=0;
char str[100];
printf("Enter the string: ");
scanf("%[^\n]",str);

while(str[i] != '\0')
{
if((str[i]>='A' && str[i]<= 'Z') ||
(str[i]>='a' && str[i]<='z'))
{
if(str[i]=='A'|| str[i]=='E' || str[i]=='I'|| str[i]=='O' || str[i]=='U'
|| str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u')
{
vowel++;
}
else
{
consonant++;
}
  }
i++;}
printf("No. of vowels are: %d\n",vowel);
printf("No. of consonants are: %d",consonant);
return 0;

}