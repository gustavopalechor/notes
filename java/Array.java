/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;
package sistemas;

/**
 *
 * @author gpalechor
 */
public class Array {
    
    public static void main(String[] args){
        
        ArrayList<String> lista = new ArrayList<String>();
        Scanner teclado = new Scanner(System.in);
        
        for (int i = 0; i<6; i++){
            System.out.println("Introduzca un contacto en la posición: " + i);
            lista.add(teclado.netx());
        }
        
        
    }
    
}
