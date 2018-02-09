#include <stdio.h>
int main(void) 
{
	char str[10];
	int a,b;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	for(b=0;b<n;b++)
	{
		if(str[b]>='0' && str[b]<='9')
		{
			printf("\n YES");
		}
		else
		printf("\n NO");
	}
	return 0;
}
