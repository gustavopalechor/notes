function suma(){
	var miDato1;
	var miDato2;
	var miResultado;
	var valor;
	miDato1 = getElementById('Dato1');
	miDato2 = getElementById('Dato2');
	miResultado = getElementById('Resultado');
	miResultado = miDato1.value + miDato2.value;
	miResultadin.innerHTML += "El resultado es: " + miResultado;
}