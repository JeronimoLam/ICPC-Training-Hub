# Clase 3 : Querys de rangos
LIS y LCS lo vemos mas tarde. (De programación dinámica)
## Se tienen
Un arreglo de N elementos

Una cantidad Q de querys 

Cada query tiene un subrango para sacar la suma

Pagar en tiempo

Estructura: Prefix sum
Vector auxiliar que tenga el resultado de la suma de los elementos desde 0 hasta la posición del elemento. Desventaja: Un update de un valor conllevaría un update de el resto de elementos. Query[O(1)], Update[O[n]]

Si me piden un mínimo en un rango no puedo usar prefix sum
Estructura: Sparse Table (Memoria n*log(n)).
Min_ancho_1, Min_ancho_2, Min_ancho_4,...
Query[O(Log_2(n))
Update[(O(N.LOG_2(N))]]

Bestia: Segment Tree: Arbol Binario, cada nodo representa un intervalo :0
La raiz representa el total (El ancho de 0 a n). EL HI será la mitad izq (0, N/2)