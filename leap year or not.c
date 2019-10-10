#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year");
    scanf("%d",&a);
    if(a%4==0&&a%100!=0)                 //leap year logic 1
    {
        printf("Leap year");
    }
    else if(a%4==0&&a%100==0&&a%400==0)   //leap year logic 2
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }   
    return 0;
}
