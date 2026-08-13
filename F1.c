#include <stdio.h>
int main()
{
int a,b;
a = 0;
b = 1;
int num,i=2;
int add;
printf("enter number of term:");
scanf("%d",&num);
printf("%d %d ",a,b);
    while(i<num)
    {
    add = a+b;
    a = b;
    b = add; 
    printf("%d ",b);
    i++;
    }
    return 0;
}
