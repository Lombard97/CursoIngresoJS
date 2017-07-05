/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt),realizar la operación correcta y 
mostar el resulto por medio de "ALERT"
ej.: "la Resta es 750"*/ 
function sumar()
{	
	// defino las variables
	var num1;
	var num2;
	var resultado;
	
	// asigno las variables y las transformo
	num1 = parseInt (document.getElementById('numeroUno').value);
	num2 = parseInt (document.getElementById('numeroDos').value);
	resultado = num1+num2;
	
	// muestro el resultado mediante el alert
	alert("la suma de los numeros es igual: "+resultado);

}

function restar()
{
	// defino las variables
	var num1;
	var num2;
	var resultado;
	
	// asigno las variables y las transformo
	num1 = parseInt (document.getElementById('numeroUno').value);
	num2 = parseInt (document.getElementById('numeroDos').value);
	resultado = num1-num2;
	
	// muestro el resultado mediante el alert
	alert("la suma de los numeros es igual: "+resultado);
}

function multiplicar()
{ 
	// defino las variables
	var num1;
	var num2;
	var resultado;
	
	// asigno las variables y las transformo
	num1 = parseInt (document.getElementById('numeroUno').value);
	num2 = parseInt (document.getElementById('numeroDos').value);
	resultado = num1*num2;
	
	// muestro el resultado mediante el alert
	alert("la suma de los numeros es igual: "+resultado);
}

function dividir()
{
	// defino las variables
	var num1;
	var num2;
	var resultado;
	
	// asigno las variables y las transformo
	num1 = parseInt (document.getElementById('numeroUno').value);
	num2 = parseInt (document.getElementById('numeroDos').value);
	resultado = num1/num2;
	
	// muestro el resultado mediante el alert
	alert("la suma de los numeros es igual: "+resultado);
}

