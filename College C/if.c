#include<stdio.h>
int main()
{ int x, y,z;
printf("\nENTER THE NUMBERS(1st and 2nd ad 3rd)\n");
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
if(x>y)
{if(x>z)
printf("1st no. greater");
else
printf("3rd no. greater");
}
else 
{if(y>z)
printf("2nd no. greater");
else
printf("3rd no. greater");

}

}
