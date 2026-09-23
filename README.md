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
**¿Tuve que corregirla?** _____

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numeros_pares
./numeros_pares
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué apareció al imprimir las 5 posiciones del arreglo? ¿Por qué?**
_____

**Experimento B: ¿qué pasó al usar la variable del ciclo como posición del arreglo? ¿Por qué?**
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mezcla | 1, 2, 3, 4, 5 | 2 pares: 2, 4 | _____ | _____ |
| Posiciones distintas | 3, 8, 5, 2, 7 | 2 pares: 8, 2 | _____ | _____ |
| Todos pares | 2, 4, 6, 8, 10 | 5 pares | _____ | _____ |
| Todos impares | 1, 3, 5, 7, 9 | 0 pares | _____ | _____ |
| Con cero y negativos | 0, -3, -4, 7, 1 | 2 pares: 0, -4 | _____ | _____ |
| Entrada inválida | `hola` o `3.5` | vuelve a pedir | _____ | _____ |
| Caso propio 1 | _____ | _____ | _____ | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ |

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
_____

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____

**¿Qué fue lo más difícil y cómo lo resolví?**
_____

**¿Qué pregunta me quedó sin responder?**
_____

**¿Por qué no puedo usar la variable del ciclo para guardar en el arreglo?**
_____

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom