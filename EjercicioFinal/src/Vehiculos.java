
public class Vehiculos {

	protected int matricula;
	protected String modelo;
	protected String marca;
	
	
	//Método constructor
	public Vehiculos(int matricula, String modelo, String marca) {
		this.matricula = matricula;
		this.modelo = modelo;
		this.marca = marca;
	
	
	}
	
	//Getters & Setters

	protected int getMatricula() {
		return matricula;
	}


	protected void setMatricula(int matricula) {
		this.matricula = matricula;
	}


	protected String getModelo() {
		return modelo;
	}


	protected void setModelo(String modelo) {
		this.modelo = modelo;
	}


	protected String getMarca() {
		return marca;
	}


	protected void setMarca(String marca) {
		this.marca = marca;
	}

	@Override
	public String toString() {
		return "vehiculos [matricula=" + matricula + ", modelo=" + modelo + ", marca=" + marca + "]";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
