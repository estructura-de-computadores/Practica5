#include <stdio.h>
int main ()
{
	int Seg,Min,Hor,Dia,Resto;
	Seg=Min=Hor=Dia=Resto=0;
	printf ("Escribe una cantidad en segundos: \n");

	scanf ("%d",&Seg);

	Dia=Seg/(3600*24);
	Resto=Seg%(3600*24);
	Hor=Resto/3600;
	Resto=Seg%3600;
	Min=Resto/60;
	Resto=Seg%60;

	printf ("%d Segundos son %d Dias %d Horas y %d Minutos\n",Seg ,Dia ,Hor ,Min);

	return 0;
}
