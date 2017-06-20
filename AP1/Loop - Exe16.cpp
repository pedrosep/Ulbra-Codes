#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()

{
	int x, massa_maior = 0;
	float massa, media = 0, menos_massa;

	for (x=1; x<=20; x++)
	{
	    setlocale(LC_ALL, "Portuguese");
		printf("\nDigite o peso da pessoa %x: ", x);
		scanf("%f", &massa);
		
		if(massa>60)
		{
			media+=massa;
			massa_maior++;
		}
		else
		{
			if(massa>menos_massa)menos_massa=massa;
		}
	}	
	
	if(massa_maior>0)media=media/massa_maior;
	printf ("\nA média das pessoas que possuem mais de 60kg é: %.2f\n", media);
	printf ("\nA massa do mais pesado com menos de 60kg é: %.2f", menos_massa);
	
	getche ( );
}

