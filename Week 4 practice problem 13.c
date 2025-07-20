#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
