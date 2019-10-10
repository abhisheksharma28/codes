#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')           //ascii value for upper case A=65 to Z=90
    {
        printf("Upper case");
    }
    else if(ch>='a'&&ch<='b')      //ascii value of lower case a=97 to z=122   
    {
        printf("lower case");
    }
    else
    {
        printf("wrong input");
    }
    return 0;
}
