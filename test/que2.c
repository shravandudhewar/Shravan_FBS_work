#include <stdio.h>

int main() {
    long long num;
    int lastTwoDigits;

    printf("Enter a number: ");
    scanf("%lld", &num);

    lastTwoDigits = num % 100;

    printf("Last two digits = %02d\n", lastTwoDigits);

    return 0;
}
