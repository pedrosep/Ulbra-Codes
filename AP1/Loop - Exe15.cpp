#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()
{
	int x, num, age, agenota = 0, agemaior = 0;
	float nota, nota_maior = 0, nota_aluno = 0;

	setlocale(LC_ALL, "Portuguese");
	printf("Digite o número de alunos que devem ser lidos: \n");
	scanf("%x", &num);
	
	for(x = 1; x <= num; x++)
	{
		printf("Digite a idade e a nota do aluno número %x\n", x);
		scanf("%x %f", &age, &nota);
		
		if(nota > nota_maior)
		{
			nota_maior = nota;
			agenota = age;	
		} 
		if(age > agemaior)
		{
			agemaior = age;
			nota_aluno = nota;	
		} 
	}	
	
	printf("A idade do aluno que obteve a maior nota é: %x\n", agenota);
	printf("A nota do aluno mais velho é: %.2f", nota_aluno);
	
	getche( );
}

