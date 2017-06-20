#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()

{
	
	int x, carnes;
	float prestacao, total = 0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite o número de carnes a serem pagas: ");
	scanf("%x", &carnes);
	
	for (x=1; x<=carnes; x++)
	{
		printf("\nDigite o valor da prestação da carne %x: ", x);
		scanf ("%f", &prestacao);
		total += prestacao;
	}	
	
	printf ("\nO total a ser pago e: %.2f", total);
	getche ( );

}
