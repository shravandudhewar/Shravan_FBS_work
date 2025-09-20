//3 Sum of numbers in given range.Find sum of numbers from start to end. Input: start = 1, end = 5 ... Output: 15
#include<stdio.h >
void main()
{
 int i=1,a;
 int sum=0;
 printf("Enter the range of number to end : ");
 scanf("%d",&a);
	while(i<=a)
	{
		printf("%d\n",i);
	    sum=sum+i;
        i++;
	}	
	printf("Their sum is =%d\n",sum);
}