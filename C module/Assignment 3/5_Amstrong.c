//5 Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
#include<stdio.h>
void main()
{
    int no,temp;
    printf("Enter the number: ");
    scanf("%d",&no);
    
    temp=no;
    int count=0;
    int temp2=no;
    while (temp2>0)
    {
        count++;
        temp2=temp2/10;
    }

    int sum=0,rem;
    while(no>0)
    {
        rem=no%10;
        int res=1;
        for(int i=1;i<=count;i++)
            res=res*rem;
        sum=sum+res;
        no=no/10;
    }

    if(sum==temp)
        printf("%d is Armstrong",temp);
    else
        printf("%d is not Armstrong",temp);
}
