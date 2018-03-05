DROP DATABASE IF EXISTS ejercicio5;

CREATE DATABASE ejercicio5;

use ejercicio5;

CREATE TABLE Personas ( ID INT AUTO_INCREMENT, Nombre VARCHAR(20), Apellidos VARCHAR(30), FechaDeNacimiento DATE, PrecioPujado DECIMAL(10,2) UNSIGNED, Ciudad VARCHAR(20), PRIMARY KEY(ID));

CREATE TABLE ORDEN(ID INT AUTO_INCREMENT, NumeroOrden TINYINT, ID_Personas INT, PRIMARY KEY(ID), CONSTRAINT FK_Personas FOREIGN KEY (ID_Personas) REFERENCES Personas(ID) ON UPDATE CASCADE);

INSERT INTO Personas(Nombre, Apellidos, FechaDeNacimiento, PrecioPujado, Ciudad) VALUES('Gustavo', 'Palechor', '1997-07-06', 2000.00, 'Madrid');


INSERT INTO Personas(Nombre, Apellidos, FechaDeNacimiento, PrecioPujado, Ciudad) VALUES('Pepe', 'Palechor', '1996-07-06', 234.00, 'Madrid');


INSERT INTO Personas(Nombre, Apellidos, FechaDeNacimiento, PrecioPujado, Ciudad) VALUES('Ana', 'Arias', '1999-02-04', 950.00, 'Madrid');



INSERT INTO ORDEN(NumeroOrden, ID_Personas) VALUES (1, 1);

INSERT INTO ORDEN(NumeroOrden, ID_Personas) VALUES (2, 2);

INSERT INTO ORDEN(NumeroOrden, ID_Personas) VALUES (3, 3);



UPDATE Personas SET ID=10 WHERE ID=2;


