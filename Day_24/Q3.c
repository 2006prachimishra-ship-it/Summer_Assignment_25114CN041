#include <stdio.h>
#include <string.h>

int main()
{
char str[100], word[100], longest[100];
int i = 0, j = 0, max = 0;

printf("Enter sentence: ");
scanf("%[^\n]", str);

while(str[i] != '\0')
{
if(str[i] != ' ')
{
word[j] = str[i];
j++;
}
else
{
word[j] = '\0';

if(strlen(word) > max)
{
max = strlen(word);
strcpy(longest, word);
}

j = 0;
 }

i++;
}

word[j] = '\0';

if(strlen(word) > max)
{
strcpy(longest, word);
}

printf("Longest word : %s", longest);

return 0;
}