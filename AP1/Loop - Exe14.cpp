#include<stdio.h>
#include<conio.h>
#include<locale.h>
main ( )
{
	int x, n, z;
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nNúmeros serem lidos: ");
	scanf("%x", &n);
	
	for(x=1; x<=n; x++)
	{
		printf("\nInforme o número de posição %x: ", x);
		scanf("%d", &z);
		
		if(z<0) 
			printf("\n%x é negativo", z);
				else if(z>0)
					printf("\n%x é positivo", z);
			
		if(z%2==1)
			 printf("\n%x é impar", z);
				else
					printf("\n%x e par", z);
			
		printf("\nQuadrado de %x é %x\n", z, z*z);
		printf("\nO cubo de %x é %x\n", z, z*z*z);
	}	
	getche ( );
}

