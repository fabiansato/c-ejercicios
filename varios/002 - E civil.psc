Algoritmo tarjetas // Se tiene un conjunto de N tarjetas. Cada una contiene una información para una persona: a) Número de senso. b) Sexo C)Edad d)Estado Civil "1- Soltero 2-Casado 3-viudo 4-divorciado". Elaborar un algoritmo que lea los datos e indique el numero de perosnas entre 16 y 21 años mujeres solteras.
	ultimatarjeta <- 1
	Mientras ultimatarjeta!=2 Hacer
		Escribir 'Ingrese el numero de senso'
		Leer senso
		Escribir 'Ingrese el numero sexo 1 es Femenino 2 es Masculino'
		Leer sexo
		Escribir 'Ingrese edad'
		Leer edad
		Escribir 'Ingrese estado civil 1=Soltero/a, 2=Casado/a, 3=Viudo/a, 4=Divorciado/a'
		Leer ecivil
		Si sexo='1' Entonces
			Si edad>=16 Y edad<=21 Entonces
				Si ecivil='1' Entonces
					final <- final+1
				FinSi
			FinSi
		FinSi
		Escribir '¿Es la ultima tarjeta? Tipee 1 para seguir o 2 para terminar el conteo de tarjetas'
		Leer ultimatarjeta
	FinMientras
	Escribir 'La cantidad de Mujeres de entre 16 y 21 años solteras es: ',final
FinAlgoritmo

