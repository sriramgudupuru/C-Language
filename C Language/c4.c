#include<stdio.h>
int main()
{
	static int i,j;
	int k=(++j||i++);
	printf("%d %d %d",j,i,k);
}