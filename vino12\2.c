#include <stdio.h>
#include<string.h>
int main()
{
   char a[100];
   int l,count=1,i;
   scanf("%s,a");
   l=strlen(a);
   for(i=0;i<l;i++)
   {
       if(a[i]=='.')
       count++;
       printf("%d",count);
       else
       printf("%d",count);
   }

    return 0;
}
