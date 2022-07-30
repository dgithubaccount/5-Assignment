#include<stdio.h>
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);

    printf("odd natural no in reverse... \n");
    for(int i=n; i>1 ; i--)     ////  for(int i=n; i>=2 ; i--)
    {
        printf("%d \n",2*i-1);
    }
}