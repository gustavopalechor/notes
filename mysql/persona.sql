DROP DATABASE IF EXISTS ejercicio3;
CREATE DATABASE ejercicio3;
USE ejercicio3;

CREATE TABLE persona(nombre VARCHAR(20), apellido1 VARCHAR(20), apellido2 VARCHAR(20), edad TINYINT NOT NULL, FechaNacimiento DATE, PRIMARY KEY(nombre, apellido1, apellido2));
CREATE TABLE producto( ID TINYINT NOT NULL AUTO_INCREMENT, nombre VARCHAR(20) UNIQUE, descripcion TEXT, imagen VARCHAR(40), precio FLOAT(20), PRIMARY KEY(ID));
CREATE TABLE pedidos(nombre_persona VARCHAR(20), apellido1_persona VARCHAR(20), apellido2_persona  VARCHAR(20), ID_producto TINYINT NOT NULL AUTO_INCREMENT, cantidad TINYINT NOT NULL, FOREIGN KEY(nombre_persona, apellido1_persona, apellido2_persona) REFERENCES persona(nombre, apellido1, apellido2), FOREIGN KEY(ID_producto) REFERENCES producto(ID));

ALTER TABLE pedidos ADD ID INT(10) key first;

ALTER TABLE persona ADD COLUMN DNI CHAR(10) FIRST;



DROP TABLE persona; 

ALTER TABLE persona DROP PRIMARY KEY;


/* con el varchar nos obliga a introducir el numero expecifico de caracteres pero si introducimos menos tambien nos deja, con el char nos obliga a que sea
 el numero de caracteres expecificado y si introducimos menos no nos deja. Hay solo una primary key por tabla.*/
DESC persona;
Desc producto;
DESC pedidos;
