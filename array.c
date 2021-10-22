#include <stdio.h>

    int main()
    {
    int a[10],n,i;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("the array elements are %d\n",a[i]);
    }
    return 0;
}
