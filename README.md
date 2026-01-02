#Sistema POS de Gestión de Ventas y Fidelización

Este es un proyecto desarrollado como parte de mi formación en la **Licenciatura en Sistemas**, enfocado en la aplicación de **Programación Orientada a Objetos (POO)** y diseño de interfaces de usuario profesionales con **C++** y **Qt Framework**.

##Funcionalidades Principales
- **Gestión de Ventas:** Interfaz dinámica para agregar productos de un catálogo (construcción) a un carrito de compras virtual.
- **Cálculo de Beneficios:** Lógica de negocio que aplica descuentos escalonados (1% cada 100 unidades) con un tope máximo del 50%.
- **Feedback Visual (UX):** Barra de progreso que indica cuánto le falta al cliente para alcanzar el siguiente nivel de descuento.
- **Interfaz Moderna:** Diseño personalizado en **Modo Oscuro (Dark Mode)** utilizando hojas de estilo QSS.

##Tecnologías Utilizadas
- **Lenguaje:** C++ 17
- **Framework:** Qt 6 (Widgets, Signals & Slots)
- **Control de Versiones:** Git & GitHub
- **Estilos:** Qt Style Sheets (QSS)

##Estructura del Proyecto
- `venta.h/cpp`: Clase encargada de la lógica de transacciones y cálculo de totales.
- `cliente.h/cpp`: Entidad que gestiona la información y beneficios del usuario.
- `producto.h`: Definición de la estructura de los elementos del catálogo.
- `mainwindow.ui`: Diseño visual de la terminal de ventas.

---
*Proyecto desarrollado por Joaquín Ragone*
