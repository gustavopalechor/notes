
public class Motos extends Vehiculos{
	public int cilindrada;

	//Método constructor
	public Motos(int matricula, String modelo, String marca, int cilindrada) {
		super(matricula, modelo, marca);
		this.cilindrada = cilindrada;
		// TODO Auto-generated constructor stub
	}
	
	//Getters & Setter
	public int getCilindrada() {
		return cilindrada;
	}

	public void setCilindrada(int cilindrada) {
		this.cilindrada = cilindrada;
	}

	//Método toString para imprimir objetos Motos
	@Override
	public String toString() {
		return "Motos [cilindrada=" + cilindrada + ", matricula=" + matricula + ", modelo=" + modelo + ", marca="
				+ marca + "]";
	}
	
	
	
	
	
	
	
	
}
