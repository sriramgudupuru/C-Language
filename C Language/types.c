#include<stdio.h>
main()
{
	char whole[200];
	char waste[200];
	char neww[200];
	gets(whole);
	gets(waste);
	int i,j=0,k;
	for(i=0;whole[i]=='\0';i++)
	{
		k=i;
		j=0;
		while(whole[i]==waste[j])
		{
			i++,j++;
			if(j==strlen(waste))
			{
				
			}
			else
			   i=k
			  
		}
	neww[n++]=whole[i];
	}
}
//deleting substring in a string- pending.