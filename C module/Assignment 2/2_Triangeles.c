//2. Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.
void main()
{
	int s1,s2,s3;
	printf("Enter the first side of the triange : ");
	scanf("%d",&s1);
	
    printf("Enter the second side of the triange : ");
	scanf("%d",&s2);
	
	printf("Enter the third side of the triange : ");
	scanf("%d",&s3);
	
	if(s1==s2&&s2==s3)
	printf("Triange is Equilateral");
	
	else if(s1==s2||s2==s3||s3==s1)
	printf("Triange is isosceles");
	else
	printf("Triange is Scalene");
}