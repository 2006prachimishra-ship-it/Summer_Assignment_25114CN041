#include <stdio.h>

int main()
{
char str1[100], str2[100];
int i = 0, j;

printf("Enter first string: ");
scanf("%s", str1);

printf("Enter second string: ");
scanf("%s", str2);

printf("Common characters: ");

while(str1[i] != '\0')
{
j = 0;

while(str2[j] != '\0')
{
if(str1[i] == str2[j])
    {
    printf("%c ", str1[i]);
    break;
    }
    j++;
}

    i++;
    }

return 0;
}