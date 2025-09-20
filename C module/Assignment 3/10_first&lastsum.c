//10 Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
void main() 
{
    int n,last,first,sum;
    printf("Enter a number: ");
    scanf("%d",&n);

    last=n%10;

    while(n>=10)
	{
        n=n/10;
    }
    first=n;
    sum=first+last;
    printf("Sum of first and last digit is %d",sum);
}
