#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter 2 numbers to swap\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping,\na=%d\nb=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping,\na=%d\nb=%d",a,b);
}
