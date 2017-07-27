function Mostrar()
{
	var numero1;
	var numero2;
	var multiplicacion;	
	var resta;
	numero1 = parseInt(prompt("ingrese el primer numero"));
	numero2 = parseInt(prompt("ingrese el segundo numero"));

		if(numero1 == numero2)
		{
			multiplicacion = numero1*numero2;
		}
	alert("la multiplicacion es igual: "+multiplicacion);

			if(numero1>numero2)
			{
				resta = numero1 - numero2;
			}

	alert("La resta es igual: "+resta);
}
