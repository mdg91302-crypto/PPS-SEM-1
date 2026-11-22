#include <stdio.h>
int main()
{
    int n;
    printf("how many elements you want: ");
    scanf("%d",&n);
    int a[n],i,sum=0;
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum= sum+a[i];
    }
    printf("your elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("\nSum of %d elements are: %d", n, sum);
    return 0;
}
