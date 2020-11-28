#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>
int leer_un_turno (int);
void funcion_menu();
main ()
{
    system ("COLOR 3F");
	int totalentradasn1=0,totalentradasn2=0,totalentradasn3=0,totalentradast1=0,totalentradast2=0,totalentradast3=0,cantentradast1=0,cantentradast2=0,cantentradast3=0,cantentradasn1=0,cantentradasn2=0,cantentradasn3=0,entradanoche=60,precioentrada=60,venta,promoprecion=0,promopreciot=0,totalpromo=0,turno=0,compra=0,asientos=0,precio=0,cantidadtotal2turnos=0,entradas=0,totalturnonoche=0,totalturnotarde=0,totalpromotarde=0;
	char diapromot ,diapromon;
	leer_un_turno (turno);
	funcion_menu ();
	scanf ("%d",&turno);
	while(turno<3)
	{
		switch(turno)
		{
			case 1 :
				printf("\n\t\t\t\t-SALAS-\n1.Sala num1 \n2.Sala num2 \n3.Sala num3 \n4.Volver \nElija su sala:\n ");
			    scanf("%d",&compra);
				while(compra<4)
				{
					switch(compra) 
					{
								case 1:
									printf("\n Cuantas entradas desea? \n");
									scanf("%d",&entradas);
									totalentradast1=totalentradast1+entradas;
									precioentrada=entradas*100;
									if(asientos<0){
										printf("no hay asientos disponibles \n ");
									}
									else
								    {
								       cantentradast1=totalentradast1-entradas;
						 			   printf("\nDia de promocion? \n [s]si \n [n]no  \n");
									   scanf("%s",&diapromot);
	         							if(diapromot=='s'){
									   	 precio=precioentrada/2;
										 printf ("\nEl total a pagar es:%d\n",precio);																			   	 
									   }
									   else{
									   	 printf ("\nEl total a pagar es:%d\n",precioentrada);
									   }	
									   system ("pause");
									   system ("cls");								   								   
									}	
								   compra=4; 
								break;								
								case 2:									     									
									printf("\n Cuantas entradas desea? \n");
									scanf("%d",&entradas);
									totalentradast2=totalentradast2+entradas;
									precioentrada=entradas*100;
									if(asientos<0){
										printf("no hay asientos disponibles \n ");
									}
									else
								    {
								       cantentradast2=totalentradast2-entradas;
									   printf("\nDia de promocion? \n [s]si \n [n]no  \n");
									   scanf("%s",&diapromot);
									   if(diapromot=='s'){
									   	 precio=precioentrada/2;
										 printf ("\nEl total a pagar es:%d\n",precio);
									   }
									   else{
									   	 printf ("\nEl total a pagar es:%d\n",precioentrada);
									   }		
									   system ("pause");
									   system ("cls");								   
									}									  
								   compra=4;
								break;
								case 3:							
								printf("\n Cuantas entradas desea? \n");
									scanf("%d",&entradas);
									totalentradast3=totalentradast3+entradas;
									precioentrada=entradas*100;
									if(asientos<0){
										printf("no hay asientos disponibles \n ");
									}
									else
								    {
								    	cantentradast3=totalentradast3-entradas;
									   printf("\nDia de promocion? \n [s]si \n [n]no  \n");
									   scanf("%s",&diapromot);
									   if(diapromot=='s'){
									   	 precio=precioentrada/2;
										 printf ("\nEl total a pagar es:%d\n",precio);
									   }
									   else{
									   	 printf ("\nEl total a pagar es:%d\n",precioentrada);
									   }
									   system ("pause");
									   system ("cls");	
									}	
								   compra=4;					
								break;
								case 4:
									compra=4;
								break;
								default:
									printf("\nOpcion invalida.");
									break;
					}				
				promopreciot=promopreciot+precio;
				}
			break;			
			case 2 :				
				printf("\n\t\t\t\t-SALAS-\n1.Sala num1 \n2.Sala num2 \n3.Sala num3 \n4.Volver \nElija su sala:\n ");
			    scanf("%d",&compra);			
				while(compra<4)
				{
					switch(compra) 
					{
								case 1:
									printf("\n Cuantas entradas desea? \n");
									scanf("%d",&entradas);								
									totalentradasn1=totalentradasn1+entradas;
									precioentrada=entradas*100;
									if(asientos<0){
										printf("no hay asientos disponibles \n ");
									}
									else
								    {
								       cantentradasn1=totalentradasn1-entradas;
								       printf("\nDia de promocion? \n [s]si \n [n]no  \n");
									   scanf("%s",&diapromon);
									   if(diapromon=='s'){
									   	 precio=precioentrada/2;
										 printf ("\nEl total a pagar es:%d\n",precio);
									   }
									   else{
									   	 printf ("\nEl total a pagar es:%d\n",precioentrada);
									   }
									   system ("pause");
									   system ("cls");	
									}									  
								   compra=4;
									break;
								case 2:									
									printf("\n Cuantas entradas desea? \n");
									scanf("%d",&entradas);
									totalentradasn2=totalentradasn2+entradas;
									precioentrada=entradas*100;
									if(asientos<0){
										printf("no hay asientos disponibles \n ");
									}
									else
								    {
								        cantentradasn2=totalentradasn2-entradas;
									    printf("\nDia de promocion? \n [s]si \n [n]no  \n");
									    scanf("%s",&diapromon);
									    if(diapromon=='s'){
									   	 precio=precioentrada/2;
										 printf ("\nEl total a pagar es:%d\n",precio);
									   }
									   else{
									   	 printf ("\nEl total a pagar es:%d\n",precioentrada);
									   }
									   system ("pause");
									   system ("cls");	
									}									  
								   compra=4;
								case 3:
								printf("\n Cuantas entradas desea? \n");
									scanf("%d",&entradas);
									totalentradasn3=totalentradasn3+entradas;
									precioentrada=entradas*100;
									if(asientos<0){
										printf("no hay asientos disponibles \n ");
									}
									else
								    {
								       cantentradasn3=totalentradasn3-entradas;
									   printf("\nDia de promocion? \n [s]si \n [n]no  \n");
									   scanf("%s",&diapromon);
									   if(diapromon=='s'){
									   	 precio=precioentrada/2;
										 printf ("\nEl total a pagar es:%d\n",precio);
									   }
									   else{
									   	 printf ("\nEl total a pagar es:%d\n",precioentrada);
									   }
									   system ("pause");
									   system ("cls");	
									}									  
								   compra=4;
									break;
								default:
								printf("\nOpcion invalida.");
					}  
					promoprecion=promoprecion+precio;
				}
		break;			
	    }
	    printf("\nElija una opcion \n[1]Turno Tarde \n[2]Turno noche  \n[3]Fin para salir ");
		scanf("%d",&turno);
	}
	totalturnonoche=totalentradasn1+totalentradasn2+totalentradasn3;
	totalturnotarde=totalentradast1+totalentradast2+totalentradast3;
	cantidadtotal2turnos=totalturnonoche+totalturnotarde;
	totalpromo=promopreciot+promoprecion;
	printf("\nEl total entre los dos turno es de: $%d",cantidadtotal2turnos);
	printf("\nTotal del turno noche es de :$%d",totalturnonoche);
	printf("\nTotal del turno tarde es de :$%d",totalturnotarde);
	printf("\nTotal de promos turno tarde es de :$%d",promopreciot);
	printf("\nTotal de promos turno noche es de :$%d",promoprecion);
	printf("\nTotal de promos es de :$%d",totalpromo);
}
int leer_un_turno (int turno){
	printf ("Ingrese un numero para iniciar el programa:\n ");
	scanf ("%d",&turno);
	
}
void funcion_menu ()
{
	printf("\n\n\n\n\n--------------------------------------------------------------------------------\n\t\t        CINEMA THE WALL\n\n\n\t\t        CINEMA THE WALL\n\n--------------------------------------------------------------------------------");
	printf(" \n[1]Turno Tarde \n[2]Turno noche  \n[3]Fin para salir \nElija una opcion: ");
}

