#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()

{
	
	int x;
	
	setlocale(LC_ALL,"Portuguese");
	
       for(x=1; x<=10; x++)
       {
       	if(x%2 != 0)
       	printf("\n%d", x);
	   }

getche();
}
