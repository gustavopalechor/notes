function CalcularDia(){
	var campoResultado,
		fechaActual,
		diaActual;

	campoResultado = document.getElementById('Resultado');
	// Instanciacion del objeto DATE.
	fechaActual = new Date();
	diaActual = fechaActual.getDay(); //getDay(fechaActual())
	//La funcion getDay devuelve el dia de la semana de la fecha: 0-> Domingo, 1->Lunes .... 

	switch(diaActual)
	{
		case 1:
			campoResultado.innerHTML = "Lunes"
		case 2:
		case 3:
		case 4:
		case 5:
			campoResultado.innerHTML += " Entre semana";
			break;
		case 6:
		case 0:
			campoResultado.innerHTML = "Fin de semana";
			break;
		default:
			campoResultado.innerHTML = "Dia no valido";
			break;
	}
}