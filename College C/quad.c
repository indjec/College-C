#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,d,p,q;
printf("Enter the coefficeints of x^2 , x and constant:\n");
scanf("%f%f%f", &a,&b,&c);
d=pow(b,2)-4*a*c;
if(d>0)
{p=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
q=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
printf("\nReqd. roots are :\nFirst root:%f\nSecond root:%f\n",p,q);
}
else
{printf("\nRoot are imaginary");}
}
