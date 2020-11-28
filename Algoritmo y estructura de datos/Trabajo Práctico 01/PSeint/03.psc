Algoritmo tp0103
	//3-ESCRIBIR UN ALGORITMO EN EL CUAL SE INGRESAN DOS VARIABLES A Y B.REALICE LA SUMA, LA RESTA, LA DIVISIÓN Y LA MULTIPLICACIÓN DE A CON B. MUESTRE LOS CUATRO RESULTADOS POR PANTALLA.  LUEGO INTERCAMBIE EL VALOR DE LAS DOS VARIABLES Y MOSTRAR LOS VALORES INTERCAMBIADOS.
	Escribir 'Escribe el Primer numero';
	Leer a;
	Escribir 'Escribe el segundo numero';
	Leer b;
	suma <- a+b;
	resta <- a-b;
	multiplicacion <- a*b;
	division <- a / b;
	Escribir 'La suma del primer numero con el segundo es ',suma;
	Escribir 'La resta del primer numero con el segundo es ',resta;
	Escribir 'La multiplicacion del primer numero con el segundo es ',multiplicacion;
	Escribir 'La division del primer numero con el segundo es ',division;
	resta <- b-a;
	division <- b/a;
	Escribir 'Ahora invertimos los numeros. La suma del primer numero con el segundo es ',suma;
	Escribir 'Ahora invertimos los numeros. La resta del primer numero con el segundo es ',resta;
	Escribir 'Ahora invertimos los numeros. La multiplicacion del primer numero con el segundo es ',multiplicacion;
	Escribir 'Ahora invertimos los numeros. La division del primer numero con el segundo es ',division;
FinAlgoritmo

