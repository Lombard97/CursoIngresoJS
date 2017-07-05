/*Debemos lograr tomar el importe por ID ,
transformarlo a entero (parseInt), luego
mostrar el importe con un aumento del 10 %
en el cuadro de texto "RESULTADO".*/
function MostrarAumento()
{
	// defino las variables.
	var sueldo;
	var porcentaje;
	var resultado;
	
	//asigno las variables y la transformo.
	sueldo = parseInt(document.getElementById('sueldo').value);
	porcentaje = sueldo*0.1+sueldo;
	resultado = parseInt(document.getElementById('resultado').value = porcentaje);


}
