#include <stdio.h>
int main() 
{
	char a[50];
	int i,c=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		d=d+1;
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			d=d-1;
		}
	}
	printf("\n%d",d);
	
}
