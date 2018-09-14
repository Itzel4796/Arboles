
//    LIBRERIAS
//**************************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/// Constantes
//**********************************************************************
#define N 10
// PROTOTIPOS DE FUNCIONES
//****************************************************************************
void menu (void);
void programa1(void);
void programa2(void);
void programa3(void);
void delay(int);
// MAIN PRINCIPAL  ...  funcion principal
//****************************************************************************

int main (void)
{
   menu();
   return 0;
}
// desarollo de las funciones en el mismo orden de como listamos los prototipos
//****************************************************************************

//*****************   FUNCION MENU DESDE DONDE SE MANDA LLAMAR LAS DEMAS FUNCIONES
void menu(void)
{
   int op;
   
   do{
      system ("cls");
      printf("\n M  E   N   U");
	  printf("\n1.- Forma de cascada anidado por verdadero ascendente");
	  printf("\n2.- Forma de cascada anidado por falso descendente");
	  printf("\n3.- Arbol Optimizado");
	  printf("\nESCOGE UNA OPCION.");
      scanf ("%d",&op);
	  switch(op)
	    {
		  case 1: programa1();   break;
		  case 2: programa2();  break;
		  case 3: programa3();  break;
		}
   }while(op != 3);
}

//**************************************************************************************

//*********** ANIDADO POR VERDADERO
void programa1(void)
{
     system ("cls");
   int n1,n2,n3,prom;
    printf("Ingresa la primer calificacion:");
    scanf("%d",&n1);
	printf("\nIngresa la segunda calificacion:");
	scanf("%d",&n2);
    printf("\nIngresa la tercer calificacion:");
	scanf("%d",&n3);
	prom=(n1+n2+n3)/3;
  if(prom>=30)
	{
	    if(prom>=60)
        {
            if(prom>=70)
            {
                if(prom>=80)
                {
                    if(prom>=90)
                    {
                        if(prom>=96)
                        {
                            if(prom>100)
                            {
                              printf("Error");
                            }
                            else
                            {
                              printf("Excelente");
                            }
                        }
                        else
                        {
                            printf("Muy bien");
                        }
                    }
                    else
                    {
                        printf("Bien");
                    }
                }
                else
                {
                    printf("Regular");
                }
            }
            else
            {
                printf("Suficiente");
            }
        }
        else
        {
            printf("Extraordinario");
        }
	}
	else
    {
        printf("Repetir");
    }

	system("pause");
}

//**************************************************************************************

//***********ANIDADO POR FALSO DESCENDENTE 
void programa2(void)
{
   system ("cls");
   int n1,n2,n3,prom;
    printf("Ingresa la primer calificacion:");
    scanf("%d",&n1);
	printf("\nIngresa la segunda calificacion:");
	scanf("%d",&n2);
    printf("\nIngresa la tercer calificacion:");
	scanf("%d",&n3);
	prom=(n1+n2+n3)/3;
   if(prom>100)
      {
      	printf("Error");
	  }
	else
	 {
	 	if (prom>=96 && prom<100)
	 	{
	 		printf("Excelente");
		}
	   else
	    {
	        if (prom>=90 && prom<96)
	        {
	        	printf("Muy Bien");
			}
		   else
		    {
		    	if (prom>=80 && prom<90)
		    	{
		    	printf("Bien");
		        }
		       else
		        {
		        	if (prom>=70 && prom<80)
		        	{
		        		printf("Regular");
					}
				   else
				    {
				    	if (prom>=60 && prom<70)
				    	{
				    	 	printf("Suficiente");
						}
					   else
					    {
					    	if (prom>=30 && prom<60)
					    	{
					    		printf("Extraordinario");
							}
						   else
						   {
						   	printf("Repetir");
						   }
					    }
					}
				}
			}
		}
	 }
   system("pause");


}
//**************************************************************************************

//***********ARBOL  
void programa3(void)
{
   system ("cls");
   int n1,n2,n3,prom;
    printf("Ingresa la primer calificacion:");
    scanf("%d",&n1);
	printf("\nIngresa la segunda calificacion:");
	scanf("%d",&n2);
    printf("\nIngresa la tercer calificacion:");
	scanf("%d",&n3);
	prom=(n1+n2+n3)/3;

	if(prom>=80)
	{
		if(prom>=90)
		{
			if(prom>=96)
			{
				if(prom>100)
				{
					printf("\nError en promedio");
			    }
				else
				 {
				   printf("\nExelente");
				 }
		   }
			 
	    	else
	     	{
	    	printf("\nMuy Bien");
	    	}
			
		
     	}
     	else
     	{
     		printf("\nBien");
     	}
   }
  else
  {
  	if(prom<70)
  	{
  	  if(prom<60)
  		{
  		  if(prom<30)
  			{
  				printf("\nRepetir");
  			}
  			else
		  {
		  	printf("\nExtraordinario");
		  } 
  	    }
  	    else
  	    {
		  	printf("\nSuficiente"); 
  	    }
  	   
   	}
   	else
   	{
   		printf("\nRegular");
   	}
 }
   system("pause");

}

//************************************************************************
void delay(int tiempo)
{
  int i,j;
  for(i=0;i<tiempo*100;i++)
     {
	   for(j=0;j<tiempo*100;j++);
		

	 }
}











