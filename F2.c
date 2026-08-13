#include <stdio.h>
int main()
{
    int n;
    printf("enter a max limit:");
    scanf("%d",&n);
    int x=0, y=1, z=1;
    while(z<=n)
    {
        x=y;
        y=z;
        z=x+y;
        printf("\n%d",z);
    }
    return 0;
    }