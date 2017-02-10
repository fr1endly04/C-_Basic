#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(void) {
int x,a,b,e;
float s,q;
clrscr();
printf("Culegeti valorile x,a,b,e:\n");
scanf("%d%d%d",&x,&a,&b,&e );
s=pow(x,3)*pow(tan(pow((x+b),2)),2)+a/sqrt(x+b);
q=b*pow(x,2)-a/pow(e,a*x)-1;
printf("Rezultatul:s=%f, q=%f",s,q),getch();
}