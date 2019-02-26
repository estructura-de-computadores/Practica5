#include <stdio.h>
int main ()
{
	double Num,Fac,i;
	Num = 1;
	i = 1;
	Fac = 1;

	printf ("Introduce un numero para hallar su factorial: \n");

	scanf ("%lf",&Num);
	if (Num>=1){
		for (i=1;i<=Num;i++)
		{
			Fac = Fac * i;
		}
		printf ("El factorial es %.0f\n",Fac);
	}
	else{
		printf ("FATAL ERROR: Number is not valid\n");
	}
	return 0;
}
