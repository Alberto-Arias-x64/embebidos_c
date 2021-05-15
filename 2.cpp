#include<stdio.h>
float v,h,t,x;
int main()
{
	printf("ingrese el valor por hora\n");
	scanf("%f",&v);
	printf("ingrese las horas que trabajo en la semana\n");
	scanf("%f",&h);
	if(h>40)
	{
		x=40*v;
		t=(h-40)*(v*2);
		t=t+x;
	}
	else
	{
		t=h*v;
	}
	printf("el valor a pagarle al trabajador sera de %.2f $",t);
	return 0;
}
