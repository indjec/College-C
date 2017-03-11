#include<stdio.h>
#define area(a) (3.14*a*a)
int main(){
	float a;
	printf("enter the radius of the circle:");
	scanf("%f", &a);
	printf("\nReqd. Area=%f",area(a));
}
