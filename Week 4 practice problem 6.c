#include<stdio.h>
int main()
{
   int i,n,s=1;
   scanf("%d",&n);
   printf("1+");
   for(i=2;i<=n;i=i+1)
   {
       s=s+i*i*i*6;
       if(i<n)
       {
           printf("%d*%d*%d+",i,i*2,i*3);
       }
       else
       {
           printf("%d*%d*%d=",i,i*2,i*3);
       }
   }
   printf("%d",s);
}
