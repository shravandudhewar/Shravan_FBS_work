//6 Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
#include <stdio.h>
void main() 
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++) 
	{
        if(n%i==0)
		{
            sum+=i;
        }
    }

    if(sum==n) 
	{
        printf("Perfect");
    }
	else 
	{
        printf("Not Perfect");
    }
}
