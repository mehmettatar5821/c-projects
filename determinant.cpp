#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
 
int main(int argc, char** argv) {

float A[10][10],p,det;
int i,j,k,n,m;

printf("matrisi satir sayisini giriniz: \n");
scanf("%d",&n);
printf("matrisin sutun sayisini giriniz: \n");
scanf("%d",&m);

if(n!=m)
   {
   	printf("determinant islemi yapýlmaz!!");
   	printf("girilen matrsin sutun sayýsý satýr sayýsý ile eþit olmalý!!");
 
 printf("matrisin sdatýr sayýsýný giriniz\n");
 scanf("d",&n);
 printf("matrisin sutun sayýsýný giriniz\n");
 scanf("%d",&m);  	
   }

printf("A matrisini giriniz\n");

for(i=1;i<=n;i++)
for(j=1;j<m;j++)
{printf("A(%d,%d)\n",i,j);
scanf("%f",&A[i][j]);
}
printf("\nA matrisi\n\n");
for(i=1; i<=n; i++)
{for(j=1; j<=m; j++)

printf("%f",A[i][j]);
printf("\n");
}

for(k=1;k<=n;k++)
for(i=k+1;i<=n;i++)
{
	p=A[i][k]/A[k][k];
	for(j=1;j<=n;j++)
	A[i][j]=A[i][j]-p*A[i][j];
}
det=1;
for(i=1;i<=n;i++)
det=det*A[i][i];	

printf("determinant=%f",det);
getch();	
	
	
}
 

