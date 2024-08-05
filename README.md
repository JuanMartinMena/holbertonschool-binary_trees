## ¿Qué es un árbol binario?

Un árbol binario es una estructura de datos en la que cada **nodo** puede tener hasta dos hijos:

- **Hijo izquierdo** (puede ser un nodo o `NULL`)
- **Hijo derecho** (puede ser un nodo o `NULL`)

### Ejemplo visual →

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/718a4761-4555-430b-9dad-6d9c7b63792e/Untitled.png)

## Estructura de un nodo

En C, un nodo en un árbol binario se suele definir con una estructura (`struct`) que tiene:

1. **Dato**: Lo que queremos almacenar en el nodo (como un número entero).
2. **Puntero al hijo izquierdo**: Apunta a otro nodo que es el hijo izquierdo.
3. **Puntero al hijo derecho**: Apunta a otro nodo que es el hijo derecho.

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/eafcef3f-2b9e-4469-a7ef-da6727e8248f/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/bdeb540d-68ee-4e83-b26e-f9c40a42e5de/Untitled.png)

## Términos Importantes

- **Path**: Se refiere a la secuencia de nodos a lo largo de las aristas de un árbol.
- **Root**: El nodo en la parte superior del árbol. Solo hay una raíz por árbol y un único camino desde la raíz a cualquier otro nodo.
- **Parent**: Cualquier nodo, excepto el nodo raíz, tiene una arista hacia arriba a otro nodo llamado padre.
- **Child**: El nodo que está por debajo de un nodo dado, conectado por una arista hacia abajo, se llama hijo.
- **Leaf**: El nodo que no tiene ningún nodo hijo se llama nodo hoja.
- **Subtree**: Representa los descendientes de un nodo.
- **Visiting**: Se refiere a verificar el valor de un nodo cuando el control está en él.
- **Traversing**: Significa pasar por los nodos en un orden específico.
- **Levels**: El nivel de un nodo representa su generación. Si el nodo raíz está en el nivel 0, el siguiente nodo hijo está en el nivel 1, el nieto está en el nivel 2, y así sucesivamente.
- **Keys**: Representa un valor de un nodo en base al cual se llevará a cabo una operación de búsqueda para ese nodo.

### Ejemplo →

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/c9b11790-528e-46db-9048-2aa5fe6707a6/Untitled.png)

# Tipos De Árboles

- General Trees
- Binary Trees
- Binary Search Trees

## **General Trees**

Son estructuras de datos en forma de árbol que no tienen un orden específico en su jerarquía. En estos árboles, el nodo raíz puede tener entre 0 y `n` subárboles.

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/4a440508-0c09-45e0-97df-b649383888ab/Untitled.png)

### Resumen →

En un árbol general, no hay reglas estrictas sobre cómo deben estar organizados los subárboles bajo el nodo raíz. Esto significa que la raíz puede tener cualquier número de subárboles (desde ninguno hasta varios). La raíz actúa como el nodo principal que engloba todos los demás subárboles y nodos en la estructura, sin imponer ninguna restricción sobre cómo deben estar organizados o conectados esos subárboles.

## **Binary Trees**

Son una categoría específica de árboles generales en los que cada nodo raíz puede tener como máximo 2 subárboles: uno izquierdo y uno derecho. Basado en el número de hijos, los árboles binarios se dividen en tres tipos:

- **Full Binary Tree**
    - Un **Full Binary Tree** es un tipo de árbol binario donde cada nodo tiene 0 o 2 nodos hijos.
    - En un **Full Binary Tree**, cada nodo tiene exactamente dos hijos (izquierdo y derecho) o ninguno (es decir, es una hoja). No se permiten nodos con solo un hijo.
- **Full Binary Tree**
    - Un **Full Binary Tree** es un tipo de árbol binario en el que todos los nodos hoja deben estar en el mismo nivel. Sin embargo, los nodos raíz e internos pueden tener 0, 1 o 2 hijos.
    - En un **Full Binary Tree**, todos los nodos hoja (es decir, los nodos sin hijos) están en el mismo nivel, pero los nodos internos pueden tener 0, 1 o 2 hijos. Esto significa que el árbol está "lleno" hasta el último nivel, pero el último nivel puede no estar completamente lleno.
- **Perfect Binary Tree**
    - Un **Perfect Binary Tree** es un tipo de árbol binario en el que todos los nodos hoja están en el mismo nivel y cada nodo, excepto las hojas, tiene 2 hijos.
    - En un **Perfect Binary Tree**, todos los nodos hoja están al mismo nivel, y todos los nodos internos tienen exactamente 2 hijos. Esto significa que el árbol está completamente balanceado y todos los niveles, excepto el último, están completamente llenos.

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/044821d2-60bb-47ee-bf0f-6c59bcce3f60/Untitled.png)

## **Binary Search Trees**

Poseen todas las propiedades de los árboles binarios, pero además tienen algunas propiedades adicionales basadas en ciertas restricciones, lo que los hace más eficientes que los árboles binarios generales.

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/6dc283ea-16f9-4e27-8ce7-7cd9eaf4efb2/Untitled.png)

En un árbol de búsqueda binaria (BTS) se mantiene un orden específico: para cualquier nodo, todos los nodos en el subárbol izquierdo tienen valores menores que el valor del nodo raíz, y todos los nodos en el subárbol derecho tienen valores mayores. Esta organización permite realizar búsquedas, inserciones y eliminaciones de manera más eficiente que en los árboles binarios generales, ya que facilita encontrar y manejar los datos de forma rápida mediante un recorrido estructurado.

## **Ventajas De BST (Binary Search Trees)**

Los árboles de búsqueda binaria son más eficientes que los árboles binarios porque la complejidad temporal para realizar varias operaciones se reduce.

- **Eficiencia Mejorada**: La estructura de los BST permite realizar operaciones como búsqueda, inserción y eliminación de manera más rápida en comparación con los árboles binarios generales. Esto es porque en un BST, los valores están organizados de tal manera que facilita encontrar rápidamente el valor buscado, lo que reduce el tiempo de operación.
- **Búsqueda Simplificada**: Dado que el orden de las claves se basa en el nodo padre, la búsqueda de un valor específico se vuelve más simple y directa. Puedes tomar decisiones rápidas sobre en qué subárbol buscar según si el valor es menor o mayor que el valor del nodo actual.
- **Consultas de Rango**: La alineación de los BST también favorece las consultas de rango, que se utilizan para encontrar valores que se encuentran entre dos claves. Esto es útil en sistemas de gestión de bases de datos, donde se necesita consultar rangos de valores eficientemente.

## **Desventajas De BST (Binary Search Trees)**

La principal desventaja de los árboles de búsqueda binaria es que si todos los elementos en los nodos son mayores o menores que el nodo raíz, el árbol se vuelve desbalanceado. En otras palabras, el árbol se inclina completamente hacia un lado.

- **Desbalanceo**: Cuando todos los valores en los nodos son mayores o menores que el valor del nodo raíz, el árbol no tiene una estructura equilibrada. En lugar de tener una forma de árbol balanceada, se convierte en una estructura que se inclina hacia un lado, lo que lo hace parecer más una lista enlazada que un árbol binario.
- **Impacto en la Complejidad Temporal**: Este desbalanceo afecta negativamente el rendimiento de las operaciones de búsqueda, ya que la complejidad temporal en el peor de los casos para una búsqueda se convierte en O(n), donde `n` es el número de nodos. Esto es mucho menos eficiente que el O(log n) esperado en un árbol binario de búsqueda balanceado.
- **Solución - Balanced Binary Search Trees**: Para solucionar este problema de desbalanceo, se introdujo el concepto de árboles de búsqueda binaria balanceados. Estos árboles están diseñados para mantener un equilibrio en su estructura, evitando que se conviertan en una lista enlazada y garantizando que las operaciones de búsqueda, inserción y eliminación se mantengan eficientes.

## Balanced Binary Search Trees

Considera un árbol de búsqueda binaria con ‘m’ como la altura del subárbol izquierdo y ‘n’ como la altura del subárbol derecho. Si el valor de (m-n) es igual a 0, 1 o -1, se dice que el árbol es un árbol de búsqueda binaria balanceado.

- **Definición de Balanceo**: En un árbol de búsqueda binaria balanceado, la diferencia en altura entre el subárbol izquierdo y el subárbol derecho no debe ser mayor a 1. Es decir, si la diferencia entre las alturas `m` y `n` de los subárboles izquierdo y derecho es 0, 1 o -1, el árbol se considera balanceado. Esto ayuda a mantener el árbol en una estructura más equilibrada, lo que mejora la eficiencia de las operaciones.
- **Auto-Balanceo**: Estos árboles están diseñados para autoajustarse. Cuando la diferencia en altura entre los subárboles izquierdo y derecho supera 1, el árbol utiliza algoritmos de rotación para restablecer el equilibrio.
- **Tipos de Rotaciones**: Hay cuatro tipos de rotaciones que se utilizan para mantener el equilibrio en un árbol de búsqueda binaria balanceado:
    - **Rotación Izquierda-Izquierda (Left-Left)**: Rotación simple en la subárbol izquierdo.
    - **Rotación Derecha-Derecha (Right-Right)**: Rotación simple en el subárbol derecho.
    - **Rotación Izquierda-Derecha (Left-Right)**: Rotación doble que primero realiza una rotación izquierda en el subárbol izquierdo y luego una rotación derecha.
    - **Rotación Derecha-Izquierda (Right-Left)**: Rotación doble que primero realiza una rotación derecha en el subárbol derecho y luego una rotación izquierda.

Estas rotaciones permiten mantener el árbol balanceado, asegurando que las operaciones como búsqueda, inserción y eliminación se realicen de manera eficiente.

## Maneras De Recorrerlo

## **In-order Traversal**

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/e4a4edcd-761d-489d-9d91-e08fc71fd4ca/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/e1a9af5e-0845-48f1-885d-09cf4787aeb1/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/3e5737aa-9189-4bd3-bf9c-081c4059c5f5/Untitled.png)

## **Pre-order Traversal**

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/24d846de-aace-4004-9d63-593e9a879132/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/2f929b4e-f00f-42fa-9218-d844128195fe/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/ef947ae2-cdc0-4cb1-b926-2777d85b1d8f/Untitled.png)

## **Post-order Traversal**
