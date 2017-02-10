#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(void)
{int a,b,c,x; float F,z;
clrscr();
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);
printf("x=");
scanf("%d",&x);
F=log(a+pow(x,2))*pow(sin(x/b),2);
z=exp(-c*x)*(x+sqrt(x+a))/(x-sqrt(abs(x-b)));
printf("F=%f",F); printf (" Lucrarea a fost efectuata de studentul din grupa 1.2 TI\n");
printf("z=%f",z); printf("Ciobanasu Ion\n");
printf("Verificata de ......");
getch();
}