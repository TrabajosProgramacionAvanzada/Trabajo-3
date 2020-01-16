# Trabajo 3
Laboratorio tres de Programación Avanzada

UNIVERSIDAD DE SANTIAGO DE CHILE
FACULTAD DE CIENCIAS
DEPARTAMENTO DE MATEMÁTICA Y CIENCIA DE LA COMPUTACIÓN
LICENCIATURA EN CIENCIA DE LA COMPUTACIÓN
Profesor(es): Nicolas Thériault
Segundo Semestre de 2019
Departamento de Matemática y Ciencia de la Computación { USACH { 2019
Programaciín Avanzada { Laboratorio 3}}}
# 1. Objetivos

El objetivo de este laboratorio es de analizar y aplicar un algoritmo de programación dinámica.
El laboratorio se trabajará en grupos de 2 o 3 alumnos, entregando un resultado (informe y
programas) por grupo.

# 2. Problema

Un edificio cilíndrico consiste de 97 niveles, donde cada niveles consecutivos están conectados
por 12 escaleras, correspondientes a las 12 horas del reloj. Los costos asociados a cada escaleras
están dados en M, una matriz 96x12 (archivo M.tex). En cada nivel, se puede seguir en la misma
posición, o cambiar a una nueva posición, con costo igual al cambio de \horas". Ejemplo: un
cambio correspondiente a dos horas de diferencias (en ambas direcciones) tiene costo 2 unidades.
Encontrar el camino más corto en el edificio desde el piso 1 hasta el piso 97, dado por la
matriz M.
Describir un algoritmo eficiente para encontrar el camino más barato para ir desde la planta
baja hasta el techo en una torre de n niveles con k escaleras, y analizar su complejidad en
función de k y n.

# 3. Indicaciones

El problema a resolver en este laboratorio es abierto. Se podrán dar indicaciones y pistas,
pero deberán encontrar la solución por trabajo propio (argumentando que su solución es correcta
y obteniendo su complejidad en el informe).
Algunas indicaciones que les podrían ayudar:
Para obtener la complejidad optima, se requiere utilizar una idea del tipo programación
dinámica".

> ¿Si la torre tuviese menos pisos, cómo se obtendría el resultado?

# 4. Programación

La programación debe ser en C (no en C++), utilizando a lo más las librerías stdio.h, stdlib.h
y math.h.
El formato del archivo M.tex es el siguiente:
Cada linea contiene 12 valores, separados por un espacio (con un espacio después del último
valor)
La primera posición corresponde a 1h00, aumentando hasta 12h00.
La primera linea corresponde a escaleras desde el piso 1 hasta el piso 2, la segunda linea
desde el piso 2 hasta el piso 3, etc.

# 5. Se solicita

1. Desarrollar un algoritmo para encontrar el camino más óptimo.

2. El usuario debe entrar el nombre del archivo correspondiente a la torre.

3. Analizar la complejidad del algoritmo desarrollado.

4. Demostrar que el algoritmo desarrollado resuelve correctamente el problema.

5. Programar el algoritmo en lenguaje C.

6. Entregar un informe (archivo pdf), detallando el análisis teórico del algoritmo desarrollado,
y los resultados de programación obtenidos.

# 6. Evaluación

Observación: Para este laboratorio, la eficiencia de la solución encontrada afectará la nota:

O(kn) operaciones: nota máxima 7.

Complejidades superiores: nota máxima 4.

Además, si el programa no compila correctamente, se restarán 2 puntos a la nota final.
Luego de eso, la nota del laboratorio se calculará según la ponderación siguiente:

	Análisis [50 %]:
	La demostración de validez y el análisis de complejidad son correctos.

	Informe [20 %]:
	El informe detalla el análisis teórico, los algoritmos desarrollados, las estructuras de datos
	utilizadas, y los resultados de programación obtenidos.

	Implementación [30 %]
	El programa está escrito de forma que puede ser leíddo y/o re-utilizado fácilmente por otros
	programadores: la redacción es limpia (con espacios y divisiones claras) y bien documentada,
	las sub-funciones y las variables tienen nombres naturales (que indican a que sirven) o
	acompa~nadas de comentarios aclarando a que sirven.
