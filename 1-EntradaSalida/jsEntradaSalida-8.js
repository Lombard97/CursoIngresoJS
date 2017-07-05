/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt),realizar la operación correcta y 
mostrar el resto entre el dividendo y el divisor.
ej.: "El resto es 0 ."*/
function SacarResto()
{
	// defino las varibles.
	var num1
	var num2
	var resultado
	
	// asigno las variables y las transformo.
	num1 = parseInt(document.getElementById('numeroDividendo').value);
	num2 = parseInt(document.getElementById('numeroDivisor').value);
	resultado = num1/num2;
	
	//muestro el resultado mediante el alert.
	alert("el resto es: "+resultado);
}

