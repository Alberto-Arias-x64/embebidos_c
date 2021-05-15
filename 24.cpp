#include<stdio.h>
#include<math.h>
int x,y;
int main()
{
	printf("introdizca el valor de x ");
	scanf("%d",&x);
	if(x<=11)
	{
		y=(3*x)+36;
	}
	else if(x<=33)
	{
		y=(pow(x,2))-10;
	}
	else if(x<=64)
	{
		y=x+6;
	}
	else
	{
		y=0;
	}
	printf("el resultado va a ser %d",y);
}
