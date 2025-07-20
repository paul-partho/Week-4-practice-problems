#include<stdio.h>
int main()
{
    int n,a=0,b=1,next;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>=1)
    {
        printf("0 ");
    }
    if(n>=2)
    {
    printf("1 ");
    }
    if(n>=3)
    {
        for(next=1;next<n;next++)
        {
            next=a+b;
            printf("%d ",next);
            a=b;
            b=next;
        }
    }
}
