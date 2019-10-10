#include <stdio.h>
int main()
{
	int a;
    printf("Enter number");
    scanf("%d",&a);
    if(a%2==0)       //modulus function is basically divide
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
	return 0;
}
