#include<stdio.h>
int main(){
	int sum=0,n=5;
do{
sum+=n;

n+=5;

}while(n<=100);

printf("Reqd sum = %d+%d",n,sum);

}
