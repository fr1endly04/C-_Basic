#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{ 
	int A[50];
int i,n,max; clrscr();
printf("Introduceti nr. de elemente ale tabloului\t");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("A[%d]=",i+1);
scanf("%d",&A[i]);}
max=A[0];
for(i=1;i<n;i++)
if(A[i]>max) max=A[i];
printf("maxim este %d",max);
getch();
}

