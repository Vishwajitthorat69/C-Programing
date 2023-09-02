#include<stdio.h>
int main()
{
	int l,b,s,Area_of_rectangle,Area_of_square;
	float r,Area_of_circle;
	printf("Enter the radius=");
	scanf("%f",&r);
	printf("Enter the lengeth=");
	scanf("%d",&l);
	printf("Enter the breadth=");
	scanf("%d",&b);
	printf("Enter the side=");
	scanf("%d",&s);
	Area_of_circle=r*r*3.14;
	Area_of_rectangle=l*b;
	Area_of_square=s*s;
	printf("Area of circle=%f\n",Area_of_circle);
	printf("Area of rectangle=%d\n",Area_of_rectangle);
	printf("Area of square=%d\n",Area_of_square);
	return 0;
}
