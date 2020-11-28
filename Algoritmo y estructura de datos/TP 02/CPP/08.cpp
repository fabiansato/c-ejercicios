#include<stdio.h>
#include<conio.h>

/*       
8- Realizar un programa que pida el ingreso de 2 números y la operación 
a realizar entre ellos y muestre el resultado de la operación.
*/


int main() {
    float num1,num2,resta,suma,multiplicacion,division;
    int operacion;
    
    printf("Ingrese primer numero: \n");
    scanf("%f",&num1);
    printf("Ingrese segundo numero: \n");
    scanf("%f",&num2);
   
    
    resta=num1-num2;
    suma=num1+num2;
    multiplicacion=num1*num2;
    division=num1/num2;
    
    printf("Elige que operacion usar 1- Resta 2-Suma 3-Multiplicacion 4-division: \n");
    scanf("%d",&operacion);
    
    switch(operacion){
                      case 1:
                      printf("La resta entre los numeros es: %f\n",resta);
                      break;
                        case 2:
                        printf("La division entre los numeros es: %f\n",suma);
                        break;
                            case 3:
                            printf("La division entre los numeros es: %f\n",multiplicacion);
                            break;
                               case 4:
                               printf("La division entre los numeros es: %f\n",division); 
                               break;                     
                                    default:
                                    printf("Error");
                      }	
	
getch();
}
