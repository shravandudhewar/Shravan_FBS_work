//Input: n = 5
//Output:
//*
//**
//***
//****
//*****

#include<stdio.h>
void main()

{   int i=1,j=1,n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf(" *");
		printf("  \n");
	}
}