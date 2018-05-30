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
public class AlumnoESO extends alumno {
    int curso;

    public AlumnoESO(String nombre, String apellido, int edad, char sexo) {
        super(nombre, apellido, edad, sexo, becado);
        this.curso = curso;
    }
    
    public int getCurso(){
        return curso;
    }
    
    public void setCurso(int curso){
        this.curso = curso;
    }
    
    public String toString(){
        return "AlumnoESO [nombre=" + nombre + ", apellido=" + apellido + " edad=" + edad + "sexo=" + sexo + " becado=" + becado + " curso=" + curso +"]"
    }
   
}
