#include<stdio.h>
#include<stdlib.h>

int main()
{
 	int x,y,cont = 1 ;
 	char op;
 	
 	while(cont != 0) {
		printf("donnez le premier nombre : ");
		scanf("%d",&x);
		printf("donnez le deuxieme nombre : ");
		scanf("%d",&y);
		printf("donnez un operateur : ");
		scanf(" %c",&op);
		
		switch(op){
		  case'+': printf("%d\n",x+y);
		  break;
		  case'-': printf("%d\n",x-y);
		  break;
		  case'*': printf("%d\n",x*y);
		  break;
		  case'/': printf("%d\n",x/y);
		  break;
		  default : printf("vous pouvez utilisez seulement : + - * /");
		}
	 printf("est-ce que vous voulez continuez ? si oui tapez un nombre different de 0 :");
	scanf("%d", &cont);
	 
	 
	 }
	 
	 return 0 ;
}
