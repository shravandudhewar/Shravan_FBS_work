//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include<stdio.h>
void operations();//function declereatin
void main()
{
	operations();//function call
	
}//main ends here
void operations()//function defination
{
	int num1,num2;
    char op;
    
    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c",&op); 

    printf("Enter second number: ");
    scanf("%d",&num2);
	
	if(op =='+')
    {
        printf("Result = %d\n",num1+num2);
    } 
	else if(op =='-') 
	{
        printf("Result = %d\n",num1-num2);
    } 
	else if(op =='*') 
	{
        printf("Result = %d\n",num1*num2);
    } 
	else if(op =='/') 
	{
        if(num2 != 0)
            printf("Result = %d\n",num1/num2);
    } 
	else if(op =='%') 
	{
        if(num2 != 0)
            printf("Result = %d\n",num1%num2);   
    } 
	else 
	{
        printf("Invalid operator.\n");
    }
}