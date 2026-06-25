#include<stdio.h>
int main()
{
int guess, real = 5;

printf("Guess a random number: ");
scanf("%d",&guess);

if(guess != real)
{
printf("Your guess is wrong");
}
else
{
printf("Your guess is right");
}
return 0;
}