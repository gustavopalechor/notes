function ObtenerOp1(){
	var miOperando1,
		valorOperando1;

	miOperando1 = document.getElementById('Operando1');
	ValorOperando1 = parseInt(miOperando1.value);
	return valorOp1;
}
function ObtenerOp2(){
	var miOperando2,
		ValorOperando2;

	miOperando2 = document.getElementById('Operando2');
	ValorOperando2 = parseInt(miOperando2.value);
	return valorOperando2;
}

function sumar() {
	var valorOperando1,
		valorOperando2,
		miResultado,
		valorSuma;

	miResultado = document.getElementById('Resultado');
	valorOperando1 = ObtenerOp1();
	valorOperando2 = ObtenerOp2();
	
	valorSuma = valorOperando1 + valorOperando2;
	miResultado.innerHTML = valorSuma;
}