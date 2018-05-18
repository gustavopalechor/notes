function EscribirNumeros() {
	var campoResultado,
		numero,
		contador;

	campoResultado = document.getElementById('Resultado');
	
	numero = parseInt(document.getElementById('Numero').value); 
	//con while
	contador = 1;
	while (contador<=numero){
		campoResultado.innerHTML = " " + contador++;
	}
	//con do while
	contador = 1;
	do
	{
		campoResultado.innerHTML += " " + contador++;
	}while (contador<=numero)
}