#include<stdio.h>
float x,y,z,a;
int main()
{
	printf("ingrese el tiempo que lleva trabajando ");
	scanf("%f", &x);
	printf("ingrese el salario que gana ");
	scanf("%f", &y);
	if(x>2)
	{
		z=y*0.2;
	}
	else if(x>5)
	{
		z=y*0.3;
	}
	if(y<1000000)
	{
		a=y*0.25;
	}
	else if(y<3500000)
	{
		a=y*0.15;
	}
	else if(y>3500000)
	{
		a=y*0.1;
	}
	printf("bono por antiguedad %.2f \nbono por salario %.2f \n",z,a);
	if(z>a)
	{
		printf("el bono sera el de antiguedad por una valor de %.2f pesos",z);
	}
	else
	{
		printf("el bono sera el de salario por una valor de %.2f pesos",a);
	}
}
