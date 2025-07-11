#include<stdio.h>
int main()
{
    int i,n;
    int s=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n;i=i+1)
    {
        s=s+i*(i*2)*(i*3);
        printf(" + %d*%d*%d",i,i*2,i*3);
    }
    printf(" = %d",s);
    return 0;
}
