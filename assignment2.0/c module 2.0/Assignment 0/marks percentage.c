//10. Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.
void main()
{
	int e=80,m=60,s=70,t,p;
	t=e+m+s;
	p=t/300*100;
	printf("Total marks obtained : %d \nPercentage are : %d ",t,p);
}