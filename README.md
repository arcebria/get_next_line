**Proyecto get_next_line**

El **proyecto get_next_line** es un reto en 42 que consiste en implementar una función en C que lea una línea de texto 
desde un archivo o desde la entrada estándar, devolviendo cada línea de forma sucesiva cuando se le invoque. 
El objetivo de este proyecto es aprender a trabajar con archivos, manejar el búfer de lectura y gestionar la memoria 
de manera eficiente.

**Lo que aprendí realizando el proyecto**

Durante este proyecto, adquirí conocimientos clave relacionados con:

- **Lectura de Archivos**

El proyecto me permitió entender en profundidad cómo funciona la **lectura de archivos** en C. Aprendí a usar la función 
read() para leer datos de un archivo, y a gestionar correctamente el búfer de lectura para manejar las líneas de 
texto de manera eficiente.

- **Manejo de Búferes**

Uno de los principales desafíos de este proyecto fue **manejar el búfer de lectura**. Implementé un sistema que almacena
los caracteres leídos y los procesa de forma incremental para poder devolver una línea completa en cada llamada a la 
función. Este enfoque me ayudó a comprender cómo interactúan los buffers con los sistemas de entrada/salida en C.

- **Gestión de Memoria**

Aprendí a **gestionar correctamente la memoria dinámica** para almacenar las líneas leídas. La función debe ser capaz de 
devolver una nueva línea cada vez que se llama, mientras se mantiene el control de la memoria sin causar fugas. 
La correcta utilización de malloc y free fue esencial para el éxito del proyecto.

- **Gestión de Archivos con Descriptores**

Este proyecto también me permitió trabajar con **descriptores de archivo**. Aprendí a utilizar los descriptores para 
interactuar con los archivos y cómo gestionar las llamadas a read() de manera eficaz, asegurando que se lea 
correctamente hasta el final del archivo o hasta el final de una línea.

- **Optimización y Rendimiento**

A lo largo del proyecto, me enfoqué en **optimizar el rendimiento** de la función para minimizar el uso de memoria y 
mejorarla eficiencia de la lectura de archivos. Aprendí a usar técnicas como la lectura incremental y el almacenamiento
dinámico de las líneas, lo que me permitió manejar archivos de tamaño variable de manera efectiva.

**El resultado final**
El resultado final fue una **función get_next_line** que es capaz de leer archivos de forma eficiente y devolver una línea
completa cada vez que se llama. El proyecto consolidó mi comprensión de la lectura de archivos, la gestión de búferes
y la memoria dinámica, y me proporcionó herramientas que puedo aplicar en futuros proyectos que impliquen la 
manipulación de archivos y entradas/salidas.
