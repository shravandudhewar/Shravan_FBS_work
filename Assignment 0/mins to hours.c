//7. Write a C program to convert given minutes into hours and remaining minutes.
void main()
{
	int mins=140,hrs;
	hrs=mins/60;
	mins=mins%60;
	printf("the given mins converted into hours is : %d:%d",hrs,mins);
}