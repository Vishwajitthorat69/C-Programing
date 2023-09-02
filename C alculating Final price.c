#include<stdio.h>
int main()
{
int Price,Discount,Finalprice;
printf("Price of the product");
scanf("%d",&Price);
if(Price>=10000)
{
printf("The discount is 10%\n");
}
else
{
printf("The discount is 5%");
}
Discount=(Price*10)/100;
printf("The Discount of the product is %d\n ");
Finalprice=Price-Discount;
printf("The final price of the product is%d\n ");
return 0;
}

