#include<stdio.h>
int main()
{
    int i,n;
    int s=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        s=s+i*i*i;
        if(i<n)
        {
            printf("%d+",i*i*i);
        }
        else
        {
            printf("%d",i*i*i);
        }
    }
    printf("=%d",s);
    return 0;
}
