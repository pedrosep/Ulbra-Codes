#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<locale.h>
main ( )
{
	int x, code, tall_code;
	float tall=0, Tall=0;
	
	setlocale(LC_ALL, "Portuguese");
	for (x=1; x<=10; x++)
	{
		printf("\nInforme o código do aluno %x: ", x);
		scanf("%x", &code);
		printf("\nInforme a altura do aluno %x: ", x);
		scanf("%f", &tall);
		if(tall>Tall)
		{
			tall_code = code;
			Tall = tall;
		}
	}	
	printf("\nAluno mais alto : %x", tall_code);
	getche( );

	}
