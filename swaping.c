#include<stdio.h>
int main()
{
    int a,b;
    printf("enter any two numbers\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swaped numbers are a=%d and b=%d",a,b);
    return 0;
}
