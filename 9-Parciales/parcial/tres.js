function Mostrar()
{
	var largo;
	var ancho;
	var perimetro;
	var alambre;
	largo = parseInt(document.getElementById('alrgo').value);
	ancho = parseInt(document.getElementById('ancho').value);


	perimetro = largo*2+ancho*2;

	alambre = perimetro*3;

	alert("El alambre necesario es: "+alambre+" metros");

}
