function CalcularEtapa(){
	var campoEdad,
		campoResultado,
		valorEdad;

	campoResultado = document.getElementById('Resultado');
	campoEdad = document.getElementById('Edad');
	valorEdad = parseint(campoEdad.value);
	switch(valorEdad)
	{
		case 12:
			campoResultado.innerHTML = "Infancia";
			break;
		case 13:
			campoResultado.innerHTML = "Adolescencia";
			break;
		case 17:
			campoResultado.innerHTML = "Juventud";
			break;
		case 23:
			campoResultado.innerHTML = "Adulto";
			break;
	}



}