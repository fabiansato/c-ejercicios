Proceso tp0230
	Definir existecliente Como Entero; // variable para definir si existe cliente y terminar el bucle se define como 1 para comenzar el mismo.
	existecliente <- 1;
	Definir toneladas Como Entero;
	toneladas <- 0;
	Definir cuentachico Como Entero;
	cuentachico <- 0;
	Definir cuentamediano Como Entero;
	cuentamediano <- 0;
	Definir cuentagrande Como Entero;
	cuentagrande <- 0;
	Definir totaldeclientes Como Entero;
	totaldeclientes <- 0;
	Definir totalfinal Como Entero;
	totalfinal <- 0;
	Definir tchicototal Como Entero;
	tchicototal <- 0;
	Definir tmedianototal Como Entero;
	tmedianototal <- 0;
	Definir tgrandetotal Como Entero;
	tgrandetotal <- 0;
	Definir promediochico Como Entero;
	promediochico <- 0;
	Definir promediomediano Como Entero;
	promediomediano <- 0;
	Definir promediogrande Como Entero;
	promediogrande <- 0;
	Definir final Como Entero;
	final <- 0;
	Mientras existecliente!=0 Hacer
		Escribir 'Cuantas toneladas compro el cliente';
		Leer toneladas;
		Si toneladas>300 Entonces
			tgrandetotal <- tgrandetotal+toneladas;
			cuentagrande <- cuentagrande+1;
			Escribir 'Existe otro cliente toque 0 para terminar';
			Leer existecliente;
		SiNo
			Si toneladas<100 Entonces
				tchicototal <- tchicototal+toneladas;
				cuentachico <- cuentachico+1;
				Escribir 'Existe otro cliente toque 0 para terminar';
				Leer existecliente;
			SiNo
				tmedianototal <- tmedianototal+toneladas;
				cuentamediano <- cuentamediano+1;
				Escribir 'Existe otro cliente toque 0 para terminar';
				Leer existecliente;
			FinSi
		FinSi
	FinMientras
	totaldeclientes <- cuentachico+cuentamediano+cuentagrande;
	Si cuentachico!=0 Entonces
		promediochico <- tchicototal/cuentachico;
		Escribir 'Cantidad promedio de toneladas de clientes Chicos (menos de 100 toneladas): ',promediochico;
	SiNo
		Escribir 'No existen clientes con compras de toneladas chicas';
	FinSi
	Si cuentamediano!=0 Entonces
		promediomediano <- tmedianototal/cuentamediano;
		Escribir 'Cantidad promedio de toneladas de clientes Medianos (entre 100 y 300 toneladas): ',promediomediano;
	SiNo
		Escribir 'No existen clientes con compras de toneladas medianas';
	FinSi
	Si cuentagrande!=0 Entonces
		promediogrande <- tgrandetotal/cuentagrande;
		Escribir 'Cantidad promedio de toneladas de clientes Grandes (mas de 300 toneladas): ',promediogrande;
	SiNo
		Escribir 'No existen clientes con compras de toneladas Grandes.';
	FinSi
	totalfinal <- tchicototal+tmedianototal+tgrandetotal;
	Escribir 'Cantidad total de clientes: ',totaldeclientes;
	final <- tchicototal+tmedianototal+tgrandetotal;
	Escribir 'Total de toneladas Vendidas: ',final;
FinProceso

