#include<stdio.h>
#include<conio.h>
#include<locale.h>
main ( )
{
	int x, i, m;
	
	setlocale(LC_ALL, "Portuguese");
	for (x=1; x<=8; x++)
		{
		printf ("\nInforme a idade: ");
		scanf ("%d", &i);
		m = m+i;
		}
		m = m/8;
		printf ("\nM�dia das idades: %d", m);
	getche ( );
}

