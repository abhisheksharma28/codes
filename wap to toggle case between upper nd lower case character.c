#include <stdio.h>
#include<conio.h>        //used for char input thru "get" command      
int main()
{
	char ch;             
   // ch=getchar();        //used to scan or get input
    printf("Enter the character"); 
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)   //ascii values
    {
        ch=ch+32;
        printf("%c is lower case",ch);
    }
    else if(ch>=97&&ch<=122)        //ascii values
    {
        ch=ch-32;                      
        printf("%c is upper case",ch);
    }
    else
    {
        printf("Wrong input");
    }
	return 0;
}
