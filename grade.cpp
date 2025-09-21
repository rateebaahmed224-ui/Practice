#include<stdio.h>
int main()
{
	int g;
	printf("Enter your percentage : ");
	scanf("%d",&g);
	if(g>80) {
		printf ("A");
	}
	else if (g>60){
		printf("B");
	}
	else if ( g>40){
		printf("C");
	}
	else
	{
		printf("F");
	}
}