#include<stdio.h>
int main()
{
        float a,b,c,d;
        printf("\nEnter the first number:");
	scanf("%f", &a);
	printf("Enter the second number:");
	scanf("%f", &b);
        c=a+b;

        printf("addition=%.0f", c);
        c=a-b;
        printf("\nsubstraction=%.0f", c);
        c=a*b;
        printf("\nmultiplication=%.0f", c);
        c=a/b;
        printf("\ndivision=%.1f\n", c);
}

