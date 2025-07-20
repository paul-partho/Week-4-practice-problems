#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==2)
        {
            printf("%d is a prime number",n);
        }
    for(i=2;i<n;i++)
    {
        if(n%i!=0)
        {
            printf("%d is a prime number",n);
            break;
        }
        else
        {
            printf("%d is not a prime number",n);
            break;
        }
    }
}
