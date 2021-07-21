# Sistema PIMP - C++
Sistema de una empresa de calzado PIMP en lenguaje C++.  Proyecto final del **tercer semestre** de estudios de Ingeniería Informática, presentado el **13/12/18**.
## Descripción
Se hace el registro de todo producto que es comercializado en la tienda con sus características respectivas (código de referencia de almacén, marca, nombre, género, stock, categoría, talla, color y precio) así como también del proveedor que lo hace llegar (considerando para este su razón social, RUC, teléfono y dirección). Se ingresan los datos de los empleados (se considera DNI, nombre completo, edad, teléfono y fecha de contrato). Se realiza una comprobación de stocks para revisar qué productos deben pedirse urgentemente. Se realiza la compra de mercadería a los proveedores y cada producto registrado en la compra se almacena en una estructura adicional llamada detalle. Se realizan las entradas y salidas de mercadería y el detalle de las mismas es almacenado en una lista kardex.
<div align="center">
<img src="media/S1-menu-principal.png">
<p><strong>Imagen:</strong> Menú principal.</p>
</div>

## Uso
1. **Mantenimiento**: Lista la **Marca**, **Categoría**, **Color**, **Producto**, **Proveedor** y **Trabajador**, en cada una de estas opciones puedes realizar los siguientes procesos:  Insertar, Dar de baja, Modificar, Listar y Salir, esta última te regresa al menú de mantenimiento; también lista una opción de Volver al menú principal.
<div align="center">
<img src="media/S2-mantenimiento-insertar.png">
<p><strong>Imagen:</strong> Insertar.</p>
</div>
<div align="center">
<img src="media/S3-mantenimiento-dardebaja.png">
<p><strong>Imagen:</strong> Dar de baja.</p>
</div>
<div align="center">
<img src="media/S4-mantenimiento-modificar.png">
<p><strong>Imagen:</strong> Modificar.</p>
</div>
<div align="center">
<img src="media/S5-mantenimiento-listar.png">
<p><strong>Imagen:</strong> Listar.</p>
</div>

2. **Procesos**
	- **Pedidos**: Listado de los productos registrados, indicando que producto es necesario abastecer.
	<div align="center">
	<img src="media/S6-procesos-pedido.png">
	<p><strong>Imagen:</strong> Pedidos.</p>
	</div>
	
	- **Compras**
		- **Nueva Factura**: Registrar una compra de productos a un proveedor.
		<div align="center">
		<img src="media/S7-procesos-compras-nuevafactura.png">
		<p><strong>Imagen:</strong> Opción nueva factura.</p>
		</div>
		
		- **Modificar estado de factura**: Modifica el estado a Pendiente (aún no ha sido pagada), Cancelado (ya fue pagada) y Anulado (ya no se requiere el producto).
		<div align="center">
		<img src="media/S8-procesos-compras-modificarestadodefactura.png">
		<p><strong>Imagen:</strong> Opción modificar estado de factura.</p>
		</div>
		
		- **Mostrar facturas**: Muestra el detalle de todas las facturas registradas.
		<div align="center">
		<img src="media/S9-procesos-compras-mostrarfacturas.png">
		<p><strong>Imagen:</strong> Opción mostrar facturas.</p>
		</div>
		
		- **Volver**: Regresa al menú de Compras.
	- **Almacén**
		- **Nueva entrada**: Registra una entrada de productos según se haya comprado y generado una factura.
		<div align="center">
		<img src="media/S10-procesos-almacen-nuevaentrada.png">
		<p><strong>Imagen:</strong> Opción nueva entrada.</p>
		</div>
		
		- **Nueva salida**: Registra una salida de productos.
		<div align="center">
		<img src="media/S11-procesos-almacen-nuevasalida.png">
		<p><strong>Imagen:</strong> Opción nueva salida.</p>
		</div>
		
		- **Mostrar Kardex**: Lista las fechas de entrada y salida de productos.
		<div align="center">
		<img src="media/S12-procesos-almacen-mostrarkardex.png">
		<p><strong>Imagen:</strong> Opción mostrar kardex.</p>
		</div>
		
		- **Volver**: Regresa al menú de Almacén.
	- **Volver al menú principal**: Regresa al menú principal.
3. **Reportes**: 
	- **Entradas en un rango de fechas**: Lista las entradas registradas entre una fecha y otra.
	<div align="center">
	<img src="media/S13-reportes-uno.png">
	<p><strong>Imagen:</strong> Reporte uno.</p>
	</div>
	
	- **Salidas en un rango de fechas**: Lista las salidas registradas entre una fecha y otra.
	<div align="center">
	<img src="media/S14-reportes-dos.png">
	<p><strong>Imagen:</strong> Reporte dos.</p>
	</div>
	
	- **Factura que registra el mayor total**: Muestra la(s) factura(s) que tengan el monto mayor.
	<div align="center">
	<img src="media/S15-reportes-tres.png">
	<p><strong>Imagen:</strong> Reporte tres.</p>
	</div>
	
	- **Ordenar Marca, Categoría y Color**: Lista las Marcas, Categoría y Color ordenadas ascendentemente según su descripción.
	<div align="center">
	<img src="media/S16-reportes-cuatro.png">
	<p><strong>Imagen:</strong> Reporte cuatro.</p>
	</div>
	
	- **Ordenar kardex por fecha**: Lista el Kardex ordenándolo según su fecha.
	<div align="center">
	<img src="media/S17-reportes-cinco.png">
	<p><strong>Imagen:</strong> Reporte cinco.</p>
	</div>
	
	- **Salir**: Sale del menú de reportes, retornando al menú principal.
4. **Acerca de**: Muestra una descripción del sistema y los autores de este.
5. **Salir**: Finaliza y cierra el sistema.

### Nota
- Para insertar un producto primero debes insertar por lo menos una Marca, una Categoría y un Color.
- Al insertar un producto, la talla esta entre 35 y 47, el precio entre 60 y 1600, el stock mínimo entre 1 y MAXSTOCK (1000000).
- Al insertar un trabajador, la edad esta entre 18 y 64, su fecha de contrato entre los años 1900 y 2020.
- Para realizar una comprar (**Nueva factura**), es necesario registrar un proveedor y un producto previamente.
## Autores
- Chira C. Kevin
- Garcia L. Alejandra
- Ramirez B. Rafael
- [Rojas V. Aarón](https://github.com/Aaron-Shrike)
- Torres M. Carlos

