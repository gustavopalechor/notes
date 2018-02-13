DROP DATABASE IF EXISTS ejercicio2;
CREATE DATABASE ejercicio2;
USE ejercicio2;

CREATE TABLE Actores(codigo INT NOT NULL AUTO_INCREMENT, nombre VARCHAR(20), fecha DATE, 		     nacionalidad VARCHAR(20), PRIMARY KEY(codigo));

CREATE TABLE Personajes(codigo INT NOT NULL AUTO_INCREMENT, nombre VARCHAR(20), raza VARCHAR(10), grado TINYINT(3), codigo_ACTORES INT NOT NULL , CodigoSuperior_PERSONAJES INT NOT NULL, 
	PRIMARY KEY(codigo, codigo_ACTORES, CodigoSuperior_PERSONAJES), 
	FOREIGN KEY(codigo_ACTORES) REFERENCES Actores(codigo), 
	FOREIGN KEY(CodigoSuperior_PERSONAJES) REFERENCES Personajes(codigo));

CREATE TABLE Planetas(codigo INT NOT NULL AUTO_INCREMENT, galaxia VARCHAR(20), nombre VARCHAR(20),
	PRIMARY KEY(codigo));

CREATE TABLE Peliculas(codigo INT NOT NULL AUTO_INCREMENT, titulo VARCHAR(40), director VARCHAR(20),
	AÑO TINYINT(3), 
	PRIMARY KEY(codigo)); 

CREATE TABLE PersonajesPeliculas(codigo_PERSONAJES INT NOT NULL, codigo_PELICULAS INT NOT NULL, 	PRIMARY KEY(codigo_PERSONAJES, codigo_PELICULAS),
	FOREIGN KEY(codigo_PERSONAJES) REFERENCES Personajes(codigo),
	FOREIGN KEY(codigo_PELICULAS) REFERENCES Peliculas(codigo));

CREATE TABLE Naves(codigo INT NOT NULL AUTO_INCREMENT, nºtripulantes INT, nombre VARCHAR(20), 	PRIMARY KEY(codigo));

CREATE TABLE Visitas(codigo_NAVES INT NOT NULL, codigo_PLANETAS INT NOT NULL, codigo_PELICULAS INT NOT NULL,
	PRIMARY KEY(codigo_NAVES, codigo_PLANETAS, codigo_PELICULAS),
	FOREIGN KEY(codigo_NAVES) REFERENCES Naves(codigo),
	FOREIGN KEY(codigo_PLANETAS) REFERENCES Planetas(codigo),
	FOREIGN KEY(codigo_PELICULAS) REFERENCES Peliculas(codigo));
INSERT INTO Actores(nombre, fecha, nacionalidad) VALUES('pepito', '1999-12-12', 'japan'); 
INSERT INTO Personajes(nombre, raza, grado, codigo_ACTORES, CodigoSuperior_PERSONAJES) VALUES ('Parrita', 'orco', 1,  0
