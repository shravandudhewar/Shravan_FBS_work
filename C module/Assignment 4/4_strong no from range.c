//4. Print strong numbers in the given range 1 to n.
#include <stdio.h>
void main() 
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
	{
        int temp=i, sum=0;
        while(temp>0) 
		{
            int rem=temp%10,fact=1;
            for (int j=1;j<=rem; j++)
			{
                fact*=j;
            }
            sum +=fact;
            temp/=10;
        }
        if(sum==i) 
		{
            printf("%d ",i);
        }
    }
}
