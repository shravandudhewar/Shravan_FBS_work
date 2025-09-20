//7. Accept the age and check if the person is: Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
void main()
{
	int age;
	printf ("Enter age : ");
	scanf("%d",&age);
	
	if(age<12)
	printf("Child");
	else if (age<19)
	printf("Teenager");
	else if(age<60)
	printf("Adult");
	else
	printf("Senior");
	
}