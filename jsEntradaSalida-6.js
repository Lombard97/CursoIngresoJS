/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt) y Sumarlos.
Mostar el resulto por medio de "ALERT"*/
function sumar()
{
	//defino las variables

	var numeUno; 
	var numeDos; 
	

	//transformo las variables
	
	numeUno = parseInt(document.getElementById('numeroUno').value);

	numeDos = parseInt(document.getElementById('numeroDos').value);
	
	// muestro el resultado 
	
	alert("el resultado de la operacion: "+(numeUno+numeDos));

}

