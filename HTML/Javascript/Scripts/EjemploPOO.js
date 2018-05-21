class Contacto
{
	// Creación del constructor
	constructor(n,t)
	{
		this.nombre = n;
		this.telefono = t;
	}

	CambiarNombre(nuevoV)
	{
		this.nombre = nuevoT;
	}

	Escribir()
	{
		var resultado;

		resultado = document.getElementById('Resultado');
		resultado.innerHTML = "Nombre: " + this.nombre + "<br>" + "Teléfono: " + this.telefono + "<br>";
	}

	CambiarTelefono(nuevoT)
	{
		this.telefono = nuevoT;
	}
//Objetos globales
	var c1;
	function CrearContacto() {
		c1 = new Contacto("Pepe", 1111);
		
		c1.Escribir();
	}

	function ModificarContacto()
	{
		var valorNombre,
			valorTelefono;

		valorNombre = document.getElementById('Nombre').value;
		valorTelefono = document.getElementById('Telefono').value;
		c1.CambiarNombre(valorNombre);
		c1.CambiarTelefono(valorTelefono);
		c1.Escribir();
	}
}