//4 Check the given number is prime or not. Input: n = 7 Output: Prime
#include<stdio.h>
void main()
{
	int no=13;
	int i=2,status=0;
	while(i<=no/2)
	{
		if (no%i==0)
		status=1;
		break;
		i++;
	}
	if (status==0)
	return 1;
	else
    return 1;
	
}