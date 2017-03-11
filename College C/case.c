#include<stdio.h>
int main(){
	float x,y,z,n;
	printf("\nEnter you choice\n");
	
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Division\n");
	printf("4. Multiplicion\n");
	scanf("%f", &n);
	printf("\nEnter your numbers \n");
	scanf("%f %f", &x,&y);
	if(n == 1){
	z=x+y;
	printf("%f\n",z);
}
if(n == 2){ 
	z=x-y;
        printf("%f\n",z);
}

if(n == 3){ 
	z=x/y;
        printf("%f", z);
}

if(n == 4){ 
	z=x*y;
        printf("%f", z);
}



}
