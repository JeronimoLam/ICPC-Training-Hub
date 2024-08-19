# Clase 2 : Continuación de programación dinámica

* Bottom Up -> Comenzamos desde aquellos nodos sin enlaces (Hay que conocer la topología del grafo)
* Top Down -> Comenzamos desde el nodo que nos interesa y vamos haciendo un dfs en el grafo.

Complejidad <10⁸ entonce lo hace en menos de 1 s

## Problemas famosos con DP
- Knapshack Problem: El problema de la mochila. Tengo una mochila con capacidad fija *w* y tengo items con dos caracteristicas, el tamaño que ocupa en la mochila *w_{i}* y que tan valioso es *v_{i}*. ¿Cuanto es lo mas valioso que me puedo llevar sin superar los limites de la mochila? Combinaciones: Para n elemento, 2^n combinaciones sin orden. No podemos ver los subconjuntos 1 x 1. Creamos un vector (dp) que tendra los elem. desde 0 a w. Res: max de dp. O(n.w) Se puede plantear ele estado como el valor o el peso.
- Longest incresaing subsequence (LIS)
- Longest common subsequence (LCS)