#include<stdio.h>
#define basea 1200000
#define baseb 950000
char h,l,e;
int a;
float x,y;
int main()
{
	printf("¿usted acostumbra ha conducir en efectos del alcohol? (s/n) ");
	scanf("%c", &h);
	getchar();
	printf("¿usted utiliza lentes? (s/n) ");
	scanf("%c", &l);
	getchar();
	printf("¿usted sufre de alguna enfermedad cardiaca o tiene diabetes? (s/n) ");
	scanf("%c", &e);
	getchar();
	printf("¿que edad tiene usted? ");
	scanf("%d", &a);
	if(h=='s')
	{
		x=x+0.1;
	}
	if(l=='s')
	{
		x=x+0.05;
	}
	if(e=='s')
	{
		x=x+0.05;
	}
	if(a>=40)
	{
		x=x+0.2;
	}
	if(x==0)
	{
		x=0.1;
	}
	y=x*100;
	printf("el porcentaje acumulado es de %.2f %c\n",y,'%');
	y=basea+(basea*x);
	printf("el valor de la poliza A sera de %.2f $\n",y);
	y=baseb+(baseb*x);
	printf("el valor de la poliza B sera de %.2f $\n",y);
}
