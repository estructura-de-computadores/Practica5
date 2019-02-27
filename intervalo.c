#include <stdio.h>
int main ()
{
	int m,n,suma,i;

	m=n=suma=0;

	do{	
	printf ("Escribe dos numeros de un intervalo, el primero debe ser mayor que el segundo\n");
	printf ("Primer numero:\n");
	scanf ("%d",&m);
	printf ("Segundo numero:\n");
	scanf ("%d",&n);

	
	for (i=n;i<=m;i++)
	{
		suma = suma + i;
	}
	printf ("La suma es %d\n", suma);
	}	
	while (n>m);

	return 0;
}
