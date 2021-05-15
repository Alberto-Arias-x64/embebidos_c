#include<stdio.h>
float v,h,t,x;
int main()
{
	printf("ingrese el valor de la compra\n");
	scanf("%f",&v);
	if(v<100)
	{
		t=v-(v*0.1);
	}
	else if(v<200)
	{
		t=v-(v*0.12);
	}
	else
	{
		t=v-(v*0.15);
	}
	printf("el valor con el descuento sera de %.2f $",t);
	return 0;
}
