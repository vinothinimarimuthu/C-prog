#include<stdio.h>
int main()
{
int i,n,m1,m2,next;
printf("enter the number of terms");
scanf("%d",&n);
printf("fibonacci series are");
for(i=0;i<n;i++)
{
if(n<=1)
next=n;
else
{
next=m1+m2;
m1=m2;
m2=next;
}
printf("%d\n",next);
}
return o;
}
