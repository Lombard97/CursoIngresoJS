/*Debemos lograr tomar el importe por ID.
Transformarlo a entero (parseInt), luego
mostrar el importe con un Descuento del 25 %
en el cuadro de texto "RESULTADO"*/
function MostrarAumento()
{	
// defino las variables
	var importe; 
	var porcentaje;

	importe= parseInt(document.getElementById('importe').value);
	porcentaje = (importe*0.25);
	(document.getElementById('resultado').value = importe-porcentaje);

}
