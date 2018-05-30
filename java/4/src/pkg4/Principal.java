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
public class Principal {
    public static void main(String[] args){
        
        
        //Clases nieto
        Alumnofp  alufp1 = new Alumnofp("David", "Guzman", 22, 'H', true, "DAM");
        AlumnoEso alueso1 = new AlumnoESO("Jesus", "Maria", 16, 'H', false, 4);
        
        
        //Clase padre 
        Profesor profe1 = new Profesor("Txema", "Gonzalez", 40, 'H', "Tutor 1º DAM");
        Alumno alu1 = new Alumno("Diego", "Mompo", 19, 'H', false);
        Pas pas1 = new pas("Señor", "Matricula", 35, 'M', 7);
        
        //Clase abuelo
        Persona per1 = new Persona("Pepito", "Grillo", 29, 'H');
    }
    
}
