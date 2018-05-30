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

public class alumno extends Persona{
    protected boolean becado;

    public alumno(String nombre, String apellido, int edad, char sexo) {
        super(nombre, apellido, edad, sexo);
        this.becado = becado;
    }
    protected boolean isBecado(){
        return becado;
    }
    protected void setBecado(boolean becado){
        this.becado = becado;
    }
    
    @Override
    public String toString(){
        return "alumno [nombre=" + nombre + ", apellidos=" + apellidos + ", edad=" + edad +", becado=" + becado+ "]";
    }
}
