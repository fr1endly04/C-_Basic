#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()

{
  start:system("cls");
  int x[50],y[100],s1=0,s2=0,k1=0,k2=0,n,i,f;
  float z;

  printf ("\n\n Introduceti masivul x[n]:");
  scanf ("%d",&n);

  printf ("\n Introduceti masivul y[f]:");
  scanf ("%d",&f);
  printf ("\n Dati masivele:\n");
  for (i=0;i<n;i++)
  {
  printf ("x[%d]=",i);
  scanf("%d",&x[i]);
  }
  for (i=0;i<f;i++)
  {
  printf ("y[%d]=",i);
  scanf ("%d",&y[i]);
  }
  printf ("\n Masivul initial %d \n\n",n);
  for (i=0;i<n;i++)
  {
  printf ("%d",x[i]);
  }
  printf ("\n\n Masivul initial este %d\n\n",f);
  for (i=0;i<f;i++)
  {
  printf ("%d",y[i]);
  }
  for (i=0;i<n;i++)
  {
  s1=s1+x[i];
  k1=k1+1;
  }
  for (i=0;i<f;i++)
  {
  s2=s2+y[i];
  k2=k2+1;}

  z=(float)(s1+s2)/(k1*k2);
  printf ("\n Valoarea lui z este egal cu %f\n",z);
  if(getch()==13) goto start;
  }


