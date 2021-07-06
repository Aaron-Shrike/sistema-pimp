#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
//#include <iostream.h>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>

#define MAX 50
#define LIM 50


// operacions basicas de datos simples

int leeEntero(char msje[], int min, int max)
{ int num;
  do{
     printf("%s", msje);
     scanf("%d", &num);
  }while(!(num>=min && num<=max));
  return num;
}

float leeReal(char msje[], float min, float max)
{ float num;
  do{
     printf("%s", msje);
     scanf("%f", &num);
  }while(!(num>=min && num<=max));
  return num;
}




//operaciones de vector enteros

void iniciaVE(int V[], int m)
{
 for(int i=0; i<m; i++)
 	V[i]=0;
}



//operaciones de vector reales
void iniciaVR(float V[], int m)
{
 for(int i=0; i<m; i++)
 	V[i]=0.0;
}


////operaciones de Tablas

void iniciaTabla(char T[][LIM], int m)
{
 for(int i=0; i<m; i++)
 	T[i][0]=NULL;
}

int validaTabla(char msje[], char T[][LIM], int tam)
{
 int opc;
 for(int i=0; i<tam; i++)
    printf("\n%d: %s",i+1, T[i]);

  opc=leeEntero(msje, 1, tam);
  fflush(stdin);
  return opc;

}

 char continuar (char msje[])
{
	char rpta;
   do{
   	printf("\n%s", msje);
      fflush(stdin);            
      scanf("%c",&rpta);
      rpta= toupper(rpta);
   }while(!(rpta=='S' || rpta== 'N'));
   return rpta;
}

//Struct fecha

struct Fecha
{
	int Dia;
	int Mes;
	int Anio;
};

//inicia fecha

void iniciaFecha(Fecha &F)
{
	F.Dia=0;
	F.Mes=0;
	F.Anio=0;
}

//lee fecha

void leeFecha(char msje[],Fecha &F)
{
   printf("\n%s",msje);
	do
	{
		printf("\n\tDia [dd]:    ");
		scanf("%d",&F.Dia);
	}while(!(F.Dia>0 && F.Dia<=31));
	do
	{
		printf("\tMes [mm]:    ");
		scanf("%d",&F.Mes);
	}while(!(F.Mes>0 && F.Mes<=12));
	do
	{
		printf("\tAnio [aaaa]:  ");
		scanf("%d",&F.Anio);
	}while(!(F.Anio>1900 && F.Anio<=2020));
}

//mostrar fecha

void mostrarFecha(char msje[],Fecha &F)
{
   printf("\%s",msje);
	printf("  %d",F.Dia);
	printf(" / %d",F.Mes);
	printf(" / %d",F.Anio);
}

//comparar fecha

int comparaFechas(Fecha &F,Fecha &FI)
{
	if(F.Anio>FI.Anio)
		return 1;
	else
	    if(F.Anio<FI.Anio)
	      return -1;
	    else
	      if(F.Mes>FI.Mes)
				return 1;
	      else
				if(F.Mes<FI.Mes)
		  			return -1;
				else
		   		if(F.Dia>FI.Dia)
		     			return 1;
               else
		     			if(F.Dia<FI.Dia)
		       			return -1;
		     			else
		       			return 0;
}

void copiaFecha(Fecha &F,Fecha &FI)
{
	F.Anio=FI.Anio;
   F.Mes=FI.Mes;
   F.Dia=FI.Dia;
}

