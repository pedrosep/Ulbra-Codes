#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()

{
	
	int x, n, q=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	  for(x=1; x<=10;x++)
	  {
	  printf("\nDigite o n�mero: ");
	  scanf("%d", &n);
	  if(n<0)q++;
      }
    
	     printf("\nN�meros negativos: %x", q);
	
	getche();
}
