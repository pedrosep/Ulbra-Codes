#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()

{
	
	int x;
	float g1, g2, media;
	
	setlocale(LC_ALL,"Portuguese");
	
	
	   for(x=1; x<=10; x++)
	   {
	   
	   printf("\nAluno número: %d", x);
	   printf("\nG1: ");
	   scanf("%f", &g1);
	   printf("\nG2: ");
	   scanf("%f", &g2);
	   media = (g1+g2*2)/3;
	   printf("\nMédia=%.3f", media);
       }
getche();
}
