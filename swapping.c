#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	printf("Before swapping of numbers a=%d,b=%d",a,b);
	a=a+b; //10+20=30 a=30
	b=a-b; //30-20=10 b=10
	a=a-b; //30-10=20 a=20
	printf("\nAfter swapping of numbers a=%d,b=%d",a,b);
	return 0;
}
