Algoritmo CAJERO
	rubendolares <- 100000
	rubeneuros <- 100000
	juandolares <- 100000
	juaneuros <- 100000
	moneda <- 0
	codigocajero <- 1
	importe <- 0
	tipoextraccion <- 0
	importeanterior <- 0
	
	juandolaresextraccion <- 0
	juandolaresdeposito <- 0
	juaneurosextraccion <- 0
	juaneurosdeposito <- 0
	rubendolaresextraccion <- 0
	rubendolaresdeposito <- 0
	rubeneurosextraccion <- 0
	rubeneurosdeposito <- 0
	
	Mientras codigocajero!=0 Hacer
		Escribir 'Ingrese código de cajero 1-Juan 2-Ruben 0-Terminar el día'
		Leer codigocajero
		Escribir 'Ingrese Moneda 1-Pesos 2-Dólares, 3-Euros'
		Leer moneda
		Escribir 'Ingrese importe para realizar la transacción'
		Leer importe
		Escribir 'Realize el tipo de extracción 1- Deposito 2-Extraccion'
		Leer tipoextraccion
		Segun codigocajero  Hacer
			1:
				Escribir 'Elegiste el cajero de Juan'
				Segun moneda  Hacer
					1:
						Escribir 'Elegiste moneda peso'
						Escribir 'SOLICITE AL CLIENTE QUE REALICE ESTA OPERACION POR CAJERO AUTOMATICO'
						Escribir 'El monto en Dolares de Juan es: ',juandolares
						Escribir 'El monto en Euros de Juan es: ',juaneuros
						Escribir ''
					2:
						Escribir 'Elegiste moneda dolar'
						Segun tipoextraccion  Hacer
							1:
								juandolares <- juandolares+importe
								juandolaresdeposito <- juandolaresdeposito+1
							2:
								Si juandolares-importe>0 Entonces
									juandolares <- juandolares-importe
									juandolaresextraccion <- juandolaresextraccion+1
								SiNo
									Escribir 'Ingresaste un valor que supera la cantidad para retirar'
								FinSi
							De Otro Modo:
								Escribir 'Ingresaste un codigo de extraccion incorrecto ingrese nuevamente'
						FinSegun
						Escribir 'El monto en Dolares de Juan es: ',juandolares
					3:
						Escribir 'Elegiste moneda euro'
						Segun tipoextraccion  Hacer
							1:
								juaneuros <- juaneuros+importe
								juaneurosdeposito <- juaneurosdeposito+1
							2:
								Si juaneuros-importe>0 Entonces
									juaneuros <- juaneuros-importe
									juaneurosextraccion <- juaneurosextraccion+1
								SiNo
									Escribir 'Ingresaste un valor que supera la cantidad para retirar'
								FinSi
							De Otro Modo:
								Escribir 'Ingresaste un codigo de extraccion incorrecto ingrese nuevamente'
						FinSegun
						Escribir 'El monto en Euros de Juan es: ',juaneuros
					De Otro Modo:
						Escribir 'Elegiste un codigo de moneda erroneo'
						Escribir 'El monto en Dolares de Juan es: ',juandolares
						Escribir 'El monto en Euros de Juan es: ',juaneuros
						Escribir ''
				FinSegun
			2:
				Escribir 'Elegise el cajero de Ruben'
				Segun moneda  Hacer
					1:
						Escribir 'Elegiste moneda peso'
						Escribir 'SOLICITE AL CLIENTE QUE REALICE ESTA OPERACION POR CAJERO AUTOMATICO'
						Escribir 'El monto en Dolares de ruben es: ',rubendolares
						Escribir 'El monto en Euros de ruben es: ',rubeneuros
						Escribir ''
					2:
						Escribir 'Elegiste moneda dolar'
						Segun tipoextraccion  Hacer
							1:
								rubendolares <- rubendolares+importe
								rubendolaresdeposito <- rubendolaresdeposito+1
							2:
								Si rubendolares-importe>0 Entonces
									rubendolares <- rubendolares-importe
									rubendolaresextraccion <- rubendolaresextraccion+1
								SiNo
									Escribir 'Ingresaste un valor que supera la cantidad para retirar'
								FinSi
							De Otro Modo:
								Escribir 'Ingresaste un codigo de extraccion incorrecto ingrese nuevamente'
						FinSegun
						Escribir 'El monto en Dolares de ruben es: ',rubendolares
					3:
						Escribir 'Elegiste moneda euro'
						Segun tipoextraccion  Hacer
							1:
								rubeneuros <- rubeneuros+importe
								rubeneurosdeposito <- rubeneurosdeposito+1
							2:
								Si rubeneuros-importe>0 Entonces
									rubeneuros <- rubeneuros-importe
									rubeneurosextraccion <- rubeneurosextraccion+1
								SiNo
									Escribir 'Ingresaste un valor que supera la cantidad para retirar'
								FinSi
							De Otro Modo:
								Escribir 'Ingresaste un codigo de extraccion incorrecto ingrese nuevamente'
						FinSegun
						Escribir 'El monto en Euros de ruben es: ',rubeneuros
					De Otro Modo:
						Escribir 'Elegiste un codigo de moneda erroneo'
						Escribir 'El monto en Dolares de ruben es: ',rubendolares
						Escribir 'El monto en Euros de ruben es: ',rubeneuros
						Escribir ''
				FinSegun
			De Otro Modo:
				Escribir 'El ingresado Codigo no es 1 o 2'
		FinSegun
	FinMientras
	Escribir 'Se termino el dia del cajero'
	Escribir 'Cantidad Dolares depositados en el cajero de juan son: ',juandolaresdeposito
	Escribir 'Cantidad de Dolares extraidos en el cajero de juan son:',juandolaresextraccion
	Escribir 'Cantidad de Euros depositados en el cajero de juan son: ',juaneurosdeposito
	Escribir 'Cantidad de Dolares extraidos en el cajero de juan son: ',juaneurosextraccion
	Escribir 'Monto disponible en Dolares en el cajero de Juan es: ',juandolares
	Escribir 'Monto disponible en Euro en el cajero de Juan es: ',juaneuros
	Escribir 'Se termino el dia del cajero'
	Escribir 'Cantidad Dolares depositados en el cajero de ruben son: ',rubendolaresdeposito
	Escribir 'Cantidad de Dolares extraidos en el cajero de ruben son:',rubendolaresextraccion
	Escribir 'Cantidad de Euros depositados en el cajero de ruben son: ',rubeneurosdeposito
	Escribir 'Cantidad de Dolares extraidos en el cajero de ruben son: ',rubeneurosextraccion
	Escribir 'Monto disponible en Dolares en el cajero de ruben es: ',rubendolares
	Escribir 'Monto disponible en Euro en el cajero de ruben es: ',rubeneuros
	Escribir 'La extraccio
FinAlgoritmo

