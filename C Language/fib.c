#include<stdio.h>
void main()
{
	printf("enter no.of terms to be generated ");
	int n;
	scanf("%d",&n);
	int a[n],i;
	printf("\nenter the first term ");
	scanf("%d",&a[0]);
	printf("\nenter the second term");
	scanf("%d",&a[1]);
	
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}