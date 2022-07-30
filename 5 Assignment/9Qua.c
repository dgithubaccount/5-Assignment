#include<stdio.h>
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);

    printf("Cubes of N natural no.  ... \n");
    for (int i = 110; i<=n; i++)
    {
       printf("%d \n",i*i*i);
    }
    

}