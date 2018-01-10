DROP DATABASE IF EXISTS ejercicio4;
CREATE DATABASE ejercicio4;
USE ejercicio4;

CREATE TABLE persona(nombre VARCHAR(20), apellido1 VARCHAR(20), apellido2 VARCHAR(20), edad TINYINT NOT NULL, FechaNacimiento DATE, PRIMARY KEY(nombre, apellido1, apellido2));
CREATE TABLE producto( ID TINYINT NOT NULL AUTO_INCREMENT, nombre VARCHAR(20), descripcion TEXT, imagen VARCHAR(40), precio FLOAT(20), PRIMARY KEY(ID));
CREATE TABLE pedidos(nombre_persona VARCHAR(20), apellido1_persona VARCHAR(20), apellido2_persona  VARCHAR(20), ID_producto TINYINT NOT NULL AUTO_INCREMENT, cantidad TINYINT, FOREIGN KEY(nombre_persona, apellido1_persona, apellido2_persona) REFERENCES persona(nombre, apellido1, apellido2), FOREIGN KEY(ID_producto) REFERENCES producto(ID));
