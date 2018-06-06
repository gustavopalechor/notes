
public class Autobuses extends Vehiculos {

	
	
	public int numero_plazas;
	public String compañia;
	
	public Autobuses(int numero_plazas, String compañia, int matricula, String modelo, String marca) {
		super(matricula, modelo, marca);
		this.compañia = compañia;
		this.numero_plazas = numero_plazas;		
		
		// TODO Auto-generated constructor stub
	}
	
	//Getters && Setters
	public int getNumero_plazas() {
		return numero_plazas;
	}

	public void setNumero_plazas(int numero_plazas) {
		this.numero_plazas = numero_plazas;
	}

	public String getCompañia() {
		return compañia;
	}

	//Método toString para imprimir objetos Autobuses
	public void setCompañia(String compañia) {
		this.compañia = compañia;
	}

	@Override
	public String toString() {
		return "Autobuses [numero_plazas=" + numero_plazas + ", compañia=" + compañia + ", matricula=" + matricula
				+ ", modelo=" + modelo + ", marca=" + marca + "]";
	}
	
	
	
	
}
