#include <stdio.h>
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d", &n);

    printf("Even natural no in reverse... \n");
    ///    for(int i=n; i>=1 ;i--)    ///
    for (int i = n; !(i == 0); i--)
    {
        printf("%d \n", i * 2);
    }
}