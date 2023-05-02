#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("test.txt","w");
	printf("enter data");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);
	}
	fclose(fp);
	fp=fopen("test.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
}