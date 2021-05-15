#include<stdio.h>
#define unidad 800000
float a,x;
int main()
{
	printf("introduzca la cantidad de unidades a comprar ");
	scanf("%f", &a);
	if(a<5)
	{
		x=unidad-(unidad*0.1);
	}
	else if(a<10)
	{
		x=unidad-(unidad*0.2);
	}
	else if(a>=10)
	{
		x=unidad-(unidad*0.4);
	}
	printf("el total a pagar va a ser de %.2f $",x);
}
