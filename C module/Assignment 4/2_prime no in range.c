#include <stdio.h>
void main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Prime numbers between 1 and %d are:",n);

    for(int i=2;i<=n;i++)
	{
        int isPrime=1;

        for(int j=2;j<=i/2;j++)
		{
            if(i%j==0)
			{
                isPrime=0;
                break;
            }
        }
        if(isPrime) 
		{
            printf("%d \n",i);
        }
    }
}
