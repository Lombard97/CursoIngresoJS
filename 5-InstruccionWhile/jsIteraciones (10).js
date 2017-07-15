function Mostrar()
{

	var contador=0;
	//declarar contadores y variables 
	var muejres;
	var hombres;
	var respuesta="si";
	var edad;
	var sexo;
	/*ejemplo de obtencion validacion y extraccion de informacion 
	de esta encuenta se debe informar 1 cuantas 
	muejres y cuantos hombres fueron entrevistados 2 
	la persona de mayor edad 3 el promedio de edad 
	4 quien ganara las elecciones 
	*/
	
	while(respuesta!="no")
	{
		sexo = prompt("infrese f o m");

		while(sexo!="f"&&sexo!="m")
		{
			
			sexo = prompt("infrese f o m");
		}
		edad=prompt("ingrese su edad");

		while(edad!=0&&edad!=100)
		{
			edad=prompt("ingrese su edad");

		}


		

	
	}




}//FIN DE LA FUNCIÓN