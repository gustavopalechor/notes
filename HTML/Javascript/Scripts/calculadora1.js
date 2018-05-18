function obtenerOperando(idOperando)
{
	var miOperando;
	miOperando = document.getElementById('idOperando')
	return parseInt(miOperando.value)

}

function RealizarOperacion(TipoOperancion)
{
	//1. Obtener valor primer operando
	//2. Obtener valor segundo operando
	//3. Realizar la operacion con los operandos
	//	y segun el valor de tipoOperacion
	//4. Guardar resultado
	var valor1,
		valor2,
		valor;

	valor1 = obtenerOperando('Operando1');
	valor2 = obtenerOperando('Operando2');
	if (tipoOperacion == '+') {
		valor = valor1 + valor2;
	}
	else if (tipoOperacion =='-')
		valor = valor1 - valor2;
	else if (tipoOperacion =='*')
		valor = valor1 * valor2;
	else if (tipoOperacion =='/')
		valor = valor1 / valor2;
	else 
		valor = 0;
	document.getElementById('Resultado').innerHTML = valor;


	Valor = parseInt(miOperando1.value);
}