//1. Print armstrong numbers in the given range 1 to n.
#include <stdio.h>
void main() 
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);

    printf("Armstrong numbers between 1 and %d are:",n);

    for(int num=1;num<=n;num++)
	{
        int temp=num,sum=0,digits=0;
        while(temp>0) 
		{
            digits++;
            temp/=10;
        }
        temp=num;
        while(temp>0) 
		{
            int rem=temp%10;
            int power=1;
            for(int i=0;i<digits;i++)
			{
                power*=rem;
            }
            sum+=power;
            temp/=10;
        }
            if(sum==num)
			{
            printf("%d ",num);
        }
    }
}
