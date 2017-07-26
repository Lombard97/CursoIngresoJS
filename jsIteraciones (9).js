function Mostrar()
{

	var contador=0;
	// declarar variables
	var numeromax=0;
	var numeromin=11;
	var respuesta='si';
	var numero=0;
	while(respuesta!='no')
	{
		numero=prompt("ingrese numeros");
		respuesta = prompt("continuar?");

			if(numero>1);
			{
				numero=numeromax;
			}
	
			if(numero<numeromin)
			{
				numero=numeromin;
			}	
	}
	console.log("numero maximo es: "+numeromax);
	console.log("numero minimo es: "+numeromin);



}//FIN DE LA FUNCIÓN