#include<stdio.h>
int main()
{
	char *arr[]={"sunbeam","dac","wimc","pune","king"};
	char **ptr=arr+2;
	printf("%s",++ptr[arr-ptr]-1);
	return 0;
}