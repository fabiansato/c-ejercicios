
void informeA(char moviles[], char pagos[])
{
	int x, cuentamoto=0, cuentapago=0;
	
	
	for(x=0;x<=5;x++){
		if (moviles[x]=='M'){
			cuentamoto++;
		}	
		if (pagos[x]=='S')	{
			cuentapago++;
		}
}
printf("La cantidad de Motos es:%i",cuentamoto);
printf("La cantidad de Subes es:%i",cuentapago);

}

void informeB(int codigos[], int turnos[]);
{
	int z, cuentaturnos=0;
	
	
	for(z=0;z<=5;z++){
	
	if(turnos[z]==1){
	
		cuentaturnos++;
	}else{
			printf("El codigo de este usuario es %i",codigos[z]);
				
			}

			}
			
	printf("El total de acumulado de los turnos picos es %i",cuentaturnos);				
}

