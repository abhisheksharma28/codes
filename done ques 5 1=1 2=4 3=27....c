#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i,d,n;
    printf("Enter the number upto what the patter is required");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        d=pow(i,i);
        printf("%d = %d\n",i,d);
    }
    return 0;
}
