#include<stdio.h>
int main()
{
int i,id[100],quantity[100],n,choice;
float price[100];

while(choice != 3)
{
printf("\n-----Inventory Management-----\n");
printf("1.Add product\n");
printf("2.Display product\n");
printf("3.Exit\n");

printf("Enter your choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter product id: ");
scanf("%d",&id[n]);

printf("Enter product price: ");
scanf("%f",&price[n]);

printf("Enter quantity: ");
scanf("%d",&quantity[n]);
n++;
printf("Added successfully");
break;

case 2: 
if(n == 0)
{
printf("No product available");
}
else
{
printf("id\tprice\tquantity\n");
for(i=0;i<n;i++)
{
    printf("\n%d\t%f\t%d\n",id[i],price[i],quantity[i]);
}
}
break;

case 3:
printf("Exit\n");
break;

default:
printf("Invalid");

}
}
return 0;
}