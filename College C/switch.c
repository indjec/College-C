#include<stdio.h>
int main()
{float a,b;
int x;
char c;
do {
printf("\n1. Add\n");
printf("\n2. Sub\n");
printf("\n3. Multi\n");
printf("\n4. Div\n");
scanf("%d",&x);
printf("Enter the numbers\n");
scanf("%f%f",&a,&b);
switch(x)
{ 
case 1 :{ printf("\nReqd result : %f", a+b);}
break;
case 2 :{ printf("\nReqd result : %f", a-b);}
break;
case 3 : {printf("\nReqd result : %f", a*b);}
break;
case 4 :{ printf("\nReqd result : %f", a/b);}
break;
default :{ printf("Choose a valid option");}
}
printf("\n Want to calculate again?(Y/N)\n");
scanf(" %c",&c);
}while((c=='y')||(c=='Y'));
}
