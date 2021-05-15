#include<stdio.h>
float x,y;
int main()
{
	printf("ingrese el valor del salario minimo ");
	scanf("%f",&x);
	printf("ingrese el puntaje del profesor ");
	scanf("%f",&y);
	if(y<=100)
	{
		printf("el monto del bono sera de %.2f $",x);
	}
	else if(y<=150)
	{
		y=x*2;
		printf("el monto del bono sera de %.2f $",y);
	}
	else if(y>150)
	{
		y=x*3;
		printf("el monto del bono sera de %.2f $",y);
	}
}
