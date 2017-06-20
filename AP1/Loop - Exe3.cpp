#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()

{
	
	int x;
	
	setlocale(LC_ALL, "Portuguese");
	
	   for(x=1; x<=10; x++)
	   {
	   	printf("\n%d", x+100);
	   }
	
	getche();   
}
