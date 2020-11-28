#include<conio.h>
#include<stdio.h>
#include<string.h>
main() {
	// declarar variables
	int fecha=0, atendido=0, edad=0, marca=0, cantidad=0, contadornuevo=0, contadorantiguo=0, SFem=0, SMas=0, EdadMay=0, EdadMen=0, AcuA=0, AcuB=0, AcuC=0, AcuD=0;
	int ContA=0, ContB=0, ContC=0, ContD=0, Ban=0,Contdg=0, Contp=0, Contv=0, Contc=0, GananciaAB=0, VacunaAB=0, GananciaCD=0, OperacionCD=0, GananciaTotal=0;
	char sexo, F, vacuna, operacion, A, B, C, D, S, s, N, n, opcion;
	float peso=0, PesoMay=0, PromedioVacuna=0, PromedioOperacion=0;
	printf("Ingrese fecha:\n");
	scanf("%i", &fecha);
	int primeraVez=1;  //Esta es la variable que servirá para inciar la bandera
	
	while(fecha!=31) {
		printf("Ingrese cantidad de veces que fue atendido:\n");
		scanf("%i", &atendido);
		if(atendido==0) {
			contadornuevo++;
		} else {
			contadorantiguo++;
		}
		fflush(stdin);
		
		printf("Ingrese sexo:\n");
		printf("-Femenino:F\n");
		printf("-Masculino:M\n");
		scanf("%c", &sexo);
		if(sexo=='F'||sexo=='f') {
			SFem++;
		} else {
			SMas++;
		}		
		
		printf("Ingrese edad:\n");
		scanf("%i", &edad);
		//iniciamos dentro del bucle las vueltas de la bandera
		if (primeraVez == 1){
			EdadMen = edad;
			primeraVez = 0;
		} else if (edad < EdadMen){
			EdadMen = edad;
		}
		if (primeraVez == 1){
			EdadMay = edad;
			primeraVez = 0;
		} else if (edad > EdadMay){
			EdadMay = edad;
		}
		
		
				
		printf("Ingresar peso:\n");
		scanf("%f", &peso);
		if (Ban=0) {
			PesoMay=peso;
			Ban=1;
		} else if (peso>PesoMay) {
		PesoMay=peso;
		}
		
        fflush(stdin);
		printf("Ingrese vacuna A o B:\nA-$800 \nB-$500\nZ-Ninguna\n");
		scanf("%c", &vacuna);
		if(vacuna=='A'||vacuna=='a') {
			AcuA=AcuA+800;
			ContA++;
		} else if (vacuna=='B'||vacuna=='b') {
			AcuB=AcuB+500;
			ContB++;
		} else {
			printf("No se aplico\n");
		}
		
		fflush(stdin);
		printf("Ingrese tipo de operacion C o D:\nC-$1000 \nD-$3000 \nZ-Ninguno\n");
		scanf("%c", &operacion);
		if(operacion=='C'||operacion=='c') {
			AcuC=AcuC+1000;
			ContC++;
		} else if (operacion=='D'||operacion=='d') {
			AcuD=AcuD+3000;
			ContD++;
		} else {
			printf("No se opero\n");
		}
		
		
		do {
			printf("Ingrese marca del sobre:\n 1-Dog Chow \n 2-Pedigree \n 3-Vital \n 4-Cesar\n");
			scanf("%i", &marca);
			
			printf("Ingrese cantidad de sobres\n");
			scanf("%i", &cantidad);
			
			switch(marca){
                          case 1:
                          Contdg=Contdg + cantidad;
                     break;
                     case 2:
                          Contp=Contp + cantidad;
                     break;
                     case 3:
                          Contv=Contv + cantidad;
                     break;
                     case 4:
                          Contc=Contc + cantidad;
                          }
			fflush(stdin);
			printf("Desea volver a comprar sobres? S/s o N/n:\n");
			scanf("%c", &opcion);
			system("cls");
		}
		while (opcion=='S'||opcion=='s');
		system("cls");
		
		printf("Ingrese fecha:\n");
		scanf("%i",&fecha);
	}
	printf("El peso mayor es: %f\n", PesoMay);
	getch();
	printf("La edad mayor es: %i\n", EdadMay);
	getch();
	printf("La edad minima es: %i\n", EdadMen);
	getch();
	GananciaAB=AcuA+AcuB;
	printf("La ganancia total de vacunas es: %i\n", GananciaAB);
	printf("La ganancia total de vacunas A es: %i\n", AcuA);
	printf("La ganancia total de vacunas B es: %i\n", AcuB);
	getch();
	VacunaAB=ContA+ContB;
	printf("La cantidad total de vacunas es: %i\n", VacunaAB);
	printf("La cantidad total de vacunas A es: %i\n", ContA);
	printf("La cantidad total de vacunas B es: %i\n", ContB);
	getch();
	GananciaCD=AcuC+AcuD;
	printf("La ganancia total de operaciones es: %i\n", GananciaCD);
	printf("La ganancia total de operaciones C es: %i\n", AcuC);
	printf("La ganancia total de operaciones D es: %i\n", AcuD);
	OperacionCD=ContC+ContD;
	printf("La cantidad total de operaciones es: %i\n", OperacionCD);
	printf("La cantidad total de operaciones C es: %i\n", ContC);
	printf("La cantidad total de operaciones D es: %i\n", ContD);
	getch();
	GananciaTotal=GananciaAB+GananciaCD;
	printf("La totalidad de ganancias es: %i\n", GananciaTotal);
	PromedioVacuna=GananciaAB/VacunaAB;
	printf("El promedio de vacunas es: %f\n", PromedioVacuna);
	PromedioOperacion=GananciaCD/OperacionCD;
	printf("El promedio de operaciones es: %f\n", PromedioOperacion);
	getch();
	printf("Animales atendidos:\n");
	printf(" Femeninos: %i\n", SFem);
	printf(" Masculinos: %i\n", SMas);
	getch();
	printf("Clientes nuevos: %i\n", contadornuevo);
	printf("Clientes antiguos: %i\n", contadorantiguo);
	getch();
	printf("Cantidad de sobres vendidos:\n");
	printf("Dog Chow: %i\n", Contdg);
	printf("Pedigree: %i\n", Contp);
	printf("Vital: %i\n", Contv);
	printf("Cesar: %i\n", Contc);
	getch();
}
