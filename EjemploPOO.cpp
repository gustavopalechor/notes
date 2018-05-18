class Contacto
{	//Atributos de contacto
	public char nombre[30];
	public long telefono;

	//Métodos Contacto
	public Contacto(char n[30], long t){
	strcpy(this.nombre,n);
	this.telefono = t;
}

	void Escribir(){
	printf("Nombre: %s telefono: %ld\n", this.nombre, this.telefono);
}

	void CambiarTelefono(long nt){
	this.telefono = nt;
	
}
}
main()
{
	Contacto c1;

	c1 = new Contacto("Pepe", 1111);
	c1.Escribir();
	c1.CambiarTelefono(22222);	

	
};