1 - OBTENER EL NOMBRE DEL CLIENTE CON MAYOR LIMITE DE CRÉDITO - SELECT NombreCliente,LimiteCredito FROM Clientes WHERE LimiteCredito=(SELECT MAX(LimiteCredito) FROM Clientes);

2 - OBTENER EL NOMBRE APELLIDO UNO Y CARGO DE LOS EMPLEADOS QUE NO TIENE CLIENTE - SELECT Empleados.Nombre, Empleados.Apellido1, Empleados.Puesto FROM  Empleados LEFT JOIN Clientes ON Empleados.CodigoEmpleado=Clientes.CodigoEmpleadoRepVentas WHERE CodigoEmpleadoRepVentas IS NULL;

2.1 - CON SUBCONSULTA - SELECT Empleados.CodigoEmpleado,Empleados.Nombre,Empleados.Apellido1,Empleados.Puesto FROM Empleados WHERE Empleados.CodigoEmpleado NOT IN(SELECT CodigoEmpleadoRepVentas FROM Clientes);
 
2.2 - OBTENER EL NOMBRE APELLIDO UNO Y CARGO DE LOS EMPLEADOS QUE SI TIENEN CLIENTES - SELECT DISTINCT Empleados.Nombre, Empleados.Apellido1, Empleados.Puesto FROM  Empleados LEFT JOIN Clientes ON Empleados.CodigoEmpleado=Clientes.CodigoEmpleadoRepVentas WHERE CodigoEmpleadoRepVentas IS NOT NULL;

3 - SACAR UN LISTADO CON EL NOMBRE DE CADA CLIENTE Y NOMBRE Y APELLIDO DE SU REPRESENTANTE DE VENTAS - SELECT DISTINCT Clientes.NombreCliente,Empleados.Nombre, Empleados.Apellido1 FROM  Empleados LEFT JOIN Clientes ON Empleados.CodigoEmpleado=Clientes.CodigoEmpleadoRepVentas WHERE CodigoEmpleadoRepVentas IS NOT NULL;


4 - MOSTRAR EL NOMBRE DE LOS CLIENTES QUE NO HAYAN REALIZADO PAGOS JUNTO CON EL NOMBRE DE SUS REPRESENTANTES DE VENTAS-

5 - LISTAR LAS VENTAS TOTALES DE LOS PRODUCTOS QUE HAYAN FACTURADO MÁS DE 3000 SE MOSTRARÁ EL NOMBRE UNIDADES VENDIDAS, TOTAL FACTURADO SIN IVA Y CON IVA (21%)-SELECT CodigoProducto,SUM(PrecioUnidad*Cantidad) AS TOTALFACTURADO,SUM(PrecioUnidad*Cantidad)*1.21 AS 'TOTAL FACTURADO CON IVA' FROM DetallePedidos Group BY CodigoProducto HAVING TOTALFACTURADO>3000;


6 - LISTAR LA DIRECCIÓN DE LAS OFICINAS QUE TENGAS CLIENTES EN FUENLABRADA - SELECT CONCAT(Oficinas.LineaDireccion1,' ',Oficinas.LineaDireccion2) FROM Clientes JOIN Empleados NATURAL JOIN Oficinas ON (Clientes.CodigoEmpleadoRepVentas=Empleados.CodigoEmpleado) WHERE Clientes.Ciudad='Fuenlabrada' ORDER BY Clientes.CodigoCliente;

/*Codigo y nombrecliente,codigo pedido,estado, CodigoProducto, Cantidad*/


7.- Sacar el cliente (Cod y Nombre) que hizo el pedido de mayor cuantía (Cuantía);SELECT Clientes.CodigoCliente, Clientes.NombreCliente, SUM(DetallePedidos.PrecioUnidad*DetallePedidos.Cantidad) FROM Clientes NATURAL JOIN DetallePedidos NATURAL JOIN Pedidos Group BY Clientes.CodigoCliente HAVING(SELECT MAX(SUM(PrecioUnidad*Cantidad))FROM DetallePedidos);


7.2 - SELECT Clientes.CodigoCliente, Clientes.NombreCliente, SUM(DetallePedidos.PrecioUnidad*DetallePedidos.Cantidad) AS Maximo FROM Clientes NATURAL JOIN DetallePedidos NATURAL JOIN Pedidos Group BY DetallePedidos.CodigoPedido HAVING Maximo = 73260;


8.- Sacar cuantos clientes tienen las ciudades que empiezan por M.-Select CodigoCliente, NombreCliente, Ciudad From Clientes WHERE Ciudad LIKE 'M%'.
8.2. - Select Ciudad, Count(*) From Clientes WHERE Ciudad LIKE 'M%' Group by Ciudad;


9.- Sacar el codigo de empleados y el numeros de clientes al que atiende cada representantes de ventas.-SELECT Clientes.CodigoEmpleadoRepVentas,COUNT(*) FROM Clientes GROUP BY Clientes.CodigoEmpleadoRepVentas


10.- Sacar el numero de clientes que no tiene asignado representante de ventas.-SELECT COUNT(*) FROM Clientes WHERE Clientes.CodigoEmpleadoRepVentas IS NULL;


11.- Sacar cual fue el primer y ultimo pago que hizo un pago. - SELECT * FROM Pagos WHERE (FechaPago = (Select MIN(FechaPago) FROM Pagos WHERE CodigoCliente=3) OR FechaPago=(Select MAX(FechaPago) FROM Pagos WHERE CodigoCliente = 3));



12. Sacar el codigo del cliente que hicieron pagos en 2008 - SELECT DISTINCT CodigoCliente FROM Pagos WHERE YEAR(FechaPago) = 2008;


13. Sacar el numero de pedidos, codigo cliente fecha requerida fecha de entrega de  los pedidos que no 
han sido entregados a tiempo. - SELECT CodigoPedido,CodigoCliente, FechaEsperada,FechaEntrega FROM Pedidos WHERE FechaEntrega > FechaEsperada;



14.-Sacar cuantos productos en cada linea de pedidos. - SELECT NumeroLinea, COUNT(*) FROM DetallePedidos GROUP BY NumeroLinea;


15. Sacar un listado de los 20 codigos de productos más pedidos ordenado por cantidad pedido; - SELECT CodigoProducto, SUM(Cantidad) FROM DetallePedidos GROUP BY CodigoProducto ORDER BY SUM(Cantidad) DESC LIMIT 20;


16. Sacar el numero de pedidos copdigo cliente fecha requerida fecha de entrega de los pedidos cuya fecha de entrega han sido al menos 2 dias antes de la fecha requerída; (Date)


17.Sacar la facturacion que ha tenido la empresa en toda la historia indicando la base imponible , indicando el IVA, y el total facturado.


18. Sacar la misma informacion que la pregunta anterior pero agrupada por codigo de producto y filtrada por los codigos que empiezen por FR.


19 - Sacar el listado de jefes y de empleados a su cargo ordenados por el número de empleados subordinados.


20 - Obtener el nombre de los clientes a los que no se les ha entregado a tiempo un pedido


21 - Sacar el importe medio de los pedidos


22 - El pedido más caro del empleado que más clientes tiene


