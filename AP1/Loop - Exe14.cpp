#include<stdio.h>
#include<conio.h>
#include<locale.h>
main ( )
{
	int x, n, z;
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nN�meros serem lidos: ");
	scanf("%x", &n);
	
	for(x=1; x<=n; x++)
	{
		printf("\nInforme o n�mero de posi��o %x: ", x);
		scanf("%d", &z);
		
		if(z<0) 
			printf("\n%x � negativo", z);
				else if(z>0)
					printf("\n%x � positivo", z);
			
		if(z%2==1)
			 printf("\n%x � impar", z);
				else
					printf("\n%x e par", z);
			
		printf("\nQuadrado de %x � %x\n", z, z*z);
		printf("\nO cubo de %x � %x\n", z, z*z*z);
	}	
	getche ( );
}

