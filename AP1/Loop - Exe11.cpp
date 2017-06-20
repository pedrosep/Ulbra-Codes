#include<stdio.h>
#include<conio.h>
#include<locale.h>
main ( )
{
	int x, n;
	
	setlocale(LC_ALL, "Portuguese");
	for (x = 1; x <= 10; x++)
	{
		for (n = 1; n <= 5; n++)
		{
			printf ("%x multiplicado por %x = %x\n", n, x, n * x);
		}
		printf ("\n");
	}	
	getche ( );
}

