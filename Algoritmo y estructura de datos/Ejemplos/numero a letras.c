#include <stdio.h>
#include <conio.h>
#include <math.h>

char* letras(int num);

main (){
	int num;
	int vec[9]={};
	
	printf("Ingresar numero entero positivo (MAX 9 cifras):\n");
	scanf("%d", &num);
	
	//Pasar el numero a las posiciones de un vector
	int i;
	for(i=0; i<9; i++){
		vec[i] = num/pow(10,9-i-1);
		num -= vec[i]*pow(10,9-i-1);
	}
	
	//Imprimir el vector en palabras
	int ceros = 0;
	for(i=0; i<9; i++){
		if (vec[i] != 0)
			ceros = 1;
		
		if (ceros == 1)
			printf("%s ", letras(vec[i]));
	}
	
	getch();
	return 0;
}//FIN main

char* letras(int num){	
	switch (num){
		case 0:
			return "Cero";
			break;
		case 1:
			return "Uno";
			break;
		case 2:
			return "Dos";
			break;
		case 3:
			return "Tres";
			break;
		case 4:
			return "Cuatro";
			break;
		case 5:
			return "Cinco";
			break;
		case 6:
			return "Seis";
			break;
		case 7:
			return "Siete";
			break;
		case 8:
			return "Ocho";
			break;
		case 9:
			return "Nueve";
			break;
	}
}
