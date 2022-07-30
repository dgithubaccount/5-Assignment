#include <stdio.h>
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d", &n);

    printf("Sqquare of N natural no.  ... \n");
    for (int i = 1; i <= n; i++)    ////     for(int i=1; !(i==n+1); i++)
    {
        printf("%d \n", i * i);
    }
}