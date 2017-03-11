#include<stdio.h>
int main(){
        char x;
        printf("\nenter the character:");
        scanf("%c", &x);
if ((x>=65 && x<=79)||(x>96 && x<=111))
printf("<p");
else
{if(x==80 || x==112)
printf("=p");
else
printf(">p");
}
}

