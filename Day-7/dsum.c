#include <stdio.h>
int dsum(int n)
{
if (n==0)
return 0;

return n % 10 + dsum(n/10);

}
int main()
{
int n;

printf("Enter the number: ");
scanf("%d",&n);

printf("%d", dsum(n));

return 0;
}