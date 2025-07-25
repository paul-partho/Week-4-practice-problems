#include<stdio.h>
int main()
{
    int n,i,j,k,l,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            printf(" ");
        }
        s=i;
        for(k=1;k<=i;k++)
        {
            printf("%d",s++);
        }
        s=2*i-2;
        for(l=1;l<=i-1;l++)
        {
            printf("%d",s--);
        }
        printf("\n");
    }
}
