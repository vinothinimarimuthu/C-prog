#include <stdio.h>
int main() 
{
	int arr[10],max=0,i,n;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	{
	for(i=0;i<n;i++)
		if(arr[i]>max)
		max=arr[i];
	}
	{
		printf("%d",max);
	}
	return 0;
  }
