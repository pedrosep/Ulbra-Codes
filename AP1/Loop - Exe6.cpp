#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()

{
	
	int x, n;
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite o número: ");
	scanf("%d", &n);
	
	   for(x=1; x<=n; x++)
	   {
	   	printf("\n %d", x);
	   }
getche();
}
