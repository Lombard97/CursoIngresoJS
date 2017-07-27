function Mostrar()
{
  var importe;
  var importefinal;

  	importe = parseInt(prompt("ingrese el importe"));

  	importefinal = importe+importe*0.21;

  	document.getElementById('importeFinal').value = importefinal;


}
