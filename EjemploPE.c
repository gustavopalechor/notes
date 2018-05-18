typedef struct 
{
	char nombre[30];
	long telefono; 
}Contacto;

void CrearContacto(Contacto *c, char n[30], long t){
	strcpy(c->nombre,n);
	c->telefono = t;
}

void EscribirContacto(Contacto c){
	printf("Nombre: %s telefono: %ld\n", c.nombre, c.telefono);
}

void CambiarTelefono(Contacto *c, long nt){
	c->telefono = nt;
	
}

int main()
{
	Contacto c1;

	CrearContacto(&c1, "Pepito", 1111);
	EscribirContacto(c1);
	CambiarTelefono(&c1, 1231234);
	return 0;
}