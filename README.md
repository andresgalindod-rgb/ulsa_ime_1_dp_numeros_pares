# Práctica 2: Guardar los números pares
## 1. Descripción del problema (Fase 1)
Escribir un programa que pida 5 numeros enteros uno por uno y que solo guarde los numeros pares y descarte los impares y al final mostrar cuantos pares encontro y cuales son.
En la vida real podria servir en una fabrica para guardar solo las piezas que pasen el control de calidad.



## 2. Entradas y salidas (Fase 1)


**Entradas:**
1. 5 numeros enteros

**Salidas:**
1. Cuantos pares encontro
2. Cuales son los pares 

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- 5 numeros 
- Los numeros deben ser enteros 

**Tamaño del arreglo y por qué** (piensa en el peor caso):
Si los 5 numeros son pares se guardarian todos asi que se ocuparian las 5 cajitas ese seria el peor de los casos

**¿El 0 y los negativos son pares? ¿Por qué?**
si, por que cumplen con la regla de alternancia numerica

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
total de pares es la cantidad de pares que se han guardado

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Pares guardados | Posición de cada par |
|---|---|---|---|
| 1 | 3, 8, 5, 2, 7 | 8, 2 | 0, 1 |
| 2 | 2, 4, 6, 8, 10 | 2, 4, 6, 8, 10 | 0, 1, 2, 3, 4 |
| 3 | 2, 3, 4, 5, 6 | 2, 4, 6 | 0, 1, 2 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** No
**¿Tuve que corregirla?** No

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numeros_pares
./numeros_pares
```

## 7. Ejemplo de ejecución (Fase 3)
./numeros_pares
Guardar los numeros pares de 5 numeros
Escribe un numero:8
Escribiste: 8
Es par
Escribe un numero:5
Escribiste: 5
Es impar
Escribe un numero:0
Escribiste: 0
Es par
Escribe un numero:-3
Escribiste: -3
Es impar
Escribe un numero:-4
Escribiste: -4
Es par

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué apareció al imprimir las 5 posiciones del arreglo? ¿Por qué?**
Los pares aparecieron en las primeras posiciones del arreglo y en las que no se llenaron salio 0

**Experimento B: ¿qué pasó al usar la variable del ciclo como posición del arreglo? ¿Por qué?**
Los pares salieron en la posicion de la vuelta en que se leyeron

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mezcla | 1, 2, 3, 4, 5 | 2 pares: 2, 4 | 2 pares: 2,4 | si|
| Posiciones distintas | 3, 8, 5, 2, 7 | 2 pares: 8, 2 | 2 pares: 8, 2 | si |
| Todos pares | 2, 4, 6, 8, 10 | 5 pares | 5 pares | si |
| Todos impares | 1, 3, 5, 7, 9 | 0 pares | 0 pares | si |
| Con cero y negativos | 0, -3, -4, 7, 1 | 2 pares: 0, -4 | 2 pares: 0,-4 | si |
| Entrada inválida | `hola` o `3.5` | vuelve a pedir | vuelve a pedir | si |
| Caso propio 1 | 1, 3, 5, 6, 8 | 2 pares: 6, 8 | 2 pares: 6, 8 | si |
| Caso propio 2 | -2, -6 1, 3, 5 | 2 pares: -2, -6 | 2 pares: -2, -6 | si |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
a guardar los datos de arreglo

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
compilaria despues de cada cambio

**¿Qué fue lo más difícil y cómo lo resolví?**
corregir los errores al compilar

**¿Qué pregunta me quedó sin responder?**
como podira capturar mas numeros

**¿Por qué no puedo usar la variable del ciclo para guardar en el arreglo?**
porque cuenta los numeros leidos

## 13. Lista de verificación antes de entregar (Fase 5)

- [ si ] Llené todas las secciones (no quedan `_____`)
- [ si ] Mi programa compila sin advertencias
- [ si  ] Probé todos los casos de la tabla
- [ si ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ si ] No modifiqué `utilerias.h`
- [si  ] Hice al menos 3 commits con mensajes claros
- [ si ] Hice `git push` y verifiqué mi fork en GitHub
- [ si ] Entregué el enlace de mi fork en Classroom