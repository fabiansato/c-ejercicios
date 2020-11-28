//Archivos

#include <stdio.h>
#include <conio.h>

main(){
    
    int n=1;
    char nombre[80];
    float salario;
    
    FILE *pArchivo;
    
    pArchivo = fopen ("./pruebaArchivos.txt","w");
    
    if (pArchivo != NULL){
        do{
            printf("Introduce el numero del empleado: ");
            scanf("%d", &n);
            
            if (n>0){
                printf("\n Introduzca el nombre del empleado: ");
                scanf("%s",nombre);
                
                printf("\n Introduzca el salario del empleado: ");
                scanf("%f", &salario);
                
                fprintf(pArchivo,"%d\t%s\t%.2f\n",n,nombre,salario);
            }
        } while (n>0);
        
        fclose(pArchivo);
    } 
}
