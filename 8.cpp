#include<stdio.h>
char s;
int e;
int main()
{
	printf("ingrese el genero del paciente (m/f) ");//m de Masculino
	scanf("%c",&s);
	getchar();
	printf("ingrese la edad del paciente ");
	scanf("%d",&e);
	if(s!='m'&&s!='f')
	{
		printf("error");
		goto error;
	}
	if(e<16)
	{
		printf("al paciente se le aplicara vacuna A");
	}
	else if(e<70)
	{
		if(s=='m')
		{
			printf("al paciente se le aplicara vacuna A");
		}
		else if(s=='f')
		{
			printf("al paciente se le aplicara vacuna B");
		}
		else
		{
			printf("error");
			goto error;
		}
	}
	else if(e>=70)
	{
		printf("al paciente se le aplicara vacuna C");
	}
	error:;
	return 0;
}
