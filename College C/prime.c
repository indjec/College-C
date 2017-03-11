#include<stdio.h>
int main(){
	int x,y,z=0;
	printf("enter the number:");
	scanf("%d", &x);
	for(y=1;y<=x;y++){
	if(x % y == 0){	
		z++;
		}
	}
	if(z==2){
	printf("number is prime");
}
else
printf("the number is not prime");

}
