#include <stdio.h>
int main()
{
	int a,b,c;
	printf ("Enter first side:");
	scanf ("%d",&a);
	printf ("Enter 2nd side:");
	scanf ("%d",&b);
	printf ("Enter 3rd side:");
	scanf ("%d",&c);
	if (a+b>c && b+c>a && a+c>b) 
	{
		printf("Triangle is valid");
	}
	else {
		printf("Triangle is invalid");
	}
}