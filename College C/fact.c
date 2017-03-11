#include<stdio.h>
#include<math.h>
int main(){
	int p=1,n,i;
printf("\nEnter the number for which factorial reqd\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{p*=i;}
printf("\nReqd factorial = %d",p);
}
