Algoritmo algo1
	i <- 0
	pos <- 0
	neg <- 0
	Para i<-1 Hasta 50 Hacer
		Escribir 'Vuelta numero: ',i
		Escribir 'Ingresar un numero'
		Leer num
		Si num>0 Y num!=0 Entonces
			pos <- pos+1
		SiNo
			neg <- neg+1
		FinSi
	FinPara
	Escribir 'Los numeros positivos fueron: ',pos
	Escribir 'Los numeros negatios fueron: ',neg
FinAlgoritmo

