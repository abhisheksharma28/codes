#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,i=0,s;
    printf("Enter the binary no.");
    scanf("%d",&a);
    while(a>0)
    {
        s=a%10;
        s=s+pow(2,i);
        i++;
        a=a/10;
    }
    printf("%d",s);
    return 0;
}
