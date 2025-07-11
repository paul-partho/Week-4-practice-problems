#include<stdio.h>
int main()
{
    int i,n;
    int s=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i=i+2)
    {
        s=s+i;
        if(i<2*n+1)
        {
            printf("%d+",i);
        }
        else
        {
            printf("%d",i);
        }
    }
        printf("=%d",s);
    return 0;
}
