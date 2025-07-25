#include<stdio.h>
int main()
{
    int n,i,j,k;
    int a=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("%d",a++);
            if(a>9)
            {
                a=1;
            }
        }
        printf("\n");
    }
}
