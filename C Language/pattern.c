#include<stdio.h>
void main()
{
	int r,j,i,k;
	printf("enter no.of rows you want the pattern to exist");
	scanf("%d",&r);
	for(j=1;j<=r;j++)
	{
		for(i=j;i<=r;i++)
		{
			printf(" ");
		}
		for(k=1;k<=2*j-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}