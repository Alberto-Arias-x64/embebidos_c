#include<stdio.h>
char m;
int t,n,v;
float x,y;
int main()
{
	printf("ingrese el tipo de pantalon (a/b) ");
	scanf("%c",&m);
	getchar;
	printf("ingrese la talla del pantalon ");
	scanf("%d",&t);
	printf("ingrese el valor de tela por metro ");
	scanf("%d",&v);
	printf("ingrese la cantidad de pantalones a producir ");
	scanf("%d",&n);
	if(m=='a')
	{
		x=v*1.5;
		x=x+(x*0.8);
	}
	else if(m=='b')
	{
		x=v*1.8;
		x=x+(x*0.95);
	}
	else
	{
		printf("error de modelo");
		goto error;
	}
	if(t==32 || t==36)
	{
		x=x+(x*0.04);
	}
	y=x;
	x=x+(x*0.3);
	y=x-y;
	printf("el valor total va a ser %.2f $\n",x);
	printf("el valor de las ganancias va a ser %.2f $",y);
	error:;
}
