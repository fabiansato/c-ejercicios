//Archivos

#include <stdio.h>
#include <conio.h>

main(){
    
    int n=1;
    char nombre[80];
    float salario;
    
    FILE *pArchivo;
    
    pArchivo = fopen ("./pruebaArchivos.txt","r");
    
    if (pArchivo != NULL){
        while (!feof(pArchivo)){
            fscanf(pArchivo,"%d\t%s\t%f\n", &n,nombre,&salario);
            printf("%d\t%s\t%f\n",n,nombre,salario);
        }
                
        fclose(pArchivo);
        return 0;
    } 
}
