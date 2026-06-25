#include<stdio.h>
int main()
{
int score=0,answer;

printf("Q1.What is the capital of India?\n");
printf("1. Delhi\n 2. Mumbai\n 3. Kolkata\n");
scanf("%d",&answer);

if(answer == 1)
{
    score ++;
}

printf("Q2.How many days are there in a week?\n");
scanf("%d",&answer);

if(answer == 7)
{
    score ++;
}
printf("The total score is:%d ",score);
return 0;
}