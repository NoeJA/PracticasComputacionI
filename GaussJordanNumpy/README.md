## PRÁCTICA 4: COMPARANDO

### Noé Jaimes Avila
#### Licenciatura en Tecnología

### Procedimiento

* Implementar el método de Gauss-Jordan haciendo uso de las herramientas de NumPy.
* Hacer una comparativa de los tiempos de ejecución de tu implementación del método de Gauss-Jordan en C++ y las dos implementaciones en Python (considerando la que vas a   realizar con NumPy). En esta comparativa tendrás que escribir todas las diferencias que consideres fundamentales entre las diferentes implementaciones.
* Las matrices realizadas se generaron de manera aleatoria y se tomó el tiempo de duración de la aplicación de la eliminación de Gauss-Jordan, con 4, 20, 50 y 100 ecuaciones.



### Resultados

* Tabla de Tiempo de cálculo con los tres métodos por número de ecuanciones. *

| Ecuaciones | C++       | Python L  | Numpy      |
|:-----------| :-------: | :-------: | ---------: |
| 4          | 0.006 ms  |	0.99 ms	 | 2.65 ms    |
| 20         | 0.315 ms  |	20.34	ms | 101.00 ms  |
| 50         | 5.340 ms  |	89.01 ms |	802.62 ms |
| 100        | 39.010 ms |	438.07 ms|	5759.52 ms|

Podemos ver de forma más gráfica las variaciones entre resultados.
* Adjunto el link de la gráfica, ya que por mas intentos que hago, no me deja adjuntar la imagen.

https://dochub.com/eon-liva/gDqeQZ6Vzg8jbj9w0jLO4Y/rendimiento-png?dt=QyxXsJkzfSQxQAxkA44C


Podemos notar que en el caso de C++ los resultados son muy veloces, comparados con las listas de listad de Python, y con numpy, ya que C++ posee la característica de tipado estático, que hace mas sencillo el procesar los datos al saber que ya están predefinidos los tipos de estos, además de que los arreglos también son estáticos, y cómo no: la ventaja de ser un lenguaje compilado, que lo hace mas eficiente a la hora de comunicarse con la computadora.

En el caso de las listas de listas integradas de Python, podemos observar que la velocidad es relativamente alta, esto debido al indexado integrado de la slistas, que realiza mas fácil el acceso, viéndose disminuida la velocidad, por el tipado dinámico y el hecho de que estas listas también sean dinámicas.

Finalmente, numpy presentó un tiempo de cálculo mayor, mientras que sus característica incluyen calculos vectorizados sobre arreglos, matrices y vectores, además de creación e inicialización fácil y práctica de estos, compartiendo con C++ el hecho de ser estáticos, es decir, no se puede modificar su tamaño tan fácilmente, situación que en teoría, debería eficientar los procesos.


### Conclusiones

Los resultados fueron sorprendentes, por el hecho de que no fueron los esperados, ya que la librería Numpy demoró mayor tiempo en hacer los cálculos que las listas intregradas de Python, cosa que no estaba prevista, esto al parecer es debido al método, que implica tres ciclos anidados, ya que al parecer numpy, es incluso más lento con métodos no vectorizados, y según lo investigado , las listas de listas pueden llegar a ser más rápidas en estos casos ya que llevan predefinidos índices y es más rápido el acceso a ellos.
Al hacer la prueba con la forma vectorizada por defecto de numpy se observa que la velocidad aumenta notablemente.

Aún así, podemos afirmar que C++ es un lenguaje muy rápido y eficiente, a pesar de que implica mas dificultad sintáctica, pero es ideal para cómputo de alto rendimiento, mientras que Numpy y Python son herramientas multipropósito y muy útiles en cualquier aplicación, aunque sacrificando un poco la eficiencia, así, dependiendo la situación es factible escoger cualquiera de los tres métodos.


