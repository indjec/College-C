#include<stdio.h>
int main(){
	int ar[100],i ,n;
	float sum=0;
	printf("\nenter the number of elements:\n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	for(i=0;i<n;i++)
		sum+=ar[i];
	printf("\nThe average is: %.2f", sum/n);

}
