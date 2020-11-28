#include<stdio.h>
#include<conio.h>
#include<math.h>

/*       
Dada una cantidad expresada en pies, y otra en metros. 
Determinar la suma pero convertida a pulgadas, a yardas, a metros y a millas por separado. 
Considere las siguientes equivalencias: 
1 milla = 1609 metros, 1 pulgada  = 0.0254 metros, 1 yarda = 3 pies, 1 pie = 12 pulgadas.
*/

int main() {
	
	float pies,metros,metrosapie,sumapm,pulgadastotal,yardastotal,metrostotal,millastotal;
	
	printf("Ingrese el primer valor en pies: \n");
	scanf("%f",&pies); 
	printf("Ingrese el segundo valor en metros: \n");
	scanf("%f",&metros);
	
	metrosapie=metros*(3.2/1);
	sumapm=metrosapie+pies;
	
	pulgadastotal=sumapm*(12/1); 
	yardastotal=sumapm*(0.333/1);
	metrostotal=sumapm*(1/3.28);
	millastotal=sumapm*(1/5.280);

printf("La suma de los datos en pulgadas es: %f\n",pulgadastotal);	
printf("La suma de los datos en yardas es: %f\n",yardastotal);	
printf("La suma de los datos en metros es:%f\n",metrostotal);	
printf("La suma de los datos en millas es:%f\n",millastotal);	
	
getch();
}
