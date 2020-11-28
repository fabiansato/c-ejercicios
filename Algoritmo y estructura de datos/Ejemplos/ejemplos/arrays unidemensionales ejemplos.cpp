/*Arrays unidimensionales
-arrays enteros

*/
#include<stdio.h>
#include<conio.h> //para hacer getch

int main(){
	
	//Arrays enteros
	printf("Muestra el contenido de arrays enteros:\n");
	int i;
	int a[5]={1,2,3,4,5};
	
	for(i=0;i<5;i++){
		printf("%i\n",a[i]);
	}
	
	
	//Arrays flotantes
	printf("Muestra el contenido de arrays flotantes:\n");
	float b[5];
	int j;
	for(j=0;j<5;j++){
		printf("%i. Digite un numero:\n",j+1);
        scanf("%f",&b[j]);
	};
	
	for(j=0;j<5;j++){
		printf("Numero en flotante b[%i] vale: %f\n",j+1,b[j]);
	}
	
    //Arrays en caracteres
	printf("Muestra el contenido de arrays en caracteres:\n");
	
	char c[5]={'a','e','i','o','u'};
	int k;
	for(k=0;k<6;k++){
		printf("%c\n",c[k]);
	}
	
	//Arrays en cadena de caracteres
	
	char d[20]="Fabian";
	printf("El valor del string almacenado es: %s\n",d);
	printf("Ahora cambiemos el string, ingrese lo que quiera:\n");
    fflush(stdin);
	gets(d);
    
    printf("El valor de la cadena de caracteres es: %s",d);	getch();
	return 0;
}
