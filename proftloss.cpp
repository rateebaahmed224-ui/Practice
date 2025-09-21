#include<stdio.h>
int main()
{
	int cp,sp;
	printf("Enter selling price :");
	scanf("%d",&sp);
	printf("Enter cost price :");
	scanf ("%d",&cp);
if	(sp>cp)
	{
		
printf("profit");
}
if(sp<cp){

printf("loss"); 
}
	if (sp==cp)
	{
		printf("no profit no loss");
	}
}