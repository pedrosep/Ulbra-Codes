#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()

{
	
	int x, n, q=0, q_out;
	
	setlocale(LC_ALL, "Portuguese");
	for(x=1; x<=10; x++)
	{
		printf("digite o n�mero: ");
		scanf("%d", &n);
		if(n>=10&&n<=20)q++;
		   else q_out++;
	}
	printf("\nEst�o no intervalo: %x\nN�o est�o no intervalo: %x", q, q_out);
	getche();
}
