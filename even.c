#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=n){
	    printf("Value of i %d\t\n",i);
	    i+=2;
	}
	return 0;
}
