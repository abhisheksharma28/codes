#include <stdio.h>
int main()
{
    int a,b,c,sum;
    printf("number in 1st subject");
    scanf("%d",&a);
    printf("in 2nd");
    scanf("%d",&b);
    printf("in 3rd");
    scanf("%d",&c);
    sum=a+b+c;
    if(sum>=250)
    {
        printf("A grade");
    }
    else if(sum>=200&&sum<250)
    {
        printf("B grade");
    }
    else if(sum>=150&&sum<200)
    {
        printf("C grade");
    }
    else
    {
        printf("F grade");
    }
	
	return 0;
}
