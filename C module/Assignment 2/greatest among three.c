//3. Write a program to find greatest of three numbers using nested if-else.
//greater among three
#include<stdio.h>
void greatest();//function declereatin
void main()
{
	greatest();//function call
	
}//main ends here
void greatest()//function defination
{
int a=7,b=46,c=100;
  if(a>=b)
    printf("a is greatest");
  if(b>=c)
    printf("b is greatest");
  else	
    printf("c is greatest");
}