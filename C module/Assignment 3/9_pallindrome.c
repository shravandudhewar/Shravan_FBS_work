//9 Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
#include <stdio.h>
void main() 
{
    int n,original,rem,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    original=n;
    0#include <stdio.h>

int main() {
    int n, original, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0) {
        rem = n % 10;       // get last digit
        rev = rev * 10 + rem; // build reversed number
        n = n / 10;         // remove last digit
    }

    if(original == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
while(n>0) 
	{
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(original==rev) 
	{
        printf("Palindrome");
    }
	 else 
	{
        printf("Not Palindrome");
    }
}
