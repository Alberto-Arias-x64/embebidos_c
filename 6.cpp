#include<stdio.h>
int x;
int main()
{
	printf("ingrese la calificacion ");
	scanf("%d",&x);
	switch(x)
	{
		case 10:printf("el estundiante saco A"); 
		break;
		case 9:printf("el estundiante saco B");
		break;
		case 8:printf("el estundiante saco C");
		break;
		case 7:printf("el estundiante saco D");
		break;
		case 6:printf("el estundiante saco E");
		break;
		default:printf("el estundiante saco F");
		break;
	}
}
