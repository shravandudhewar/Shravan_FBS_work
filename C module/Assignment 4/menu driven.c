#include <stdio.h>
void main() 
{
    int n,choice;
    scanf("%d",&n);
    printf("1.Even or Odd\n");
    printf("2.Prime or Not\n");
    printf("3.Palindrome or Not\n");
    printf("4.Positive, Negative or Zero\n");
    printf("5.Reverse Number\n");
    printf("6.Sum of Digits\n");
    scanf("%d",&choice);

    if(choice==1) 
	{
        if(n%2==0) 
	    printf("Even");
        else 
		printf("Odd");
    } 
    else if (choice==2)
	{
        int isPrime=1;
        if(n<=1) 
		isPrime =0;
        for(int i=2;i<=n/2;i++)
		{
            if(n%i==0)
			{
                isPrime=0;
                break;
            }
        }
        if(isPrime) 
		printf("Prime");
        else 
		printf("Not Prime");
    } 
    else if (choice==3) 
	{
        int temp=n,rev=0;
        while(temp>0) 
		{
            rev=rev*10+temp%10;
            temp/=10;
        }
        if (rev==n) 
		printf("Palindrome");
        else
		printf("Not Palindrome");
    } 
    else if (choice==4)
	{
        if (n>0)
		printf("Positive");
        else if (n<0) 
		printf("Negative");
        else printf("Zero");
    } 
    else if (choice==5) 
	{	
        int temp=n,rev=0;
        while(temp>0) 
		{
            rev=rev*10+temp%10;
            temp/=10;
        }
        printf("%d",rev);
    } 
    else if (choice==6) 
	{
        int temp=n,sum=0;
        while(temp>0)
		{
            sum +=temp%10;
            temp/=10;
        }
        printf("%d",sum);
    } 
    else 
	{
        printf("Invalid Choice");
    }
}
