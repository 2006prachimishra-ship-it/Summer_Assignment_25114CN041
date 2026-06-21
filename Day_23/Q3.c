#include<stdio.h>
int main()
{
int i=0,j, count1,count2,len1=0,len2=0;
char str1[100],str2[100];

printf("Enter the first string: ");
scanf("%s",str1);

printf("Enter the second string: ");
scanf("%s",str2);

while(str1[len1] != '\0')
len1++;

while(str2[len2]  != '\0')
len2++;

if(len1 != len2)
{printf("Not anagram string");
return 0;}

while(str1[i] != '\0'){
    count1 =0;
    count2 =0;
    j=0;
    while(str1[j] != '\0'){
        if(str1[i] == str1[j])
        count1++;

        if(str1[i] == str2[j])
        count2++;
        j++;
    }
if(count1 != count2)
{
printf("Not anagram string");
return 0;
}
i++;
}
printf("Anagram");
return 0;
}