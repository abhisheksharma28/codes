#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,r;
    printf("Enter the number to be reversed");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        printf("%d",r);
        a=a/10;
    }
    return 0;
}
