#include <stdio.h>
int main()
{
	int hr[3],mins[3],i,min,hour,diff,res[3];
	for(i=0;i<2;i++)
	{
	    scanf("%d %d",&hr[i],&mins[i]);
	}
	for(i=0;i<2;i++)
	{
	    res[i]=(hr[i]*60)+mins[i];
	}
	if(res[0]>res[1])
	{
	    diff=res[0]-res[1];
	}
	else
	{
	    diff=res[1]-res[0];
	}
	hour=diff/60;
	min=diff%60;
	printf("%d %d",hour,min);
	return 0;
}
