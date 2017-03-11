#include<stdio.h>
int main(){
	int ar[100],i,t,n;
printf("\nEnter the number of elements\n");
scanf("%d", &n);
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
t=ar[0];
for(i=1;i<n;i++)
{if(t<ar[i])
t=ar[i];
}
printf("\n the highest no. in the array is : %d\n", t);
}
