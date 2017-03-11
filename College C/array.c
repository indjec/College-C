#include<stdio.h>
int main(){
int a[15];
printf("\n Enter values\n");
for(int i=0; i<15; i++)
scanf(" %d", &a[i]);
printf(" The array : ");
for(int i=0; i<15 ; i++)
printf("\n%d\n", a[i]);

}
