class Contacto
{
	constructor(n,t,e){
		this.nombre = n;
		this.telefono = t;
		this.edad = e;
	}

	Escribir(elementoHTML){
		var resultado;
		resultado = document.getElementById(elementoHTML);
		resultado.innerHTML +=
		"nombre: " + this.nombre + "<br>" + 
		"telefono: " + this.telefono + "<br>" +
		"edad: " + this.edad + "<br>";
	}

	EscribirNombre(elementoHTML){
		var resultado;
		resultado = document.getElementById(elementoHTML);
		resultado.innerHTML=
		"nombre: " + this.nombre + "<br>";
	}

}


class listaContacto{

	constructor(){

		this.nContactos = 0;
		this.lista = new Array(5);

	}

	IntroducirContacto(nombre,telefono,edad){
		var contacto = new Contacto;
		miLista.[nContactos] = contacto;
		nContacto++;
	}

	MostrarContactos(){
		var resultado;
		resultado = document.getElementById('Resultado');
		resultado.innerHTML = "";
		for(var i = 0; i<=nContactos; i++){
			this.lista[i].EscribirNombre(elementoHTML);
		}
	}


}
//objeto de la clase
var miLista;
miLista = new listaContacto;

function IngresarContacto() {
	var miNombre,
		miTelefono,
		miEdad;

	miNombre = document.getElementById('nombre').value;
	miTelefono = document.getElementById('telefono').value;
	miEdad = document.getElementById('edad').value;

	miLista.IntroducirContacto(miNombre, miTelefono, miEdad);
	miLista.MostrarContactos('Resultado');
}

function MostrarListaContactos
