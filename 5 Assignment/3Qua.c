#include<stdio.h>
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);

    printf("N natural no reverse.. \n");
    for(int i=n;i>=1;i--)
    {
        printf("%d \n",i);
    }
}
