Algoritmo estructuras4
	pass<-'SI'
	Mientras pass='SI' Hacer
		Escribir "Ingresar Horas trabajadas"
		Leer horastrabajadas
		Escribir "Ingresar Tarifa del empleado 1 = 30 la hora, 2 = 40 la hora, y 3 = 50 la hora"
		Leer tarifa
		Si tarifa=1 Entonces
			subtotal<-horastrabajadas*30
			Escribir "El subtotal que gana el empleado es:",subtotal
		SiNo
			Si tarifa=2 Entonces
				subtotal<-horastrabajadas*40
				Escribir "El subtotal que gana el empleado es:",subtotal
			SiNo
				Si tarifa=3 Entonces
					subtotal<-horastrabajadas*50
					Escribir "El subtotal que gana el empleado es:",subtotal
				SiNo
					Escribir "ERROR TARIFA ERRONEA - Ingresar Tarifa del empleado 1 = 30 la hora, 2 = 40 la hora, y 3 = 50 la hora"
					Leer tarifa	
			Fin Si
		Fin Si
	Fin Si
	Si subtotal>8000 Entonces
		total<-subtotal-(subtotal*0.10)
		impuestos<-impuestos+1
		Escribir "El total a cobrar por el empleado es: ",total
		Escribir "--NOTA ESTE EMPLEADO SE LE DESCUENTA EL 10 PORCIENTO DE SU SUELDO--"
	SiNo
		Escribir "El total a cobrar por el empleado es: ",subtotal
	Fin Si
		Escribir "Hay mas empleados? SI / NO "
	Leer pass
Fin Mientras
Escribir "La cantidad de empleados con impuestos (los que ganan mas que 8000) son en total: ",impuestos
FinAlgoritmo
