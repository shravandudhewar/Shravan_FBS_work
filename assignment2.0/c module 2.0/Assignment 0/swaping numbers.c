//4. Write a C program to swap two numbers using a temporary third variable.
void main()
{
	int a=20,b=40,temp;
	temp=a;
	a=b;
	b=temp;
	printf("a=%d b=%d",a,b);
	
}