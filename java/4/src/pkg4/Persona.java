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
public class Persona {
   
protected String nombre;

protected String apellidos;

protected int edad;

protected char sexo;


//Metodo contronstructor

public Persona(String nombre, String apellido, int edad, char sexo){
    this.nombre = nombre;
    this.apellidos = apellido;
    this.edad = edad;
    this.sexo = sexo;
}

    // getters and setters

   protected String getNombre(){
       return nombre;
   }
   
   protected String getApellido(){
       return apellidos;
   }

   protected void setEdad(int edad){
       return edad;
       
   }
   
   protected char getSexo(){
       return sexo;
   }
           



}
