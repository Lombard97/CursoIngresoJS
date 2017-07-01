/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt),realizar la operación correcta y 
mostar el resulto por medio de "ALERT"
ej.: "la Resta es 750"*/ 
function sumar()
{	
	//defino las variables

	var nume1;
	var nume2;
	//asigno las variables por ID
	
	nume1 = parseInt(document.getElementById('numeroUno').value);
	nume2 = parseInt(document.getElementById('numeroDos').value);

	alert("el resultado de la suma: "+(nume1+nume2));


}

function restar()
{
	//difino las variables

	var nume1;
	var nume1;
	//asigno las variables
	nume1 = parseInt(document.getElementById('numeroUno').value);
	nume2 = parseInt(document.getElementById('numeroDos').value); 

	//muestro el resultado mediante alert

	alert("el resultado de la resta es: "+(nume1-nume2));

}

function multiplicar()
{ 
	nume1 = parseInt(document.getElementById('numeroUno').value);
	nume2 = parseInt(document.getElementById('numeroDos').value);

	alert("la multiplicacion de los sigueintes numero es: "+(nume1*nume2));
}

function dividir()
{
	var nume1;
	var nume2;

	nume1 = parseInt(document.getElementById('numeroUno').value);	
	nume2 = parseInt(document.getElementById('numeroDos').value);

	alert("el resultado de la division es: "+(nume1/nume2));
}

