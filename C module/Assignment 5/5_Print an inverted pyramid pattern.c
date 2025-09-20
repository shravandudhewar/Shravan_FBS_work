//5. Print an inverted pyramid pattern
//Input: n = 5
//Output:
//
//*****
//****
//***
//**
//*
#include <stdio.h>
void main() 
{
    int n=5;
    for(int i=n;i>=1;i-=2) 
	{   
        for (int s=1;s<=(n-i)/2;s++)
		{
            printf(" ");
        }
        for(int j=1;j<=i;j++)
		{
            printf("* ");
        }
        printf("\n");
    }
}
