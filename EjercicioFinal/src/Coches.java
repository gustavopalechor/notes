
public class Coches extends Vehiculos {

	public String dni;
	public boolean electrico;

	// Método constructor
	public Coches(int matricula, String modelo, String marca, String dni, boolean electrico) {
		super(matricula, modelo, marca);

		this.dni = dni;
		this.electrico = electrico;

	}

	// Getters & Setters
	public String getDni() {
		return dni;
	}

	public void setDni(String dni) {
		this.dni = dni;
	}

	public boolean isElectrico() {
		return electrico;
	}

	public void setElectrico(boolean electrico) {
		this.electrico = electrico;
	}

	// Método toString para mostrar coche
	@Override
	public String toString() {
		return "coches [dni=" + dni + ", electrico=" + electrico + ", matricula=" + matricula + ", modelo=" + modelo
				+ ", marca=" + marca + "]";
	}

}
