#include<stdio.h>
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);

    printf("odd natural no.. \n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n",2*i-1);
    }
    

}
