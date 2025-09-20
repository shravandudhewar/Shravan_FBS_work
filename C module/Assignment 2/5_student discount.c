//5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include <stdio.h>
void main() 
{
    float price,discount=0.0,finalPrice;
    char student;

    printf("Enter the price: ");
    scanf("%f",&price);

    printf("are you student or not (y/n): ");
    scanf("%c",&student);
    if(student=='y'||student=='Y') 
	{
        if(price>500) 
		{
            discount=0.20*price;
        } 
		else 
		{
            discount=0.10*price;
        }
    } else 
	{
        if(price>600) 
		{
            discount=0.15*price;
        } 
		else 
		{
            discount=0.0;
        }
    }
    finalPrice = price - discount;
    printf("Discount: %.2f\n", discount);
    printf("Final Price: %.2f\n", finalPrice);
}
 