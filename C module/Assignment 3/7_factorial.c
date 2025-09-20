//7 Find factorial of given number.
//Input: n = 5
//Output: 120
#include<stdio.h>
void main()
{
    int n,fact=1,i=1;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d\n", n, fact);
}
