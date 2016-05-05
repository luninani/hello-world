#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int num, num2;

    char rsp;
    do
    {    
		int cont=0, aux=0, base=2;
    	int resp=0, cont2=0;
    	    do
		    {
			    printf("Introduzca un numero y el programa decidira si es un numero malvado o no:\n");
			    scanf(" %i",&num);
			    if(num<0)
		            printf("Error!\n");
		    }while(num<0);
		    num2=num;
		    while(num2>0)
		    {
			    aux=num2%base;     
			    if (aux==1)
		     {
					cont2++;
		     }
			    num2=num2/base;
			    resp=resp+aux*pow(10,cont);
			    cont++;
		    }
		    printf("Respuesta en binario: %i\n",resp);
		    if((cont2%2==0)&&(num!=0))
							printf("El numero %i es un numero malvado.\n",num);
		    else if((cont2%2!=0)||(num==0))
							printf("El numero %i NO es un numero malvado.\n",num); 
    	do
    	{
    		printf("Si desea continuar presione (S), de lo contrario presione (N):\n");
    		scanf(" %c",&rsp);
    		if((rsp!='S')&&(rsp!='N'))
    			printf("Error!\n");
		}while((rsp!='S')&&(rsp!='N'));
	}while(rsp=='S');
	
    system("pause");
}
