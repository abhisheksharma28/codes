#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,d,sum=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    a=n;
    while(a>0)                                                     //      A          D         sum
    {
        d=a%10;                                                        //  1           1        27+125+1=153

        sum=sum+d*d*d;
        a=a/10;
    }
    if(n==sum)
    {
       printf("it is an armstrong number");
    }
    else
    {
       printf("it is not an armstrong number");
    }
}
