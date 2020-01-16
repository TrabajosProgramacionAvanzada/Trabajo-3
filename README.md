# Trabajo 3
Laboratorio tres de Programaci�n Avanzada

UNIVERSIDAD DE SANTIAGO DE CHILE
FACULTAD DE CIENCIAS
DEPARTAMENTO DE MATEM�TICA Y CIENCIA DE LA COMPUTACI�N
LICENCIATURA EN CIENCIA DE LA COMPUTACI�N
Profesor(es): Nicolas Th�riault
Segundo Semestre de 2019
Departamento de Matem�tica y Ciencia de la Computaci�n { USACH { 2019
Programaci�n Avanzada { Laboratorio 3}}}
# 1. Objetivos

El objetivo de este laboratorio es de analizar y aplicar un algoritmo de programaci�n din�mica.
El laboratorio se trabajar� en grupos de 2 o 3 alumnos, entregando un resultado (informe y
programas) por grupo.

# 2. Problema

Un edificio cil�ndrico consiste de 97 niveles, donde cada niveles consecutivos est�n conectados
por 12 escaleras, correspondientes a las 12 horas del reloj. Los costos asociados a cada escaleras
est�n dados en M, una matriz 96x12 (archivo M.tex). En cada nivel, se puede seguir en la misma
posici�n, o cambiar a una nueva posici�n, con costo igual al cambio de \horas". Ejemplo: un
cambio correspondiente a dos horas de diferencias (en ambas direcciones) tiene costo 2 unidades.
Encontrar el camino m�s corto en el edificio desde el piso 1 hasta el piso 97, dado por la
matriz M.
Describir un algoritmo eficiente para encontrar el camino m�s barato para ir desde la planta
baja hasta el techo en una torre de n niveles con k escaleras, y analizar su complejidad en
funci�n de k y n.

# 3. Indicaciones

El problema a resolver en este laboratorio es abierto. Se podr�n dar indicaciones y pistas,
pero deber�n encontrar la soluci�n por trabajo propio (argumentando que su soluci�n es correcta
y obteniendo su complejidad en el informe).
Algunas indicaciones que les podr�an ayudar:
Para obtener la complejidad optima, se requiere utilizar una idea del tipo programaci�n
din�mica".

> �Si la torre tuviese menos pisos, c�mo se obtendr�a el resultado?

# 4. Programaci�n

La programaci�n debe ser en C (no en C++), utilizando a lo m�s las librer�as stdio.h, stdlib.h
y math.h.
El formato del archivo M.tex es el siguiente:
Cada linea contiene 12 valores, separados por un espacio (con un espacio despu�s del �ltimo
valor)
La primera posici�n corresponde a 1h00, aumentando hasta 12h00.
La primera linea corresponde a escaleras desde el piso 1 hasta el piso 2, la segunda linea
desde el piso 2 hasta el piso 3, etc.

# 5. Se solicita

1. Desarrollar un algoritmo para encontrar el camino m�s �ptimo.

2. El usuario debe entrar el nombre del archivo correspondiente a la torre.

3. Analizar la complejidad del algoritmo desarrollado.

4. Demostrar que el algoritmo desarrollado resuelve correctamente el problema.

5. Programar el algoritmo en lenguaje C.

6. Entregar un informe (archivo pdf), detallando el an�lisis te�rico del algoritmo desarrollado,
y los resultados de programaci�n obtenidos.

# 6. Evaluaci�n

Observaci�n: Para este laboratorio, la eficiencia de la soluci�n encontrada afectar� la nota:

O(kn) operaciones: nota m�xima 7.

Complejidades superiores: nota m�xima 4.

Adem�s, si el programa no compila correctamente, se restar�n 2 puntos a la nota final.
Luego de eso, la nota del laboratorio se calcular� seg�n la ponderaci�n siguiente:

	An�lisis [50 %]:
	La demostraci�n de validez y el an�lisis de complejidad son correctos.

	Informe [20 %]:
	El informe detalla el an�lisis te�rico, los algoritmos desarrollados, las estructuras de datos
	utilizadas, y los resultados de programaci�n obtenidos.

	Implementaci�n [30 %]
	El programa est� escrito de forma que puede ser le�ddo y/o re-utilizado f�cilmente por otros
	programadores: la redacci�n es limpia (con espacios y divisiones claras) y bien documentada,
	las sub-funciones y las variables tienen nombres naturales (que indican a que sirven) o
	acompa~nadas de comentarios aclarando a que sirven.
