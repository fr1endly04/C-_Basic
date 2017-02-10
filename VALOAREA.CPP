#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void)
{
  int x,y,z;
  float a,f;

  printf ("x=");
  scanf  ("%d", &x);
  printf ("y=");
  scanf  ("%d", &y);
  printf ("z=");
  scanf  ("%d",&z);


  a=(abs(pow(x,y/x))*(sqrt(pow(y/x,1/3))));

  f=(y-x)*(y-z)/(y-x)/1+(pow(x-y,2));


  printf ("\n\n\n a=%f",a);
  printf ("\n\n\n f=%f",f);

  printf("\n\n\n  Programul a fost efectuat de catre studentul grupei 1.2 TI");
  printf("\n\n\n                                              Ciobanasu Ion");
  printf("\n\n\n                                         Controlat de catre");
  printf("\n\n\n                                               ............");

  getch();

 }
