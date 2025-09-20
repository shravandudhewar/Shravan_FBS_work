//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.
void main()
{
    float bs, da, ta, hra, total;
    
    printf("Enter basic salary: ");
    scanf("%f", &bs);

    if (bs <= 5000) {
        da = 0.10*bs;
        ta = 0.20*bs;
        hra = 0.25*bs;
    } else {
        da = 0.15*bs;
        ta = 0.25*bs;
        hra = 0.30*bs;
    }
    total = bs + da + ta + hra;
    printf("Total Salary = %.2f\n", total);
}