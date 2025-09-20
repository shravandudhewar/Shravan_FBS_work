//2. Write a program to check given 3 digit number is pallindrome or not.
void main()
{
	int no=121;
	int r1,r2,r3;
	int q1,sum;
	r1=no%10;
	q1=r1/10;
	r2=q1%10;
	r3=q1/10;
	sum=r1*100+r2*10+r3;
	if (no==sum)
	{
	printf("number is a pallindrome");
    }
	else
	{
	printf("number is not a pallindrome");
    }
}