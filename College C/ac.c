#include<stdio.h>
int main()
{char a[100], x;
int i,n;
	printf("\nEnter no. of the elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf(" %c", &a[i]);
	printf("Enter the char to be searched\n");
	scanf(" %c", &x);
	for(i=0;i<n;i++)
	{if(x==a[i])
	{printf("Available in the array\n");
	break;}
	}
}
