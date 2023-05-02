#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	printf("enter number to be checked ");
	scanf("%d",&n);
	int j=n,q,x;
	float sum=0,i=0;
	while(j!=0)
	{
		x=j%10;
		sum=sum+x*pow(10,i);
		printf("%f",sum);
		j=j/10;
		i++;
	}
	if(n==sum)
	printf("%d is palindrome",n);
	else
	  printf("%d not palindrome",n);
	  /*printf("%f",pow(10,2));*/
}