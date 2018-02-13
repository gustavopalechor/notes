DROP DATABASE IF EXISTS examen;
CREATE DATABASE examen;
USE examen;
CREATE TABLE ZOO(
	Nombre VARCHAR(22),
	ciudad varchar(20), 
	pais varchar(20), 
	tamaño enum('Categoria A','Categoria B'), 
	presupuesto FLOAT UNSIGNED, 
	PRIMARY KEY(Nombre)
	);

CREATE TABLE ESPECIE (
	Nomcientifico VARCHAR(20), 
	Nomvulgar VARCHAR(20) NOT NULL, 
	familia VARCHAR(20), 
	peligro VARCHAR(20), 
	PRIMARY KEY(Nomcientifico)
	);

CREATE TABLE ANIMAL (
	ID INT UNSIGNED, 
	nomzoo VARCHAR(22), 
	nomespecie VARCHAR(20), 
	sexo enum ('M','F'), 
	añonacimiento YEAR, 
	pais VARCHAR(20), 
	continente VARCHAR(20), 
	CONSTRAINT FK_ZOO FOREIGN KEY(nomzoo) REFERENCES ZOO(Nombre),
	CONSTRAINT FK_ESPECIE FOREIGN KEY(nomespecie) REFERENCES ESPECIE(Nomcientifico),
	PRIMARY KEY (ID)
	);

/*Apartado B*/
ALTER TABLE ANIMAL MODIFY ID INT AUTO_INCREMENT;

ALTER TABLE ANIMAL DROP FOREIGN KEY FK_ZOO;

ALTER TABLE ANIMAL ADD CONSTRAINT FK_ZOO FOREIGN KEY(nomzoo) REFERENCES ZOO(Nombre) ON DELETE SET NULL ON UPDATE CASCADE;


/* TRIGGER SYNTAX*/ 
CREATE TRIGGER 

/*Apartado C*/

INSERT INTO ZOO VALUES ('Zoo Madrid','Madrid','España','Categoria A',608.42);

INSERT INTO ESPECIE VALUES ('Phantera Tigris','Tigre','Felinos','Alto');

INSERT INTO ANIMAL (nomzoo,nomespecie,sexo,añonacimiento,pais,continente) 
	    VALUES ('Zoo Madrid','Phantera Tigris','M',2013,'India','Asia');

UPDATE ZOO SET Nombre='Zoo Madrid - Vodafone' WHERE Nombre= 'Zoo Madrid';


	

