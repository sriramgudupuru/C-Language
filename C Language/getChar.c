#include<stdio.h>
int main()
{
	char c;
	c=getchar();
	char z='z';
	while(c!=EOF)
	{
		putchar(c);
		c=getchar();
	}
}
//not working