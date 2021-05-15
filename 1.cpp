#include<stdio.h>
int x;
int main()
{
	printf("ingrese la edad del votante\n");
	scanf("%d", &x);
	if(x<18)
	{
		printf("no puede votar\n");
	}
	else
	{
		printf("si puede votar");
	}
	return 0;
}
