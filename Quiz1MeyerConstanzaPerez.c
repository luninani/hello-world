#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int num;
    int x,y,z;
    int a;        
    char rsp;
    do
    {
        int cont=0;
        int cont2=0, cont8=0, aux=0, base=8;
        int resp=0;
       do
       {
        printf("Introduzca un numero que quiera saber si pertenece a la serie Fibonacci:\n");
        scanf("%i",&num);
        if(num<2)
            printf("Error. Introduzca un numero mayor a 1.\n");
       }while(num<2);
       x=0;
       y=1;
       //printf("0\n1\n",z);
      for (cont=1;cont<=num;cont++)
      {
          z=x+y;
          //printf("%d\n",z);
          x=y;
          y=z;
          //printf("cont:%i\n",cont);
          if (num==z)
          {
             printf("El numero %i pertenece a la serie Fibonacci.\n",num);
             int contpos=cont+1;
             cont=num;
             cont2=contpos;
             while(cont2>0)
             {
                          aux=cont2%base;
                          cont2=cont2/base;
                          resp=resp+aux*pow(10,cont8);
                          cont8++;
             }
             printf("Respuesta en octal del numero %i y posicion %i es: %i\n",num,contpos,resp);
          }
      }
          if(num!=z)
          {
              printf("El numero %i NO pertenece a la serie Fibonacci.\n",num);
              a=0;
              int i;
                for(i=1;i<=num;i++)
                {
                    if(num%i==0)
                    a++;
                }
              if(a==2)
                      printf("El numero %i es primo.\n",num);
              else if(a!=2)
                      printf("EL numero %i NO es primo.\n",num);
          }
      do
      {
         printf("Si desea continuar presione (S), y si NO desea continuar presione (N):\n");
         scanf(" %c",&rsp);
         if(rsp!='S'&&rsp!='N')
                  printf("ERROR. Introduzca 'S' o 'N'.\n");
      }while(rsp!='S'&&rsp!='N');
    }while(rsp=='S');
      system("pause");
}
