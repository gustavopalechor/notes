/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg4;

/**
 *
 * @author gpalechor
 */
public class Alumnofp extends alumno{
    public String ciclo;
    public Alumnofp(String nombre, String apellido, int edad, char sexo) {
        super(nombre, apellido, edad, sexo, becado);
        this.ciclo = ciclo;
    }
    public String getCiclo(){
        return ciclo;
    }
    
    public void setCiclo(String ){
        
    }
    
    
}
