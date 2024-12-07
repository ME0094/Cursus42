Exam Rank 02 {#exam-rank-02 .page-title}
============

::: {.page-body}
Level 1 {#10ec02c1-e3b3-8046-ac09-f86d2ed507cf}
=======

first\_word {#10ec02c1-e3b3-81ed-a085-f122e784be37}
-----------

> Assignment name : first\_word\
> Expected files : first\_word.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes a string and displays its first word,
> followed by a\
> newline.\
> \
> A word is a section of string delimited by spaces/tabs or by the
> start/end of\
> the string.\
> \
> If the number of parameters is not 1, or if there are no words, simply
> display\
> a newline.\
> \
> Examples:\
> \
> \$\> ./first\_word \"FOR PONY\" \| cat -e\
> FOR\$\
> \$\> ./first\_word \"this \... is sparta, then again, maybe not\" \|
> cat -e\
> this\$\
> \$\> ./first\_word \" \" \| cat -e\
> \$\
> \$\> ./first\_word \"a\" \"b\" \| cat -e\
> \$\
> \$\> ./first\_word \" lorem,ipsum \" \| cat -e\
> lorem,ipsum\$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome una cadena de texto como
    entrada y muestre su primera palabra seguida de un salto de línea.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento o si no hay palabras en la cadena, simplemente se muestra
    un salto de línea.
:::

``` {#10ec02c1-e3b3-81b4-a2a5-c09a40a63c56 .code}
#include <unistd.h>

int main (int argc, char **argv)
{
    int i = 0;
    
    if (argc == 2)
    {
        while (argv[1][i] == 32 || argv[1][i] == 9)
            i++;
        while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-8060-b9e4-f09b939984d1 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la función `write`, que se
    utiliza para escribir datos en archivos o en la salida estándar.

```{=html}
<!-- -->
```
2.  **Función principal** `main`:

    ``` {#10ec02c1-e3b3-8089-868d-e40a3f9f815f .code}
    int main (int argc, char **argv)
    ```

    La función principal recibe dos argumentos: `argc` (el número de
    argumentos pasados al programa) y `argv` (una matriz de cadenas que
    contiene los argumentos).

```{=html}
<!-- -->
```
3.  **Declaración de la variable** `i`:

    ``` {#10ec02c1-e3b3-800a-8cd6-db7c14d47ed1 .code}
    int i = 0;
    ```

    Se declara e inicializa la variable `i` a 0. Esta variable se usará
    como índice para recorrer la cadena.

```{=html}
<!-- -->
```
4.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-8076-822d-e33cbd126f13 .code}
    if (argc == 2)
    ```

    Se verifica si el número de argumentos es 2. Esto asegura que el
    programa solo se ejecutará si se pasa exactamente un argumento
    adicional (además del nombre del programa).

```{=html}
<!-- -->
```
5.  **Salto de espacios y tabulaciones iniciales**:

    ``` {#10ec02c1-e3b3-8002-87ee-e02cf8c747f7 .code}
    while (argv[1][i] == 32 || argv[1][i] == 9)
        i++;
    ```

    Este bucle `while` avanza el índice `i` mientras el carácter actual
    en `argv[1]` sea un espacio (código ASCII 32) o una tabulación
    (código ASCII 9).

```{=html}
<!-- -->
```
6.  **Escritura de caracteres hasta el siguiente espacio o tabulación**:

    ``` {#10ec02c1-e3b3-807a-a001-e13a8fde0b41 .code}
    while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    ```

    Este segundo bucle `while` escribe caracteres en la salida estándar
    (usando `write`) hasta encontrar un espacio, una tabulación o el
    final de la cadena.

```{=html}
<!-- -->
```
7.  **Escritura de un salto de línea**:

    ``` {#10ec02c1-e3b3-807e-bef1-f97b86e4fa4b .code}
    write(1, "\n", 1);
    ```

    Finalmente, se escribe un salto de línea para terminar la salida.

En resumen, este programa toma un argumento de línea de comandos, omite
los espacios y tabulaciones iniciales, y luego imprime los caracteres
hasta el siguiente espacio o tabulación.

------------------------------------------------------------------------

fizzbuzz {#10ec02c1-e3b3-8053-bc75-feccb310c106}
--------

> Assignment name : fizzbuzz\
> Expected files : fizzbuzz.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that prints the numbers from 1 to 100, each separated
> by a\
> newline.\
> \
> If the number is a multiple of 3, it prints \'fizz\' instead.\
> \
> If the number is a multiple of 5, it prints \'buzz\' instead.\
> \
> If the number is both a multiple of 3 and a multiple of 5, it prints
> \'fizzbuzz\' instead.\
> \
> Example:\
> \
> \$\>./fizzbuzz\
> 1\
> 2\
> fizz\
> 4\
> buzz\
> fizz\
> 7\
> 8\
> fizz\
> buzz\
> 11\
> fizz\
> 13\
> 14\
> fizzbuzz\
> \[\...\]\
> 97\
> 98\
> fizz\
> buzz\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que imprima los números del 1 al
    100, cada uno separado por un salto de línea.

```{=html}
<!-- -->
```
-   **Condiciones especiales:**
    -   Si el número es múltiplo de 3, imprime \"fizz\".

    ```{=html}
    <!-- -->
    ```
    -   Si el número es múltiplo de 5, imprime \"buzz\".

    ```{=html}
    <!-- -->
    ```
    -   Si el número es múltiplo de 3 y de 5, imprime \"fizzbuzz\".
:::

``` {#10ec02c1-e3b3-8086-9698-c193a1570828 .code}
#include <unistd.h>

void    ft_write_number(int number)
{
    char    str[10] = "0123456789";

    if (number > 9)
        ft_write_number(number / 10);
    write (1, &str[number % 10], 1);
}

int     main()
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 15 == 0)
            write (1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        else if (i % 5 == 0)
            write (1, "buzz", 4);
        else
            ft_write_number(i);
        i++;
        write (1, "\n", 1);
    }
}
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-8088-a9db-f68589117a11 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la función `write`, que se
    utiliza para escribir datos en archivos o en la salida estándar.

```{=html}
<!-- -->
```
2.  **Definición de la función** `ft_write_number`:

    ``` {#10ec02c1-e3b3-8040-8e84-e0aeea87f12b .code}
    void  ft_write_number(int number)
    ```

    Esta función se encarga de escribir un número entero en la salida
    estándar.

```{=html}
<!-- -->
```
3.  **Declaración de la cadena** `str`:

    ``` {#10ec02c1-e3b3-801d-9a9e-c5164fcbe0ac .code}
    char str[10] = "0123456789";
    ```

    Se declara una cadena que contiene los caracteres del 0 al 9.

```{=html}
<!-- -->
```
4.  **Condición para números mayores que 9**:

    ``` {#10ec02c1-e3b3-8056-9b87-e68163403379 .code}
    if (number > 9)
        ft_write_number(number / 10);
    ```

    Si el número es mayor que 9, la función se llama a sí misma
    recursivamente con el número dividido por 10. Esto permite
    descomponer el número en sus dígitos individuales.

```{=html}
<!-- -->
```
5.  **Escritura del dígito actual**:

    ``` {#10ec02c1-e3b3-8024-9f3a-f6d9bbb8b748 .code}
    write (1, &str[number % 10], 1);
    ```

    Se escribe el dígito correspondiente al residuo de `number` dividido
    por 10.

```{=html}
<!-- -->
```
6.  **Función principal** `main`:

    ``` {#10ec02c1-e3b3-80db-a05f-f6c17f838875 .code}
    int       main()
    ```

    La función principal del programa.

```{=html}
<!-- -->
```
7.  **Inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-8093-82d1-e11b442e3bf1 .code}
    int i = 1;
    ```

    Se declara e inicializa la variable `i` a 1. Esta variable se usará
    para contar del 1 al 100.

```{=html}
<!-- -->
```
8.  **Bucle** `while` **para iterar del 1 al 100**:

    ``` {#10ec02c1-e3b3-801b-aa33-c3f2bd290a6c .code}
    while (i <= 100)
    ```

```{=html}
<!-- -->
```
9.  **Condición para múltiplos de 15**:

    ``` {#10ec02c1-e3b3-8036-9146-c4c8f73dce3d .code}
    if (i % 15 == 0)
        write (1, "fizzbuzz", 8);
    ```

    Si `i` es múltiplo de 15, se escribe "fizzbuzz".

```{=html}
<!-- -->
```
10. **Condición para múltiplos de 3**:

    ``` {#10ec02c1-e3b3-80af-9ed3-f2002d00d81c .code}
    else if (i % 3 == 0)
        write (1, "fizz", 4);
    ```

    Si `i` es múltiplo de 3, se escribe "fizz".

```{=html}
<!-- -->
```
11. **Condición para múltiplos de 5**:

    ``` {#10ec02c1-e3b3-801d-8db0-e0f56e086c34 .code}
    else if (i % 5 == 0)
        write (1, "buzz", 4);
    ```

    Si `i` es múltiplo de 5, se escribe "buzz".

```{=html}
<!-- -->
```
12. **Escritura del número**:

    ``` {#10ec02c1-e3b3-80de-83e9-f60e7a0dc9ef .code}
    else
        ft_write_number(i);
    ```

    Si `i` no es múltiplo de 3, 5 o 15, se escribe el número usando la
    función `ft_write_number`.

```{=html}
<!-- -->
```
13. **Incremento de** `i`:

    ``` {#10ec02c1-e3b3-8050-a8f0-d1232f4daa7f .code}
    i++;
    ```

```{=html}
<!-- -->
```
14. **Escritura de un salto de línea**:

    ``` {#10ec02c1-e3b3-8003-9a23-fc23fa9a40fe .code}
    write (1, "\n", 1);
    ```

    Después de cada iteración, se escribe un salto de línea para separar
    las salidas.

En resumen, este programa imprime los números del 1 al 100, pero
reemplaza los múltiplos de 3 con "fizz", los múltiplos de 5 con "buzz" y
los múltiplos de 15 con "fizzbuzz".

------------------------------------------------------------------------

ft\_putstr {#10ec02c1-e3b3-808d-a2f3-c04d36d50f0c}
----------

> Assignment name : ft\_putstr\
> Expected files : ft\_putstr.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that displays a string on the standard output.\
> \
> The pointer passed to the function contains the address of the
> string\'s first\
> character.\
> \
> Your function must be declared as follows:\
> \
> void ft\_putstr(char \*str);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que muestre una cadena de texto en
    la salida estándar.
:::

``` {#10ec02c1-e3b3-80fc-8dc9-dc3e1d721b79 .code}
#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
        write(1, &str[i++], 1);
}
```

------------------------------------------------------------------------

ft\_strcpy {#10ec02c1-e3b3-80aa-96c1-d424958757d3}
----------

> Assignment name : ft\_strcpy\
> Expected files : ft\_strcpy.c\
> Allowed functions:\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Reproduce the behavior of the function strcpy (man strcpy).\
> \
> Your function must be declared as follows:\
> \
> char \*ft\_strcpy(char \*s1, char \*s2);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Reproduce el comportamiento de la función `strcpy` de
    la biblioteca estándar de C.
:::

``` {#10ec02c1-e3b3-80ad-a513-f3b3f111b209 .code}
char *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-8035-b6e1-f9a73868ea86 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la función `write`, que se
    utiliza para escribir datos en archivos o en la salida estándar.

```{=html}
<!-- -->
```
2.  **Definición de la función** `ft_putstr`:

    ``` {#10ec02c1-e3b3-8090-8a95-d6695dc2a0dd .code}
    void    ft_putstr(char *str)
    ```

    Esta función toma un puntero a una cadena de caracteres
    (`char *str`) y se encarga de escribir esa cadena en la salida
    estándar.

```{=html}
<!-- -->
```
3.  **Declaración e inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-801d-9359-e09b67b33f33 .code}
    int    i = 0;
    ```

    Se declara e inicializa la variable `i` a 0. Esta variable se usará
    como índice para recorrer la cadena.

```{=html}
<!-- -->
```
4.  **Bucle** `while` **para recorrer la cadena**:

    ``` {#10ec02c1-e3b3-80ed-a1ad-daae5851b7d7 .code}
    while (str[i])
    ```

    Este bucle `while` continúa ejecutándose mientras el carácter actual
    en `str[i]` no sea el carácter nulo (`'\0'`), que indica el final de
    la cadena.

```{=html}
<!-- -->
```
5.  **Escritura de cada carácter**:

    ``` {#10ec02c1-e3b3-80cf-ba0e-d3a6fe0d3360 .code}
    write(1, &str[i++], 1);
    ```

    Dentro del bucle, se utiliza la función `write` para escribir el
    carácter actual (`str[i]`) en la salida estándar. El índice `i` se
    incrementa después de cada escritura para pasar al siguiente
    carácter.

En resumen, esta función recorre la cadena de caracteres `str` y escribe
cada carácter en la salida estándar uno por uno hasta llegar al final de
la cadena.

------------------------------------------------------------------------

ft\_strlen {#10ec02c1-e3b3-801c-b2a4-c4387a60d7d6}
----------

> Assignment name : ft\_strlen\
> Expected files : ft\_strlen.c\
> Allowed functions:\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that returns the length of a string.\
> \
> Your function must be declared as follows:\
> \
> int ft\_strlen(char \*str);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que devuelva la longitud de una
    cadena de texto.
:::

``` {#10ec02c1-e3b3-80c3-ac0c-fd6e4404024c .code}
int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}
```

1.  **Definición de la función** `ft_strlen`:

    ``` {#10ec02c1-e3b3-800d-9fe7-f37a49c1161c .code}
    int ft_strlen(char *str)
    ```

    Esta función toma un puntero a una cadena de caracteres
    (`char *str`) y devuelve la longitud de esa cadena como un entero.

```{=html}
<!-- -->
```
2.  **Declaración e inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-8081-9823-da18a0f94cd0 .code}
    int i = 0;
    ```

    Se declara e inicializa la variable `i` a 0. Esta variable se usará
    como contador para medir la longitud de la cadena.

```{=html}
<!-- -->
```
3.  **Bucle** `while` **para recorrer la cadena**:

    ``` {#10ec02c1-e3b3-8014-af69-ca278feacd6d .code}
    while (str[i])
        i++;
    ```

    Este bucle `while` continúa ejecutándose mientras el carácter actual
    en `str[i]` no sea el carácter nulo (`'\0'`), que indica el final de
    la cadena. En cada iteración, se incrementa `i` en 1.

```{=html}
<!-- -->
```
4.  **Devolución de la longitud de la cadena**:

    ``` {#10ec02c1-e3b3-8025-ae93-f0de1c4f9eaf .code}
    return (i);
    ```

    Una vez que el bucle `while` termina, `i` contiene la longitud de la
    cadena, y esta longitud se devuelve como el resultado de la función.

En resumen, esta función recorre la cadena de caracteres `str` y cuenta
cuántos caracteres hay hasta llegar al carácter nulo (`'\0'`). La
longitud de la cadena se devuelve como un entero.

------------------------------------------------------------------------

ft\_swap {#10ec02c1-e3b3-80f9-9722-eff8823062e1}
--------

> Assignment name : ft\_swap\
> Expected files : ft\_swap.c\
> Allowed functions:\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that swaps the contents of two integers the adresses
> of which\
> are passed as parameters.\
> \
> Your function must be declared as follows:\
> \
> void ft\_swap(int \*a, int \*b);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que intercambie los valores de dos
    enteros cuyas direcciones se pasan como parámetros.
:::

``` {#10ec02c1-e3b3-8025-8863-f86c806dad45 .code}
void    ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

1.  **Definición de la función** `ft_swap`:

    ``` {#10ec02c1-e3b3-8068-8a51-f395bf9fb242 .code}
    void  ft_swap(int *a, int *b
    ```

    Esta función toma dos punteros a enteros (`int *a` y `int *b`) y se
    encarga de intercambiar los valores a los que apuntan.

```{=html}
<!-- -->
```
2.  **Declaración e inicialización de la variable** `temp`:

    ``` {#10ec02c1-e3b3-80db-9475-f65ded24c70f .code}
    int temp = *a;
    ```

    Se declara una variable temporal `temp` y se inicializa con el valor
    al que apunta `a`. Esto se hace para almacenar temporalmente el
    valor de `a`.

```{=html}
<!-- -->
```
3.  **Intercambio del valor de** `a` **con el valor de** `b`:

    ``` {#10ec02c1-e3b3-8015-b128-e531bc882cd9 .code}
    *a = *b;
    ```

    El valor al que apunta `a` se reemplaza con el valor al que apunta
    `b`.

```{=html}
<!-- -->
```
4.  **Asignación del valor almacenado en** `temp` **a** `b`:

    ``` {#10ec02c1-e3b3-8009-9371-cd98a6461382 .code}
    *b = temp;
    ```

    Finalmente, el valor almacenado en `temp` (que originalmente era el
    valor de `a`) se asigna al valor al que apunta `b`.

En resumen, esta función intercambia los valores de dos variables
enteras utilizando una variable temporal para almacenar uno de los
valores durante el proceso de intercambio.

------------------------------------------------------------------------

repeat\_alpha {#10ec02c1-e3b3-806f-a1a6-d356bd72fd9a}
-------------

> Assignment name : repeat\_alpha\
> Expected files : repeat\_alpha.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program called repeat\_alpha that takes a string and display
> it\
> repeating each alphabetical character as many times as its
> alphabetical index,\
> followed by a newline.\
> \
> \'a\' becomes \'a\', \'b\' becomes \'bb\', \'e\' becomes \'eeeee\',
> etc\...\
> \
> Case remains unchanged.\
> \
> If the number of arguments is not 1, just display a newline.\
> \
> Examples:\
> \
> \$\>./repeat\_alpha \"abc\"\
> abbccc\
> \$\>./repeat\_alpha \"Alex.\" \| cat -e\
> Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.\$\
> \$\>./repeat\_alpha \'abacadaba 42!\' \| cat -e\
> abbacccaddddabba 42!\$\
> \$\>./repeat\_alpha \| cat -e\
> \$\
> \$\>\
> \$\>./repeat\_alpha \"\" \| cat -e\
> \$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa llamado `repeat_alpha` que tome
    una cadena de texto como entrada y la muestre repitiendo cada
    carácter alfabético tantas veces como su índice alfabético, seguido
    de un salto de línea.

```{=html}
<!-- -->
```
-   **Reglas de repetición:**
    -   \'a\' se convierte en \'a\'.

    ```{=html}
    <!-- -->
    ```
    -   \'b\' se convierte en \'bb\'.

    ```{=html}
    <!-- -->
    ```
    -   \'e\' se convierte en \'eeeee\', etc.

    ```{=html}
    <!-- -->
    ```
    -   El caso (mayúscula o minúscula) se mantiene.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento, simplemente se muestra un salto de línea.

```{=html}
<!-- -->
```
-   **En resumen:** El programa debe repetir cada carácter alfabético en
    una cadena tantas veces como su posición en el alfabeto, manteniendo
    el caso original. Si no se proporciona una cadena de texto, se debe
    imprimir un salto de línea.
:::

``` {#10ec02c1-e3b3-8051-ba33-c2db998d32c3 .code}
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int count;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 'a' + 1;
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                count = av[1][i] - 'A' + 1;
            else
                count = 1;

            while (count--)
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-8060-8e07-fe3442651648 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la función `write`, que se
    utiliza para escribir datos en archivos, incluyendo la salida
    estándar.

```{=html}
<!-- -->
```
2.  **Función principal** `main`:

    ``` {#10ec02c1-e3b3-807c-81a5-cac558fb1714 .code}
    int main(int ac, char **av)
    ```

    La función principal recibe dos parámetros: `ac` (el número de
    argumentos) y `av` (una matriz de cadenas que contiene los
    argumentos).

```{=html}
<!-- -->
```
3.  **Declaración de variables**:

    ``` {#10ec02c1-e3b3-8023-99b3-f22edf1fab7b .code}
    int i;
    int count;
    ```

    Se declaran dos variables enteras: `i` para iterar a través de los
    caracteres de la cadena y `count` para determinar cuántas veces se
    debe imprimir cada carácter.

```{=html}
<!-- -->
```
4.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-8058-b9bd-c0f1550b4952 .code}
    if (ac == 2)
    ```

    Se verifica que el programa reciba exactamente un argumento
    adicional (además del nombre del programa).

```{=html}
<!-- -->
```
5.  **Inicialización del índice** `i`:

    ``` {#10ec02c1-e3b3-80d4-9dbb-f6c8ab15e70a .code}
    i = 0;
    ```

    Se inicializa `i` a 0 para comenzar a recorrer la cadena desde el
    primer carácter.

```{=html}
<!-- -->
```
6.  **Bucle** `while` **para recorrer la cadena**:

    ``` {#10ec02c1-e3b3-80af-bca8-eb8a9129f941 .code}
    while (av[1][i])
    ```

    Este bucle recorre cada carácter de la cadena proporcionada como
    argumento hasta llegar al final de la cadena (`'\0'`).

```{=html}
<!-- -->
```
7.  **Determinación del valor de** `count`:

    ``` {#10ec02c1-e3b3-80c1-90d6-fba45ab438fe .code}
    if (av[1][i] >= 'a' && av[1][i] <= 'z')
        count = av[1][i] - 'a' + 1;
    else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
        count = av[1][i] - 'A' + 1;
    else
        count = 1;
    ```

    -   Si el carácter es una letra minúscula (`az`), `count` se
        establece en su posición en el alfabeto (por ejemplo, 'a' es 1,
        'b' es 2, etc.).

    ```{=html}
    <!-- -->
    ```
    -   Si el carácter es una letra mayúscula (`AZ`), `count` se
        establece de manera similar.

    ```{=html}
    <!-- -->
    ```
    -   Si el carácter no es una letra, `count` se establece en 1.

```{=html}
<!-- -->
```
8.  **Bucle** `while` **interno para imprimir el carácter**:

    ``` {#10ec02c1-e3b3-80fd-a82e-fcf1468d1390 .code}
    while (count--)
        write(1, &av[1][i], 1);
    ```

    Este bucle imprime el carácter actual `count` veces usando la
    función `write`.

```{=html}
<!-- -->
```
9.  **Incremento del índice** `i`:

    ``` {#10ec02c1-e3b3-8097-b3d7-e9cc4d782af7 .code}
    i++;
    ```

    Se incrementa `i` para pasar al siguiente carácter de la cadena.

```{=html}
<!-- -->
```
10. **Impresión de un salto de línea**:

    ``` {#10ec02c1-e3b3-8063-9d7c-e95fdbeb4c43 .code}
    write(1, "\n", 1);
    ```

    Después de procesar toda la cadena, se imprime un salto de línea
    para finalizar la salida.

```{=html}
<!-- -->
```
11. **Retorno de la función** `main`:

    ``` {#10ec02c1-e3b3-8074-b9c8-f40cda092392 .code}
    return 0;
    ```

    La función `main` retorna 0, indicando que el programa ha terminado
    correctamente.

Este programa toma una cadena como argumento y repite cada letra tantas
veces como su posición en el alfabeto. Por ejemplo, si la entrada es
"abc", la salida será "abbccc".

------------------------------------------------------------------------

rev\_print {#10ec02c1-e3b3-8088-8026-e43479fcc4d3}
----------

> Assignment name : rev\_print\
> Expected files : rev\_print.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that takes a string, and displays the string in
> reverse\
> followed by a newline.\
> \
> The original string must not be modified.\
> \
> You must return the string passed as a parameter.\
> \
> Your function must be declared as follows:\
> \
> char \*rev\_print(char \*str);\
> \
> Examples:\
> \
> int main(void)\
> {\
> rev\_print(\"Hello world\");\
> write (1, \"\\n\", 1);\
> rev\_print(\"tnirp esreveR\");\
> write (1, \"\\n\", 1);\
> rev\_print(\"\");\
> write (1, \"\\n\", 1);\
> }\
> \
> Output :\
> \$\> ./a.out \| cat -e\
> dlrow olleH\$\
> \$\> ./a.out \| cat -e\
> Reverse print\$\
> \$\> ./a.out \| cat -e\
> \$\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que tome una cadena de texto como
    entrada y la muestre en orden inverso seguida de un salto de línea.

```{=html}
<!-- -->
```
-   **Restricción:** La cadena original no debe ser modificada.

```{=html}
<!-- -->
```
-   **Retorno:** La función debe devolver la cadena original.
:::

``` {#10ec02c1-e3b3-805a-83af-dfa6a20625a6 .code}
#include <unistd.h>

char    *rev_print(char *str)
{
    int i = 0;
    
    while(str[i])
        i++;
    while(--i >= 0)
        write(1, &str[i], 1);
    write(1, "\n", 1);
    return (str);
}
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-8085-8df7-d9a557972427 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la función `write`, que se
    utiliza para escribir datos en archivos, incluyendo la salida
    estándar.

```{=html}
<!-- -->
```
2.  **Definición de la función** `rev_print`:

    ``` {#10ec02c1-e3b3-80c5-801e-ff62bb9f516b .code}
    char *rev_print(char *str)
    ```

    La función `rev_print` toma un puntero a una cadena de caracteres
    (`char *str`) y devuelve un puntero a la misma cadena.

```{=html}
<!-- -->
```
3.  **Declaración e inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-80ef-a80e-e6831d94b43d .code}
    int i = 0;
    ```

    Se declara una variable entera `i` e inicializa a 0. Esta variable
    se utilizará para recorrer la cadena.

```{=html}
<!-- -->
```
4.  **Bucle** `while` **para encontrar la longitud de la cadena**:

    ``` {#10ec02c1-e3b3-80b2-8a39-e92020827e20 .code}
    while(str[i])
        i++;
    ```

    Este bucle incrementa `i` hasta que alcanza el carácter nulo
    (`'\0'`), que indica el final de la cadena. Al final del bucle, `i`
    contendrá la longitud de la cadena.

```{=html}
<!-- -->
```
5.  **Bucle** `while` **para imprimir la cadena en orden inverso**:

    ``` {#10ec02c1-e3b3-800d-b28d-c6a416c5e405 .code}
    while(--i >= 0)
        write(1, &str[i], 1);
    ```

    -   Primero, `i` se decrementa en 1 (`-i`).

    ```{=html}
    <!-- -->
    ```
    -   Luego, se utiliza la función `write` para imprimir el carácter
        en la posición `i` de la cadena.

    ```{=html}
    <!-- -->
    ```
    -   Este bucle continúa hasta que `i` es menor que 0, imprimiendo
        así los caracteres de la cadena en orden inverso.

```{=html}
<!-- -->
```
6.  **Impresión de un salto de línea**:

    ``` {#10ec02c1-e3b3-8015-bdf0-fa7881fd3b2d .code}
    write(1, "\n", 1);
    ```

    Después de imprimir todos los caracteres en orden inverso, se
    imprime un salto de línea para finalizar la salida.

```{=html}
<!-- -->
```
7.  **Retorno de la cadena original**:

    ``` {#10ec02c1-e3b3-8098-852d-f102e44aecc5 .code}
    return (str);
    ```

    La función devuelve el puntero a la cadena original.

Este programa toma una cadena como entrada y la imprime en orden
inverso. Por ejemplo, si la entrada es "hola", la salida será "aloh".

------------------------------------------------------------------------

rot\_13 {#10ec02c1-e3b3-8075-b88e-ed52fa9362a1}
-------

> Assignment name : rot\_13\
> Expected files : rot\_13.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes a string and displays it, replacing each of
> its\
> letters by the letter 13 spaces ahead in alphabetical order.\
> \
> \'z\' becomes \'m\' and \'Z\' becomes \'M\'. Case remains unaffected.\
> \
> The output will be followed by a newline.\
> \
> If the number of arguments is not 1, the program displays a newline.\
> \
> Example:\
> \
> \$\>./rot\_13 \"abc\"\
> nop\
> \$\>./rot\_13 \"My horse is Amazing.\" \| cat -e\
> Zl ubefr vf Nznmvat.\$\
> \$\>./rot\_13 \"AkjhZ zLKIJz , 23y \" \| cat -e\
> NxwuM mYXVWm , 23l \$\
> \$\>./rot\_13 \| cat -e\
> \$\
> \$\>\
> \$\>./rot\_13 \"\" \| cat -e\
> \$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome una cadena de texto como
    entrada y la muestre, reemplazando cada letra por la letra que está
    13 posiciones más adelante en el orden alfabético.

```{=html}
<!-- -->
```
-   **Reglas de reemplazo:**
    -   \'z\' se convierte en \'m\' y \'Z\' se convierte en \'M\'.

    ```{=html}
    <!-- -->
    ```
    -   El caso (mayúscula o minúscula) se mantiene.

```{=html}
<!-- -->
```
-   **Salida:** La salida será seguida por un salto de línea.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento, el programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-8032-87a5-ffb2641197d8 .code}
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc > 1)
    {
        while(argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-8019-9ae8-eb501868c069 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la función `write`, que se
    utiliza para escribir datos en archivos, incluyendo la salida
    estándar.

```{=html}
<!-- -->
```
2.  **Función principal** `main`:

    ``` {#10ec02c1-e3b3-8018-9913-d9b9c0082e90 .code}
    int main(int argc, char **argv)
    ```

    La función principal recibe dos parámetros: `argc` (el número de
    argumentos) y `argv` (una matriz de cadenas que contiene los
    argumentos).

```{=html}
<!-- -->
```
3.  **Declaración e inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-80c7-848e-f6a93e9e210d .code}
    int i = 0;
    ```

    Se declara una variable entera `i` e inicializa a 0. Esta variable
    se utilizará para recorrer la cadena.

```{=html}
<!-- -->
```
4.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-802c-913a-dba6f4f90579 .code}
    if (argc > 1)
    ```

    Se verifica que el programa reciba al menos un argumento adicional
    (además del nombre del programa).

```{=html}
<!-- -->
```
5.  **Bucle** `while` **para recorrer la cadena**:

    ``` {#10ec02c1-e3b3-80ec-94bf-db7013deca1d .code}
    while(argv[1][i])
    ```

    Este bucle recorre cada carácter de la cadena proporcionada como
    argumento hasta llegar al final de la cadena (`'\0'`).

```{=html}
<!-- -->
```
6.  **Cifrado ROT13**:

    ``` {#10ec02c1-e3b3-80d7-adde-cb97140aac11 .code}
    if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
    else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
    ```

    -   Si el carácter es una letra minúscula (`az`), se aplica el
        cifrado ROT13: se desplaza 13 posiciones en el alfabeto.

    ```{=html}
    <!-- -->
    ```
    -   Si el carácter es una letra mayúscula (`AZ`), se aplica el mismo
        cifrado ROT13.

```{=html}
<!-- -->
```
7.  **Impresión del carácter cifrado**:

    ``` {#10ec02c1-e3b3-80c2-8dce-fce0363e09d5 .code}
    write(1, &argv[1][i], 1);
    ```

    Se utiliza la función `write` para imprimir el carácter cifrado.

```{=html}
<!-- -->
```
8.  **Incremento del índice** `i`:

    ``` {#10ec02c1-e3b3-80de-a40c-ea07d202ac12 .code}
    i++;
    ```

    Se incrementa `i` para pasar al siguiente carácter de la cadena.

```{=html}
<!-- -->
```
9.  **Impresión de un salto de línea**:

    ``` {#10ec02c1-e3b3-80ee-bf70-ce61ae3cb127 .code}
    write(1, "\n", 1);
    ```

    Después de procesar toda la cadena, se imprime un salto de línea
    para finalizar la salida.

```{=html}
<!-- -->
```
10. **Retorno de la función** `main`:

    ``` {#10ec02c1-e3b3-80f4-8377-cd66d61975b5 .code}
    return (0);
    ```

    La función `main` retorna 0, indicando que el programa ha terminado
    correctamente.

Este programa toma una cadena como argumento y aplica el cifrado ROT13 a
cada letra.

------------------------------------------------------------------------

rotone {#10ec02c1-e3b3-8042-91ec-f22d70cc2d74}
------

> Assignment name : rotone\
> Expected files : rotone.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes a string and displays it, replacing each of
> its\
> letters by the next one in alphabetical order.\
> \
> \'z\' becomes \'a\' and \'Z\' becomes \'A\'. Case remains unaffected.\
> \
> The output will be followed by a \\n.\
> \
> If the number of arguments is not 1, the program displays \\n.\
> \
> Example:\
> \
> \$\>./rotone \"abc\"\
> bcd\
> \$\>./rotone \"Les stagiaires du staff ne sentent pas toujours tres
> bon.\" \| cat -e\
> Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.\$\
> \$\>./rotone \"AkjhZ zLKIJz , 23y \" \| cat -e\
> BlkiA aMLJKa , 23z \$\
> \$\>./rotone \| cat -e\
> \$\
> \$\>\
> \$\>./rotone \"\" \| cat -e\
> \$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome una cadena de texto como
    entrada y la muestre, reemplazando cada letra por la siguiente en el
    orden alfabético.

```{=html}
<!-- -->
```
-   **Reglas de reemplazo:**
    -   \'z\' se convierte en \'a\' y \'Z\' se convierte en \'A\'.

    ```{=html}
    <!-- -->
    ```
    -   El caso (mayúscula o minúscula) se mantiene.

```{=html}
<!-- -->
```
-   **Salida:** La salida será seguida por un salto de línea.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento, el programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-806e-9730-cce6655c5dbd .code}
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rotone(char *s)
{
    while (*s)
    {
        if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
            ft_putchar(*s + 1);
        else if (*s == 'Z' || *s == 'z')
            ft_putchar(*s - 25);
        else
            ft_putchar(*s);
        ++s;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
        rotone(av[1]);
    ft_putchar('\n');
    return (0);
}
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-8054-829a-d3c5886ba206 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la función `write`, que se
    utiliza para escribir datos en archivos, incluyendo la salida
    estándar.

```{=html}
<!-- -->
```
2.  **Definición de la función** `ft_putchar`:

    ``` {#10ec02c1-e3b3-80b0-be42-da84b3476b24 .code}
    void ft_putchar(char c)
    {
        write(1, &c, 1);
    }
    ```

    La función `ft_putchar` toma un carácter `c` y lo escribe en la
    salida estándar utilizando la función `write`.

```{=html}
<!-- -->
```
3.  **Definición de la función** `rotone`:

    ``` {#10ec02c1-e3b3-806a-9287-ecfb4a0eca37 .code}
    void rotone(char *s
    ```

    La función `rotone` toma un puntero a una cadena de caracteres
    (`char *s`) y aplica una transformación a cada carácter de la
    cadena.

```{=html}
<!-- -->
```
4.  **Bucle** `while` **para recorrer la cadena**:

    ``` {#10ec02c1-e3b3-806a-b9d3-e41f121e3055 .code}
    while (*s)
    ```

    Este bucle recorre cada carácter de la cadena proporcionada como
    argumento hasta llegar al final de la cadena (`'\0'`).

```{=html}
<!-- -->
```
5.  **Transformación de cada carácter**:

    ``` {#10ec02c1-e3b3-80ad-98a5-eb63860b0d35 .code}
    if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
        ft_putchar(*s + 1);
    else if (*s == 'Z' || *s == 'z')
        ft_putchar(*s - 25);
    else
        ft_putchar(*s);
    ```

    -   Si el carácter es una letra mayúscula entre 'A' y 'Y' o una
        letra minúscula entre 'a' y 'y', se incrementa en 1 su valor
        ASCII, transformándolo en la siguiente letra del alfabeto.

    ```{=html}
    <!-- -->
    ```
    -   Si el carácter es 'Z' o 'z', se transforma en 'A' o 'a'
        respectivamente, restando 25 a su valor ASCII.

    ```{=html}
    <!-- -->
    ```
    -   Si el carácter no es una letra, se imprime tal cual.

```{=html}
<!-- -->
```
6.  **Incremento del puntero** `s`:

    ``` {#10ec02c1-e3b3-808b-a8ba-f96370aacce6 .code}
    ++s
    ```

    Se incrementa el puntero `s` para pasar al siguiente carácter de la
    cadena.

```{=html}
<!-- -->
```
7.  **Función principal** `main`:

    ``` {#10ec02c1-e3b3-80e3-8370-f23c7d345bee .code}
    int main(int ac, char **av)
    ```

    La función principal recibe dos parámetros: `ac` (el número de
    argumentos) y `av` (una matriz de cadenas que contiene los
    argumentos).

```{=html}
<!-- -->
```
8.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-8016-9286-eed21515aaef .code}
    if (ac == 2)
        rotone(av[1]);
    ```

    Se verifica que el programa reciba exactamente un argumento
    adicional (además del nombre del programa). Si es así, se llama a la
    función `rotone` con el argumento proporcionado.

```{=html}
<!-- -->
```
9.  **Impresión de un salto de línea**:

    ``` {#10ec02c1-e3b3-80f6-9aff-cc2d38683fec .code}
    ft_putchar('\n')
    ```

    Después de procesar toda la cadena, se imprime un salto de línea
    para finalizar la salida.

```{=html}
<!-- -->
```
10. **Retorno de la función** `main`:

    ``` {#10ec02c1-e3b3-806e-8166-f8653eb91361 .code}
    return (0);
    ```

    La función `main` retorna 0, indicando que el programa ha terminado
    correctamente.

Este programa toma una cadena como argumento y aplica una transformación
ROT1 a cada letra, es decir, desplaza cada letra una posición en el
alfabeto.

------------------------------------------------------------------------

search\_and\_replace {#10ec02c1-e3b3-80f4-8e30-f62aaf996e1c}
--------------------

> Assignment name : search\_and\_replace\
> Expected files : search\_and\_replace.c\
> Allowed functions: write, exit\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program called search\_and\_replace that takes 3 arguments,
> the first\
> arguments is a string in which to replace a letter (2nd argument) by\
> another one (3rd argument).\
> \
> If the number of arguments is not 3, just display a newline.\
> \
> If the second argument is not contained in the first one (the string)\
> then the program simply rewrites the string followed by a newline.\
> \
> Examples:\
> \$\>./search\_and\_replace \"Papache est un sabre\" \"a\" \"o\"\
> Popoche est un sobre\
> \$\>./search\_and\_replace \"zaz\" \"art\" \"zul\" \| cat -e\
> \$\
> \$\>./search\_and\_replace \"zaz\" \"r\" \"u\" \| cat -e\
> zaz\$\
> \$\>./search\_and\_replace \"jacob\" \"a\" \"b\" \"c\" \"e\" \| cat
> -e\
> \$\
> \$\>./search\_and\_replace \"ZoZ eT Dovid oiME le METol.\" \"o\" \"a\"
> \| cat -e\
> ZaZ eT David aiME le METal.\$\
> \$\>./search\_and\_replace \"wNcOre Un ExEmPle Pas Facilw a Ecrirw \"
> \"w\" \"e\" \| cat -e\
> eNcOre Un ExEmPle Pas Facile a Ecrire \$\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa llamado `search_and_replace` que
    tome tres argumentos: una cadena de texto, un carácter a buscar y un
    carácter de reemplazo. El programa debe reemplazar todas las
    ocurrencias del segundo argumento en la cadena con el tercero.

```{=html}
<!-- -->
```
-   **Condiciones de error:**
    -   Si no se proporcionan exactamente tres argumentos, se muestra un
        salto de línea.

    ```{=html}
    <!-- -->
    ```
    -   Si el segundo argumento (el carácter a buscar) no se encuentra
        en la cadena, se muestra la cadena original sin cambios seguida
        de un salto de línea.
:::

``` {#10ec02c1-e3b3-8064-94bf-e9449811e0af .code}
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 4 && !argv[2][1] && !argv[3][1])
    {
        while (argv[1][i]!='\0')
        {
            if (argv[1][i]==argv[2][0])
                argv[1][i] = argv[3][0];
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-800c-bf0b-e8df1c42f791 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la función `write`, que se
    utiliza para escribir datos en archivos, incluyendo la salida
    estándar.

```{=html}
<!-- -->
```
2.  **Función principal** `main`:

    ``` {#10ec02c1-e3b3-80da-9e25-c8ccf62a7176 .code}
    int main(int argc, char **argv)
    ```

    La función principal recibe dos parámetros: `argc` (el número de
    argumentos) y `argv` (una matriz de cadenas que contiene los
    argumentos).

```{=html}
<!-- -->
```
3.  **Declaración e inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-809c-a4b3-e5c834c20309 .code}
    int i = 0
    ```

    Se declara una variable entera `i` e inicializa a 0. Esta variable
    se utilizará para recorrer la cadena.

```{=html}
<!-- -->
```
4.  **Comprobación del número de argumentos y longitud de los
    argumentos**:

    ``` {#10ec02c1-e3b3-807b-8a18-e0e04ee4263f .code}
    if (argc == 4 && !argv[2][1] && !argv[3][1]
    ```

    -   Se verifica que el programa reciba exactamente tres argumentos
        adicionales (además del nombre del programa).

    ```{=html}
    <!-- -->
    ```
    -   Se comprueba que los argumentos `argv[2]` y `argv[3]` sean
        caracteres individuales (es decir, que su longitud sea 1).

```{=html}
<!-- -->
```
5.  **Bucle** `while` **para recorrer la cadena**:

    ``` {#10ec02c1-e3b3-800b-aff4-ccd9f6c50276 .code}
    while (argv[1][i] != '\0')
    ```

    Este bucle recorre cada carácter de la cadena proporcionada como
    primer argumento hasta llegar al final de la cadena (`'\0'`).

```{=html}
<!-- -->
```
6.  **Reemplazo de caracteres**:

    ``` {#10ec02c1-e3b3-80b4-b40d-fb0956715d2a .code}
    if (argv[1][i] == argv[2][0])
        argv[1][i] = argv[3][0];
    ```

    -   Si el carácter actual de la cadena es igual al carácter
        especificado en `argv[2]`, se reemplaza por el carácter
        especificado en `argv[3]`.

```{=html}
<!-- -->
```
7.  **Impresión del carácter actual**:

    ``` {#10ec02c1-e3b3-80e4-b94a-cac199b54142 .code}
    write(1, &argv[1][i], 1);
    ```

    Se utiliza la función `write` para imprimir el carácter actual (ya
    sea el original o el reemplazado).

```{=html}
<!-- -->
```
8.  **Incremento del índice** `i`:

    ``` {#10ec02c1-e3b3-809d-8d9e-dc743d060710 .code}
    i++;
    ```

    Se incrementa `i` para pasar al siguiente carácter de la cadena.

```{=html}
<!-- -->
```
9.  **Impresión de un salto de línea**:

    ``` {#10ec02c1-e3b3-80eb-ae65-fb3625fbb114 .code}
    write(1, "\n", 1)
    ```

    Después de procesar toda la cadena, se imprime un salto de línea
    para finalizar la salida.

Este programa toma una cadena como argumento y reemplaza todas las
ocurrencias de un carácter específico por otro carácter especificado.

------------------------------------------------------------------------

ulstr {#10ec02c1-e3b3-8009-b29b-d3d2aaaf279f}
-----

> Assignment name : ulstr\
> Expected files : ulstr.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes a string and reverses the case of all its
> letters.\
> Other characters remain unchanged.\
> \
> You must display the result followed by a \'\\n\'.\
> \
> If the number of arguments is not 1, the program displays \'\\n\'.\
> \
> Examples :\
> \
> \$\>./ulstr \"L\'eSPrit nE peUt plUs pRogResSer s\'Il staGne et sI
> peRsIsTent VAnIte et auto-justification.\" \| cat -e\
> l\'EspRIT Ne PEuT PLuS PrOGrESsER S\'iL STAgNE ET Si PErSiStENT vaNiTE
> ET AUTO-JUSTIFICATION.\$\
> \$\>./ulstr \"S\'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De
> coNNaiSSanCe. \" \| cat -e\
> s\'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE. \$\
> \$\>./ulstr \"3:21 Ba tOut moUn ki Ka di KE m\'en Ka fe fot\" \| cat
> -e\
> 3:21 bA ToUT MOuN KI kA DI ke M\'EN kA FE FOT\$\
> \$\>./ulstr \| cat -e\
> \$\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome una cadena de texto como
    entrada y convierta todas las letras mayúsculas en minúsculas y
    viceversa. Otros caracteres (números, símbolos, espacios) se
    mantienen sin cambios.

```{=html}
<!-- -->
```
-   **Salida:** El resultado se muestra seguido de un salto de línea.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento, el programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-80e7-a5af-e33112d6c4c9 .code}
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] -= 32;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] += 32;
            write(1, &argv[1][i], 1);
            i++;    
        }
    }
    write(1, "\n", 1);
}
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-80c4-b7bb-e1094d1b4f29 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la API del sistema operativo,
    incluyendo la función `write`.

```{=html}
<!-- -->
```
2.  **Definición de la función** `main`:

    ``` {#10ec02c1-e3b3-80e9-9c9a-e8737b479d9e .code}
    int main(int argc, char **argv)
    ```

    La función principal del programa. `argc` es el número de argumentos
    pasados al programa y `argv` es un array de cadenas de caracteres
    que contiene los argumentos.

```{=html}
<!-- -->
```
3.  **Inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-8085-b755-c77d3bf12a25 .code}
    int i = 0;
    ```

    Se declara e inicializa la variable `i` a 0. Esta variable se usará
    como índice para recorrer la cadena de caracteres.

```{=html}
<!-- -->
```
4.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-80ed-899c-ec9eb505bf31 .code}
    if (argc == 2)
    ```

    Se verifica que el programa ha recibido exactamente un argumento
    adicional (además del nombre del programa).

```{=html}
<!-- -->
```
5.  **Bucle** `while` **para recorrer la cadena**:

    ``` {#10ec02c1-e3b3-8042-b026-da5e2c832354 .code}
    while (argv[1][i] != '\0')
    ```

    Este bucle recorre cada carácter de la cadena pasada como argumento
    hasta encontrar el carácter nulo (`'\0'`), que indica el final de la
    cadena.

```{=html}
<!-- -->
```
6.  **Conversión de mayúsculas a minúsculas y viceversa**:

    ``` {#10ec02c1-e3b3-80d0-9354-ea16d88fe002 .code}
    if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        argv[1][i] -= 32;
    else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        argv[1][i] += 32;
    ```

    -   Si el carácter es una letra minúscula (`'a'` a `'z'`), se
        convierte a mayúscula restando 32 (valor ASCII de la diferencia
        entre mayúsculas y minúsculas).

    ```{=html}
    <!-- -->
    ```
    -   Si el carácter es una letra mayúscula (`'A'` a `'Z'`), se
        convierte a minúscula sumando 32.

```{=html}
<!-- -->
```
7.  **Escritura del carácter convertido**:

    ``` {#10ec02c1-e3b3-8085-8150-f4c3577f9513 .code}
    write(1, &argv[1][i], 1);
    ```

    Se escribe el carácter convertido en la salida estándar
    (generalmente la consola).

```{=html}
<!-- -->
```
8.  **Incremento del índice** `i`:

    ``` {#10ec02c1-e3b3-80ee-8099-cbdcfb9baa2f .code}
    i++;
    ```

    Se incrementa `i` para pasar al siguiente carácter de la cadena.

```{=html}
<!-- -->
```
9.  **Escritura de un salto de línea**:

    ``` {#10ec02c1-e3b3-80df-9651-f3c9304b36d1 .code}
    write(1, "\n", 1);
    ```

    Después de procesar toda la cadena, se escribe un salto de línea en
    la salida estándar.

Este programa toma una cadena pasada como argumento, invierte las
mayúsculas y minúsculas de cada letra, y luego imprime la cadena
resultante.

------------------------------------------------------------------------

Level 2 {#10ec02c1-e3b3-80c7-9b8c-f9530814e151}
=======

alpha\_mirror {#10ec02c1-e3b3-8021-ac13-e40b9898fd3a}
-------------

> Assignment name : alpha\_mirror\
> Expected files : alpha\_mirror.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program called alpha\_mirror that takes a string and displays
> this string\
> after replacing each alphabetical character by the opposite
> alphabetical\
> character, followed by a newline.\
> \
> \'a\' becomes \'z\', \'Z\' becomes \'A\'\
> \'d\' becomes \'w\', \'M\' becomes \'N\'\
> \
> and so on.\
> \
> Case is not changed.\
> \
> If the number of arguments is not 1, display only a newline.\
> \
> Examples:\
> \
> \$\>./alpha\_mirror \"abc\"\
> zyx\
> \$\>./alpha\_mirror \"My horse is Amazing.\" \| cat -e\
> Nb slihv rh Znzarmt.\$\
> \$\>./alpha\_mirror \| cat -e\
> \$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa llamado `alpha_mirror` que tome
    una cadena de texto como entrada y la muestre, reemplazando cada
    carácter alfabético por el carácter alfabético opuesto.

```{=html}
<!-- -->
```
-   **Reglas de reemplazo:**
    -   \'a\' se convierte en \'z\', \'Z\' se convierte en \'A\'.

    ```{=html}
    <!-- -->
    ```
    -   \'d\' se convierte en \'w\', \'M\' se convierte en \'N\', etc.

    ```{=html}
    <!-- -->
    ```
    -   El caso (mayúscula o minúscula) se mantiene.

```{=html}
<!-- -->
```
-   **Salida:** La salida será seguida por un salto de línea.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento, el programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-80f1-a069-ff0d5810f9a8 .code}
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while(argv[1][i]) 
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = ('a' + 'z') - argv[1][i];
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = ('A' + 'Z') - argv[1][i];
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write (1,"\n",1);
    return (0);
}       
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-80a2-83d0-dfda2441be95 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la API del sistema operativo,
    incluyendo la función `write`.

```{=html}
<!-- -->
```
2.  **Definición de la función** `main`:

    ``` {#10ec02c1-e3b3-804c-8fcd-da2ac55b1243 .code}
    int main(int argc, char **argv)
    ```

    La función principal del programa. `argc` es el número de argumentos
    pasados al programa y `argv` es un array de cadenas de caracteres
    que contiene los argumentos.

```{=html}
<!-- -->
```
3.  **Inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-80e4-ace2-ddab682ed05b .code}
    int i = 0
    ```

    Se declara e inicializa la variable `i` a 0. Esta variable se usará
    como índice para recorrer la cadena de caracteres.

```{=html}
<!-- -->
```
4.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-80d3-829f-f00c22ee635b .code}
    if (argc == 2
    ```

    Se verifica que el programa ha recibido exactamente un argumento
    adicional (además del nombre del programa).

```{=html}
<!-- -->
```
5.  **Bucle** `while` **para recorrer la cadena**:

    ``` {#10ec02c1-e3b3-8061-a7aa-ef431060e612 .code}
    while(argv[1][i])
    ```

    Este bucle recorre cada carácter de la cadena pasada como argumento
    hasta encontrar el carácter nulo (`'\0'`), que indica el final de la
    cadena.

```{=html}
<!-- -->
```
6.  **Conversión de letras minúsculas a su opuesto en el alfabeto**:

    ``` {#10ec02c1-e3b3-80c7-950a-f89f561f5e81 .code}
    if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
        argv[1][i] = ('a' + 'z') - argv[1][i]
    ```

    -   Si el carácter es una letra minúscula (`'a'` a `'z'`), se
        convierte a su opuesto en el alfabeto. Por ejemplo, `'a'` se
        convierte en `'z'`, `'b'` en `'y'`, etc. Esto se logra sumando
        los valores ASCII de `'a'` y `'z'` y restando el valor ASCII del
        carácter actual.

```{=html}
<!-- -->
```
7.  **Conversión de letras mayúsculas a su opuesto en el alfabeto**:

    ``` {#10ec02c1-e3b3-8089-96bf-dac8b88c0ee7 .code}
    else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        argv[1][i] = ('A' + 'Z') - argv[1][i];
    ```

    -   Si el carácter es una letra mayúscula (`'A'` a `'Z'`), se
        convierte a su opuesto en el alfabeto. Por ejemplo, `'A'` se
        convierte en `'Z'`, `'B'` en `'Y'`, etc. Esto se logra sumando
        los valores ASCII de `'A'` y `'Z'` y restando el valor ASCII del
        carácter actual.

```{=html}
<!-- -->
```
8.  **Escritura del carácter convertido**:

    ``` {#10ec02c1-e3b3-8088-8ccf-f25b8554053b .code}
    write(1, &argv[1][i], 1);
    ```

    Se escribe el carácter convertido en la salida estándar
    (generalmente la consola).

```{=html}
<!-- -->
```
9.  **Incremento del índice** `i`:

    ``` {#10ec02c1-e3b3-80e7-9ca9-f518c90a576a .code}
    i++;
    ```

    Se incrementa `i` para pasar al siguiente carácter de la cadena.

```{=html}
<!-- -->
```
10. **Escritura de un salto de línea**:

    ``` {#10ec02c1-e3b3-80eb-8037-d4ff1f686aa9 .code}
    write(1, "\n", 1)
    ```

    Después de procesar toda la cadena, se escribe un salto de línea en
    la salida estándar.

```{=html}
<!-- -->
```
11. **Retorno de la función** `main`:

    ``` {#10ec02c1-e3b3-807d-9fb4-fbee7cae1517 .code}
    return (0);
    ```

    El programa finaliza devolviendo 0, lo que indica que terminó
    correctamente.

Este programa toma una cadena pasada como argumento, convierte cada
letra a su opuesto en el alfabeto.

------------------------------------------------------------------------

camel\_to\_snake {#10ec02c1-e3b3-8008-97f3-df7fd5c80ec2}
----------------

> Assignment name : camel\_to\_snake\
> Expected files : camel\_to\_snake.c\
> Allowed functions: malloc, free, realloc, write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes a single string in lowerCamelCase format\
> and converts it into a string in snake\_case format.\
> \
> A lowerCamelCase string is a string where each word begins with a
> capital letter\
> except for the first one.\
> \
> A snake\_case string is a string where each word is in lower case,
> separated by\
> an underscore \"\_\".\
> \
> Examples:\
> \$\>./camel\_to\_snake \"hereIsACamelCaseWord\"\
> here\_is\_a\_camel\_case\_word\
> \$\>./camel\_to\_snake \"helloWorld\" \| cat -e\
> hello\_world\$\
> \$\>./camel\_to\_snake \| cat -e\
> \$\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome una cadena de texto en
    formato lowerCamelCase y la convierta en formato snake\_case.

```{=html}
<!-- -->
```
-   **Formato lowerCamelCase:** Cada palabra comienza con una letra
    mayúscula, excepto la primera.

```{=html}
<!-- -->
```
-   **Formato snake\_case:** Cada palabra está en minúscula, separada
    por un guion bajo \"\_\".

```{=html}
<!-- -->
```
-   **Salida:** La cadena convertida se muestra seguida de un salto de
    línea.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento, se muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-80a2-a53e-d6a4f320b0d7 .code}
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 65 && argv[1][i] <= 90)
            {
                argv[1][i] = argv[1][i] + 32;
                write (1, "_", 1);
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
```

1.  **Inclusión de la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-8043-a860-d337025accd1 .code}
    #include <unistd.h>
    ```

    Esta biblioteca proporciona acceso a la API del sistema operativo,
    incluyendo la función `write`.

```{=html}
<!-- -->
```
2.  **Definición de la función** `main`:

    ``` {#10ec02c1-e3b3-8075-bcc5-ce787b4f2743 .code}
    int main(int argc, char **argv)
    ```

    La función principal del programa. `argc` es el número de argumentos
    pasados al programa y `argv` es un array de cadenas de caracteres
    que contiene los argumentos.

```{=html}
<!-- -->
```
3.  **Inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-80aa-98a3-da7c6d490f00 .code}
    int i = 0;
    ```

    Se declara e inicializa la variable `i` a 0. Esta variable se usará
    como índice para recorrer la cadena de caracteres.

```{=html}
<!-- -->
```
4.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-80d5-ac30-c1852d18b0ec .code}
    if (argc == 2)
    ```

    Se verifica que el programa ha recibido exactamente un argumento
    adicional (además del nombre del programa).

```{=html}
<!-- -->
```
5.  **Bucle** `while` **para recorrer la cadena**:

    ``` {#10ec02c1-e3b3-80b8-9b55-fc6915ff7780 .code}
    while(argv[1][i])
    ```

    Este bucle recorre cada carácter de la cadena pasada como argumento
    hasta encontrar el carácter nulo (`'\0'`), que indica el final de la
    cadena.

```{=html}
<!-- -->
```
6.  **Conversión de letras mayúsculas a minúsculas**:

    ``` {#10ec02c1-e3b3-8004-924f-e50c3adecbc4 .code}
    if(argv[1][i] >= 65 && argv[1][i] <= 90)
    {
        argv[1][i] = argv[1][i] + 32;
        write (1, "_", 1);
    }
    ```

    -   Si el carácter es una letra mayúscula (cuyo valor ASCII está
        entre 65 y 90), se convierte a minúscula sumando 32 al valor
        ASCII del carácter.

    ```{=html}
    <!-- -->
    ```
    -   Además, se escribe un guion bajo (`_`) en la salida estándar
        para indicar que se ha realizado una conversión.

```{=html}
<!-- -->
```
7.  **Escritura del carácter**:

    ``` {#10ec02c1-e3b3-8053-a266-e483711c3e61 .code}
    write(1, &argv[1][i], 1);
    ```

    Se escribe el carácter (convertido o no) en la salida estándar
    (generalmente la consola).

```{=html}
<!-- -->
```
8.  **Incremento del índice** `i`:

    ``` {#10ec02c1-e3b3-80f7-8d80-c685d6cbcb24 .code}
    i++;
    ```

    Se incrementa `i` para pasar al siguiente carácter de la cadena.

```{=html}
<!-- -->
```
9.  **Escritura de un salto de línea**:

    ``` {#10ec02c1-e3b3-8091-bc0b-d9db617ad53a .code}
    write (1, "\n", 1);
    ```

    Después de procesar toda la cadena, se escribe un salto de línea en
    la salida estándar.

```{=html}
<!-- -->
```
10. **Retorno de la función** `main`:

    ``` {#10ec02c1-e3b3-80c2-9275-d568bb59536d .code}
    return (0)
    ```

    El programa finaliza devolviendo 0, lo que indica que terminó
    correctamente.

Este programa toma una cadena pasada como argumento, convierte las
letras mayúsculas a minúsculas (añadiendo un guion bajo después de cada
conversión), y luego imprime la cadena resultante.

------------------------------------------------------------------------

do\_op {#10ec02c1-e3b3-8091-b21e-eb27961422b4}
------

> Assignment name : do\_op\
> Expected files : \*.c, \*.h\
> Allowed functions: atoi, printf, write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes three strings:\
> - The first and the third one are representations of base-10 signed
> integers\
> that fit in an int.\
> - The second one is an arithmetic operator chosen from: + - \* / %\
> \
> The program must display the result of the requested arithmetic
> operation,\
> followed by a newline. If the number of parameters is not 3, the
> program\
> just displays a newline.\
> \
> You can assume the string have no mistakes or extraneous characters.
> Negative\
> numbers, in input or output, will have one and only one leading \'-\'.
> The\
> result of the operation fits in an int.\
> \
> Examples:\
> \
> \$\> ./do\_op \"123\" \"\*\" 456 \| cat -e\
> 56088\$\
> \$\> ./do\_op \"9828\" \"/\" 234 \| cat -e\
> 42\$\
> \$\> ./do\_op \"1\" \"+\" \"-43\" \| cat -e\
> -42\$\
> \$\> ./do\_op \| cat -e\
> \$\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome tres cadenas de texto
    como entrada:
    -   La primera y la tercera representan números enteros con signo en
        base 10 que caben en un tipo `int`.

    ```{=html}
    <!-- -->
    ```
    -   La segunda representa un operador aritmético (+, -, \*, /, %).

```{=html}
<!-- -->
```
-   **Operación:** El programa debe realizar la operación aritmética
    especificada y mostrar el resultado seguido de un salto de línea.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporcionan exactamente tres
    argumentos, el programa muestra un salto de línea.

```{=html}
<!-- -->
```
-   **Restricciones:**
    -   Se asume que las cadenas de entrada no tienen errores ni
        caracteres extraños.

    ```{=html}
    <!-- -->
    ```
    -   Los números negativos deben tener un solo signo menos al
        principio.

    ```{=html}
    <!-- -->
    ```
    -   El resultado de la operación debe caber en un tipo `int`.
:::

``` {#10ec02c1-e3b3-807a-ba99-ffb1a99a4189 .code}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        if (argv[2][0] == '+')
            printf("%d", (atoi(argv[1]) + atoi(argv[3])));
        if (argv[2][0] == '-')
            printf("%d", (atoi(argv[1]) - atoi(argv[3])));
        if (argv[2][0] == '*')
            printf("%d", (atoi(argv[1]) * atoi(argv[3])));
        if (argv[2][0] == '/')
            printf("%d", (atoi(argv[1]) / atoi(argv[3])));
        if (argv[2][0] == '%')
            printf("%d", (atoi(argv[1]) % atoi(argv[3])));
    }
    printf("\n");
    return (0);
}
```

1.  **Inclusión de las bibliotecas** `stdio.h` **y** `stdlib.h`:

    ``` {#10ec02c1-e3b3-808f-86f9-ecd53ecd0469 .code}
    #include <stdio.h>#include <stdlib.h>
    ```

    -   `stdio.h` proporciona funciones de entrada y salida, como
        `printf`.

    ```{=html}
    <!-- -->
    ```
    -   `stdlib.h` proporciona funciones de utilidad general, como
        `atoi` (que convierte una cadena a un entero).

```{=html}
<!-- -->
```
2.  **Definición de la función** `main`:

    ``` {#10ec02c1-e3b3-80c6-a364-c5e515c27790 .code}
    int main(int argc, char *argv[])
    ```

    La función principal del programa. `argc` es el número de argumentos
    pasados al programa y `argv` es un array de cadenas de caracteres
    que contiene los argumentos.

```{=html}
<!-- -->
```
3.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-8061-aa85-e7972c0b35f2 .code}
    if (argc == 4)
    ```

    Se verifica que el programa ha recibido exactamente tres argumentos
    adicionales (además del nombre del programa).

```{=html}
<!-- -->
```
4.  **Operaciones aritméticas según el operador**:
    -   **Suma**:

        ``` {#10ec02c1-e3b3-80a5-a94d-d37d5f957e14 .code}
        if (argv[2][0] == '+')
            printf("%d", (atoi(argv[1]) + atoi(argv[3])))
        ```

        Si el segundo argumento es un `+`, se suman los valores de los
        primeros y terceros argumentos convertidos a enteros con `atoi`.

    ```{=html}
    <!-- -->
    ```
    -   **Resta**:

        ``` {#10ec02c1-e3b3-80af-95ac-d1a8fb468f39 .code}
        if (argv[2][0] == '-')
            printf("%d", (atoi(argv[1]) - atoi(argv[3])));
        ```

        Si el segundo argumento es un `-`, se restan los valores de los
        primeros y terceros argumentos.

    ```{=html}
    <!-- -->
    ```
    -   **Multiplicación**:

        ``` {#10ec02c1-e3b3-80f6-8c6f-dcd721fe7ff8 .code}
        if (argv[2][0] == '*')
            printf("%d", (atoi(argv[1]) * atoi(argv[3])));
        ```

        Si el segundo argumento es un `*`, se multiplican los valores de
        los primeros y terceros argumentos.

    ```{=html}
    <!-- -->
    ```
    -   **División**:

        ``` {#10ec02c1-e3b3-8008-9168-cef188056b1c .code}
        if (argv[2][0] == '/')
            printf("%d", (atoi(argv[1]) / atoi(argv[3])));
        ```

        Si el segundo argumento es un `/`, se dividen los valores de los
        primeros y terceros argumentos.

    ```{=html}
    <!-- -->
    ```
    -   **Módulo**:

        ``` {#10ec02c1-e3b3-80e7-be29-e05468f00d99 .code}
        if (argv[2][0] == '%')
            printf("%d", (atoi(argv[1]) % atoi(argv[3])));
        ```

        Si el segundo argumento es un `%`, se calcula el módulo de los
        valores de los primeros y terceros argumentos.

```{=html}
<!-- -->
```
5.  **Escritura de un salto de línea**:

    ``` {#10ec02c1-e3b3-801d-b603-d90fe394f95a .code}
    printf("\n");
    ```

    Después de realizar la operación aritmética correspondiente, se
    escribe un salto de línea en la salida estándar.

```{=html}
<!-- -->
```
6.  **Retorno de la función** `main`:

    ``` {#10ec02c1-e3b3-803c-9a3c-d8cc931f04a1 .code}
    return (0);
    ```

    El programa finaliza devolviendo 0, lo que indica que terminó
    correctamente.

Este programa toma tres argumentos: dos números y un operador aritmético
(`+`, `-`, `*`, `/`, `%`). Realiza la operación indicada entre los dos
números y muestra el resultado.

------------------------------------------------------------------------

ft\_atoi {#10ec02c1-e3b3-8015-a022-d9766a329ba9}
--------

> Assignment name : ft\_atoi\
> Expected files : ft\_atoi.c\
> Allowed functions: None\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that converts the string argument str to an integer
> (type int)\
> and returns it.\
> \
> It works much like the standard atoi(const char \*str) function, see
> the man.\
> \
> Your function must be declared as follows:\
> \
> int ft\_atoi(const char \*str);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que convierta una cadena de texto
    a un número entero (tipo `int`).

```{=html}
<!-- -->
```
-   **Comportamiento:** La función debe funcionar de manera similar a la
    función estándar `atoi(const char *str)`.
:::

``` {#10ec02c1-e3b3-80da-b37f-d545eae121e1 .code}
int    ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;

    while (*str == ' ' || (*str >= 9 && *str <= 13))
            str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (sign * result);
}
```

1.  **Definición de la función** `ft_atoi`:

    ``` {#10ec02c1-e3b3-8067-a08f-d07a8f27acd2 .code}
    int ft_atoi(char *str)
    ```

    Esta función convierte una cadena de caracteres (`str`) en un número
    entero. Devuelve el número entero resultante.

```{=html}
<!-- -->
```
2.  **Inicialización de variables**:

    ``` {#10ec02c1-e3b3-8016-b1e4-f6c50cf47208 .code}
    int result = 0;
    int sign = 1;
    ```

    -   `result` se inicializa a 0 y almacenará el número entero
        resultante.

    ```{=html}
    <!-- -->
    ```
    -   `sign` se inicializa a 1 y almacenará el signo del número
        (positivo o negativo).

```{=html}
<!-- -->
```
3.  **Saltarse los espacios en blanco y caracteres de control**:

    ``` {#10ec02c1-e3b3-80d7-be8d-ecdcc4f600d7 .code}
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    ```

    Este bucle `while` avanza el puntero `str` para saltarse cualquier
    espacio en blanco (`' '`) o caracteres de control (códigos ASCII del
    9 al 13, que incluyen tabulaciones y saltos de línea).

```{=html}
<!-- -->
```
4.  **Determinación del signo**:

    ``` {#10ec02c1-e3b3-80e6-93d0-f3172a5cd9e2 .code}
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    ```

    -   Si el carácter actual es un `'-'`, se establece `sign` a -1 para
        indicar que el número es negativo.

    ```{=html}
    <!-- -->
    ```
    -   Si el carácter actual es un `'-'` o un `'+'`, se avanza el
        puntero `str` para saltarse el signo.

```{=html}
<!-- -->
```
5.  **Conversión de caracteres numéricos a entero**:

    ``` {#10ec02c1-e3b3-80cf-a054-e289d3f92935 .code}
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    ```

    Este bucle `while` convierte cada carácter numérico en su valor
    entero correspondiente y lo acumula en `result`:

    -   `str - '0'` convierte el carácter numérico a su valor entero.

    ```{=html}
    <!-- -->
    ```
    -   `result = result * 10 + *str - '0'` actualiza `result`
        multiplicando el valor actual por 10 y sumando el nuevo dígito.

    ```{=html}
    <!-- -->
    ```
    -   `str++` avanza el puntero al siguiente carácter.

```{=html}
<!-- -->
```
6.  **Devolución del resultado con el signo adecuado**:

    ``` {#10ec02c1-e3b3-8005-9062-eea646d0bedd .code}
    return (sign * result);
    ```

    Finalmente, la función devuelve el resultado multiplicado por
    `sign`, lo que asegura que el número tenga el signo correcto
    (positivo o negativo).

Este programa toma una cadena de caracteres que representa un número y
la convierte en un entero, manejando correctamente los espacios en
blanco iniciales y el signo del número.

------------------------------------------------------------------------

ft\_strcmp {#10ec02c1-e3b3-80c2-8cac-cbf84c74347f}
----------

> Assignment name : ft\_strcmp\
> Expected files : ft\_strcmp.c\
> Allowed functions:\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Reproduce the behavior of the function strcmp (man strcmp).\
> \
> Your function must be declared as follows:\
> \
> int ft\_strcmp(char \*s1, char \*s2);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Reproduce el comportamiento de la función `strcmp` de
    la biblioteca estándar de C.
:::

``` {#10ec02c1-e3b3-8078-91e2-f3374116e802 .code}
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}   
```

1.  **Inclusión de la biblioteca estándar**:

    ``` {#10ec02c1-e3b3-808b-882c-d88971234ece .code}
    #include <stdio.h>
    ```

    Esto incluye la biblioteca estándar de entrada y salida en C,
    necesaria para funciones como `printf` y `scanf`.

```{=html}
<!-- -->
```
2.  **Definición de la función** `ft_strcmp`:

    ``` {#10ec02c1-e3b3-8012-8065-dfeca5eb31ad .code}
    int ft_strcmp(char *s1, char *s2)
    ```

    Esta función toma dos punteros a caracteres (`char *s1` y
    `char *s2`), que representan dos cadenas de caracteres (strings).

```{=html}
<!-- -->
```
3.  **Inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-807b-a28c-f987bfb9c81d .code}
    int i = 0;
    ```

    Se inicializa una variable entera `i` a 0. Esta variable se usará
    como índice para recorrer las cadenas.

```{=html}
<!-- -->
```
4.  **Bucle** `while`:

    ``` {#10ec02c1-e3b3-802b-832b-f74f69cd39f2 .code}
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    ```

    Este bucle recorre ambas cadenas carácter por carácter mientras:

    -   `s1[i]` no sea el carácter nulo (`'\0'`), que indica el final de
        la cadena.

    ```{=html}
    <!-- -->
    ```
    -   `s2[i]` no sea el carácter nulo (`'\0'`).

    ```{=html}
    <!-- -->
    ```
    -   Los caracteres en la posición `i` de ambas cadenas sean iguales
        (`s1[i] == s2[i]`).

    Si todas estas condiciones se cumplen, el índice `i` se incrementa
    para comparar el siguiente par de caracteres.

```{=html}
<!-- -->
```
5.  **Retorno de la diferencia**:

    ``` {#10ec02c1-e3b3-80c7-95e8-fc7d0308a059 .code}
    return (s1[i] - s2[i]);
    ```

    Cuando el bucle termina, la función retorna la diferencia entre los
    caracteres en la posición `i` de las dos cadenas. Si las cadenas son
    iguales hasta el final, la diferencia será 0. Si no, la diferencia
    será un valor positivo o negativo dependiendo de los caracteres que
    difieren.

Esta función es una implementación básica de `strcmp`, que compara dos
cadenas de caracteres y devuelve un valor basado en la diferencia entre
los primeros caracteres diferentes que encuentra.

------------------------------------------------------------------------

ft\_strcspn {#10ec02c1-e3b3-8070-99d1-cd1926b49967}
-----------

> Assignment name : ft\_strcspn\
> Expected files : ft\_strcspn.c\
> Allowed functions: None\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Reproduce exactly the behavior of the function strcspn\
> (man strcspn).\
> \
> The function should be prototyped as follows:\
> \
> size\_t ft\_strcspn(const char \*s, const char \*reject);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Reproduce exactamente el comportamiento de la función
    `strcspn` de la biblioteca estándar de C.
:::

``` {#10ec02c1-e3b3-80ee-ac88-d4b7cf68384b .code}
#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

    while (s[i] != '\0')
    {
    j = 0;
        while (reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
```

1.  **Inclusión de la biblioteca estándar**:

    ``` {#10ec02c1-e3b3-803d-adb6-c0ea37f8a728 .code}
    #include <stdio.h>
    ```

    Esto incluye la biblioteca estándar de entrada y salida en C,
    necesaria para funciones como `printf` y `scanf`.

```{=html}
<!-- -->
```
2.  **Definición de la función** `ft_strcspn`:

    ``` {#10ec02c1-e3b3-80a4-aedb-e38e281f40d5 .code}
    size_t ft_strcspn(const char *s, const char *reject
    ```

    Esta función toma dos punteros a caracteres (`const char *s` y
    `const char *reject`), que representan dos cadenas de caracteres
    (strings). Devuelve un valor de tipo `size_t`, que es un tipo de
    dato adecuado para representar tamaños y conteos.

```{=html}
<!-- -->
```
3.  **Inicialización de las variables** `i` **y** `j`:

    ``` {#10ec02c1-e3b3-80de-bb1d-c82f35c6a549 .code}
    int i = 0;
    int j = 0;
    ```

    Se inicializan dos variables enteras `i` y `j` a 0. Estas variables
    se usarán como índices para recorrer las cadenas.

```{=html}
<!-- -->
```
4.  **Bucle** `while` **externo**:

    ``` {#10ec02c1-e3b3-809a-8e2a-fe692cb91121 .code}
    while (s[i] != '\0')
    ```

    Este bucle recorre la cadena `s` carácter por carácter mientras
    `s[i]` no sea el carácter nulo (`'\0'`), que indica el final de la
    cadena.

```{=html}
<!-- -->
```
5.  **Reinicialización de** `j`:

    ``` {#10ec02c1-e3b3-80f4-8774-fcb8ff55058c .code}
    j = 0;
    ```

    Antes de entrar en el bucle interno, `j` se reinicializa a 0 para
    empezar a recorrer la cadena `reject` desde el principio.

```{=html}
<!-- -->
```
6.  **Bucle** `while` **interno**:

    ``` {#10ec02c1-e3b3-8092-8be9-c681a3155ca0 .code}
    while (reject[j] != '\0')
    ```

    Este bucle recorre la cadena `reject` carácter por carácter mientras
    `reject[j]` no sea el carácter nulo (`'\0'`).

```{=html}
<!-- -->
```
7.  **Comparación de caracteres**:

    ``` {#10ec02c1-e3b3-8010-8c5c-dee257d9fac2 .code}
    if (s[i] == reject[j])
        return (i);
    ```

    Si el carácter actual de `s` (`s[i]`) es igual al carácter actual de
    `reject` (`reject[j]`), la función retorna el valor de `i`, que es
    la posición del primer carácter en `s` que coincide con algún
    carácter en `reject`.

```{=html}
<!-- -->
```
8.  **Incremento de** `j`:

    ``` {#10ec02c1-e3b3-80bc-92b3-dd55d8b8d69e .code}
    j++;
    ```

    Si no se encuentra una coincidencia, `j` se incrementa para comparar
    el siguiente carácter de `reject`.

```{=html}
<!-- -->
```
9.  **Incremento de** `i`:

    ``` {#10ec02c1-e3b3-8077-80ef-f9e359633949 .code}
    i++;
    ```

    Si se ha recorrido toda la cadena `reject` sin encontrar
    coincidencias, `i` se incrementa para comparar el siguiente carácter
    de `s`.

```{=html}
<!-- -->
```
10. **Retorno del valor de** `i`:

    ``` {#10ec02c1-e3b3-8080-a22e-fc167b442f9e .code}
    return (i);
    ```

    Si se ha recorrido toda la cadena `s` sin encontrar ningún carácter
    que coincida con alguno en `reject`, la función retorna el valor de
    `i`, que será la longitud de la cadena `s`.

Esta función es una implementación de `strcspn`, que calcula la longitud
del segmento inicial de `s` que no contiene ningún carácter de `reject`.

------------------------------------------------------------------------

ft\_strdup {#10ec02c1-e3b3-80af-9e8b-ed46b366d4df}
----------

> Assignment name : ft\_strdup\
> Expected files : ft\_strdup.c\
> Allowed functions: malloc\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Reproduce the behavior of the function strdup (man strdup).\
> \
> Your function must be declared as follows:\
> \
> char \*ft\_strdup(char \*src);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Reproduce el comportamiento de la función `strdup` de
    la biblioteca estándar de C.
:::

``` {#10ec02c1-e3b3-80a1-90a9-da359609ad58 .code}
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int length = 0;
    char    *strcpy;

    while (src[length])
        length++;
    strcpy = malloc(sizeof(*strcpy) * (length + 1));
    if (strcpy != NULL)
    {
        while (src[i])
        {
            strcpy[i] = src[i];
            i++;
        }
        strcpy[i] = '\0';
    }
    return (strcpy);
}
```

1.  **Inclusión de la biblioteca estándar**:

    ``` {#10ec02c1-e3b3-8009-8b14-fe15f49fc60c .code}
    #include <stdlib.h>
    ```

    Esto incluye la biblioteca estándar de utilidades en C, necesaria
    para funciones como `malloc` y `free`.

```{=html}
<!-- -->
```
2.  **Definición de la función** `ft_strdup`:

    ``` {#10ec02c1-e3b3-8048-b405-c7b10d366a5a .code}
    char *ft_strdup(char *src
    ```

    Esta función toma un puntero a un carácter (`char *src`), que
    representa una cadena de caracteres (string), y devuelve un puntero
    a un nuevo string que es una copia del original.

```{=html}
<!-- -->
```
3.  **Inicialización de las variables** `i` **y** `length`:

    ``` {#10ec02c1-e3b3-80df-9e0a-c15de45d4797 .code}
    int i = 0;
    int length = 0;
    ```

    Se inicializan dos variables enteras `i` y `length` a 0. `i` se
    usará como índice para recorrer las cadenas, y `length` se usará
    para almacenar la longitud de la cadena `src`.

```{=html}
<!-- -->
```
4.  **Cálculo de la longitud de** `src`:

    ``` {#10ec02c1-e3b3-804f-9096-df23a3e101ca .code}
    while (src[length])
        length++;
    ```

    Este bucle recorre la cadena `src` carácter por carácter hasta
    encontrar el carácter nulo (`'\0'`), incrementando `length` en cada
    iteración para contar la longitud de la cadena.

```{=html}
<!-- -->
```
5.  **Asignación de memoria para la nueva cadena**:

    ``` {#10ec02c1-e3b3-8078-8275-e3b985c632ae .code}
    strcpy = malloc(sizeof(*strcpy) * (length + 1));
    ```

    Se asigna memoria suficiente para almacenar una copia de la cadena
    `src`, incluyendo el carácter nulo al final. `sizeof(*strcpy)`
    devuelve el tamaño de un carácter, y `length + 1` es el número de
    caracteres necesarios (la longitud de `src` más uno para el carácter
    nulo).

```{=html}
<!-- -->
```
6.  **Verificación de la asignación de memoria**:

    ``` {#10ec02c1-e3b3-8080-a8d1-c6663996d658 .code}
    if (strcpy != NULL
    ```

    Se verifica si la asignación de memoria fue exitosa. Si `strcpy` no
    es `NULL`, significa que la memoria fue asignada correctamente.

```{=html}
<!-- -->
```
7.  **Copia de la cadena** `src` **a** `strcpy`:

    ``` {#10ec02c1-e3b3-8094-887b-e0eedd93bf61 .code}
    while (src[i])
    {
        strcpy[i] = src[i];
        i++;
    }
    ```

    Este bucle recorre la cadena `src` carácter por carácter, copiando
    cada carácter a la nueva cadena `strcpy`. El índice `i` se
    incrementa en cada iteración.

```{=html}
<!-- -->
```
8.  **Añadir el carácter nulo al final de** `strcpy`:

    ``` {#10ec02c1-e3b3-80c1-beca-f3722473e555 .code}
    strcpy[i] = '\0'
    ```

    Después de copiar todos los caracteres de `src`, se añade el
    carácter nulo (`'\0'`) al final de `strcpy` para marcar el final de
    la cadena.

```{=html}
<!-- -->
```
9.  **Retorno de la nueva cadena**:

    ``` {#10ec02c1-e3b3-8026-836f-eea238ee25d9 .code}
    return (strcpy);
    ```

    La función retorna el puntero a la nueva cadena `strcpy`, que es una
    copia de `src`.

Esta función es una implementación de `strdup`, que crea una copia
duplicada de una cadena de caracteres, asignando memoria dinámica para
la nueva cadena.

------------------------------------------------------------------------

ft\_strpbrk {#10ec02c1-e3b3-809a-ab9d-e614827f8dc6}
-----------

> Assignment name : ft\_strpbrk\
> Expected files : ft\_strpbrk.c\
> Allowed functions: None\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Reproduce exactly the behavior of the function strpbrk\
> (man strpbrk).\
> \
> The function should be prototyped as follows:\
> \
> char \*ft\_strpbrk(const char \*s1, const char \*s2);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Reproduce exactamente el comportamiento de la función
    `strpbrk` de la biblioteca estándar de C.
:::

``` {#10ec02c1-e3b3-80f8-8f43-e9d729762709 .code}
#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    
    if (!s1 || !s2)
        return (0);
    while(*s1)
    {
        i = 0;
        while(s2[i])
        {
            if(*s1 == s2[i])
                return (char *) s1;
            i++;
        }
        s1++;   
    }
    return (NULL);
}
```

1.  **Inclusión de las bibliotecas estándar**:

    ``` {#10ec02c1-e3b3-80fb-96f9-fe9eea50134d .code}
    #include <stdio.h>
    #include <string.h>
    ```

    Estas líneas incluyen las bibliotecas estándar de entrada y salida
    (`stdio.h`) y de manipulación de cadenas (`string.h`) en C.

```{=html}
<!-- -->
```
2.  **Definición de la función** `ft_strpbrk`:

    ``` {#10ec02c1-e3b3-800a-a620-eedf83772d0b .code}
    char *ft_strpbrk(const char *s1, const char *s2
    ```

    Esta función toma dos punteros a caracteres (`const char *s1` y
    `const char *s2`), que representan dos cadenas de caracteres
    (strings). Devuelve un puntero a un carácter.

```{=html}
<!-- -->
```
3.  **Inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-8064-8b20-cbed2ce78ca6 .code}
    int i = 0;
    ```

    Se inicializa una variable entera `i` a 0. Esta variable se usará
    como índice para recorrer la cadena `s2`.

```{=html}
<!-- -->
```
4.  **Verificación de punteros nulos**:

    ``` {#10ec02c1-e3b3-80dc-8570-c81bd3bf314e .code}
    if (!s1 || !s2)
        return (0);
    ```

    Se verifica si alguno de los punteros `s1` o `s2` es nulo. Si alguno
    lo es, la función retorna 0 (NULL).

```{=html}
<!-- -->
```
5.  **Bucle** `while` **externo**:

    ``` {#10ec02c1-e3b3-809e-a358-da70ed6ea282 .code}
    while(*s1)
    ```

    Este bucle recorre la cadena `s1` carácter por carácter mientras
    `*s1` no sea el carácter nulo (`'\0'`).

```{=html}
<!-- -->
```
6.  **Reinicialización de** `i`:

    ``` {#10ec02c1-e3b3-8017-bbe7-c0af8db006ef .code}
    i = 0;
    ```

    Antes de entrar en el bucle interno, `i` se reinicializa a 0 para
    empezar a recorrer la cadena `s2` desde el principio.

```{=html}
<!-- -->
```
7.  **Bucle** `while` **interno**:

    ``` {#10ec02c1-e3b3-80ce-86d9-f29750547510 .code}
    while(s2[i])
    ```

    Este bucle recorre la cadena `s2` carácter por carácter mientras
    `s2[i]` no sea el carácter nulo (`'\0'`).

```{=html}
<!-- -->
```
8.  **Comparación de caracteres**:

    ``` {#10ec02c1-e3b3-80f4-bc64-cca7bf51e223 .code}
    if(*s1 == s2[i])
        return (char *) s1;
    ```

    Si el carácter actual de `s1` (`*s1`) es igual al carácter actual de
    `s2` (`s2[i]`), la función retorna el puntero `s1` convertido a
    `char *`.

```{=html}
<!-- -->
```
9.  **Incremento de** `i`:

    ``` {#10ec02c1-e3b3-80ed-a1fd-c9a1a2853a24 .code}
    i++;
    ```

    Si no se encuentra una coincidencia, `i` se incrementa para comparar
    el siguiente carácter de `s2`.

```{=html}
<!-- -->
```
10. **Incremento de** `s1`:

    ``` {#10ec02c1-e3b3-80b7-8359-f695aa6a7bf1 .code}
    s1++;
    ```

    Si se ha recorrido toda la cadena `s2` sin encontrar coincidencias,
    `s1` se incrementa para comparar el siguiente carácter de `s1`.

```{=html}
<!-- -->
```
11. **Retorno de** `NULL`:

    ``` {#10ec02c1-e3b3-80b9-bbf9-f6c767783f73 .code}
    return (NULL);
    ```

    Si se ha recorrido toda la cadena `s1` sin encontrar ningún carácter
    que coincida con alguno en `s2`, la función retorna `NULL`.

Esta función es una implementación de `strpbrk`, que busca la primera
ocurrencia en la cadena `s1` de cualquier carácter de la cadena `s2` y
devuelve un puntero a esa posición. Si no encuentra ninguna
coincidencia, devuelve `NULL`.

------------------------------------------------------------------------

ft\_strrev {#10ec02c1-e3b3-8062-9430-f2196e9df844}
----------

> Assignment name : ft\_strrev\
> Expected files : ft\_strrev.c\
> Allowed functions:\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that reverses (in-place) a string.\
> \
> It must return its parameter.\
> \
> Your function must be declared as follows:\
> \
> char \*ft\_strrev(char \*str);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que invierta una cadena de texto
    en su lugar (modificando la cadena original).

```{=html}
<!-- -->
```
-   **Retorno:** La función debe devolver la cadena original modificada.
:::

``` {#10ec02c1-e3b3-8039-b797-c54c07e89908 .code}
char *ft_strrev(char *str)
{
    int i = -1;
    int length = 0;
    char temporary;

    while (str[length])
        length++;
    while (++i < length / 2)
    {
        temporary = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temporary;
    }
    return (str);
}
```

1.  **Definición de la función** `ft_strrev`:

    ``` {#10ec02c1-e3b3-80f2-b21e-ebba623c913c .code}
    char *ft_strrev(char *str)
    ```

    Esta función toma un puntero a un carácter (`char *str`), que
    representa una cadena de caracteres (string), y devuelve un puntero
    a la misma cadena, pero invertida.

```{=html}
<!-- -->
```
2.  **Inicialización de las variables** `i` **y** `length`:

    ``` {#10ec02c1-e3b3-8062-ad3e-fb401d38f926 .code}
    int i = -1;
    int length = 0;
    char temporary;
    ```

    Se inicializan dos variables enteras `i` a -1 y `length` a 0. `i` se
    usará como índice para recorrer la cadena, y `length` se usará para
    almacenar la longitud de la cadena. `temporary` es una variable de
    tipo `char` que se usará para intercambiar caracteres.

```{=html}
<!-- -->
```
3.  **Cálculo de la longitud de** `str`:

    ``` {#10ec02c1-e3b3-806f-a802-d5acc906d0f1 .code}
    while (str[length])
        length++;
    ```

    Este bucle recorre la cadena `str` carácter por carácter hasta
    encontrar el carácter nulo (`'\0'`), incrementando `length` en cada
    iteración para contar la longitud de la cadena.

```{=html}
<!-- -->
```
4.  **Bucle** `while` **para invertir la cadena**:

    ``` {#10ec02c1-e3b3-8045-9172-fc19ec03fa21 .code}
    while (++i < length / 2)
    ```

    Este bucle recorre la mitad de la cadena `str` (hasta `length / 2`),
    incrementando `i` en cada iteración.

```{=html}
<!-- -->
```
5.  **Intercambio de caracteres**:

    ``` {#10ec02c1-e3b3-8002-9651-f7850e921557 .code}
    temporary = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temporary
    ```

    Dentro del bucle, se intercambian los caracteres en las posiciones
    `i` y `length - 1 - i`:

    -   `temporary` almacena temporalmente el carácter en la posición
        `i`.

    ```{=html}
    <!-- -->
    ```
    -   `str[i]` se asigna el carácter en la posición `length - 1 - i`.

    ```{=html}
    <!-- -->
    ```
    -   `str[length - 1 - i]` se asigna el valor almacenado en
        `temporary`.

```{=html}
<!-- -->
```
6.  **Retorno de la cadena invertida**:

    ``` {#10ec02c1-e3b3-805f-9236-d76bda939728 .code}
    return (str)
    ```

    La función retorna el puntero a la cadena `str`, que ahora está
    invertida.

Esta función invierte la cadena de caracteres dada, intercambiando los
caracteres desde los extremos hacia el centro.

------------------------------------------------------------------------

ft\_strspn {#10ec02c1-e3b3-802f-b1cd-fee7ce58fa75}
----------

> Assignment name : ft\_strspn\
> Expected files : ft\_strspn.c\
> Allowed functions: None\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Reproduce exactly the behavior of the strspn function\
> (man strspn).\
> \
> The function should be prototyped as follows:\
> \
> size\_t ft\_strspn(const char \*s, const char \*accept);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Reproduce exactamente el comportamiento de la función
    `strspn` de la biblioteca estándar de C.
:::

``` {#10ec02c1-e3b3-80ca-b4c8-c6cac5c9a882 .code}
#include <string.h>

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return ((char *)s);
        ++s;
    }
    return (0);
}

size_t  ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;

    while (s[i] != '\0')
    {
        if (ft_strchr(accept, s[i]) == 0)
            break;
        ++i;
    }
    return (i);
}
```

**Función** `ft_strchr`

Esta función busca la primera aparición de un carácter en una cadena.

``` {#10ec02c1-e3b3-8011-a22d-d75d68de8986 .code}
char *ft_strchr(const char *s, int c)
{
    while (*s != '\0') // Mientras no lleguemos al final de la cadena
    {
        if (*s == c) // Si encontramos el carácter
            return ((char *)s); // Devolvemos un puntero a esa posición
        ++s; // Avanzamos al siguiente carácter
    }
    return (0); // Si no encontramos el carácter, devolvemos NULL
}
```

**Función** `ft_strspn`

Esta función calcula la longitud del segmento inicial de `s` que
consiste únicamente en caracteres presentes en `accept`.

``` {#10ec02c1-e3b3-80a3-86c6-f17877e5641d .code}
size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0; // Inicializamos el índice

    while (s[i] != '\0') // Mientras no lleguemos al final de la cadena
    {
        if (ft_strchr(accept, s[i]) == 0) // Si el carácter no está en `accept`
            break; // Salimos del bucle
        ++i; // Avanzamos al siguiente carácter
    }
    return (i); // Devolvemos la longitud del segmento inicial
}
```

Explicación paso a paso

1.  `ft_strchr`:
    -   Recorre la cadena `s` carácter por carácter.

    ```{=html}
    <!-- -->
    ```
    -   Si encuentra el carácter `c`, devuelve un puntero a esa posición
        en la cadena.

    ```{=html}
    <!-- -->
    ```
    -   Si llega al final de la cadena sin encontrar `c`, devuelve
        `NULL`.

```{=html}
<!-- -->
```
2.  `ft_strspn`:
    -   Inicializa un índice `i` en 0.

    ```{=html}
    <!-- -->
    ```
    -   Recorre la cadena `s` hasta encontrar un carácter que no esté en
        `accept`.

    ```{=html}
    <!-- -->
    ```
    -   Utiliza `ft_strchr` para verificar si cada carácter de `s` está
        en `accept`.

    ```{=html}
    <!-- -->
    ```
    -   Si encuentra un carácter que no está en `accept`, sale del
        bucle.

    ```{=html}
    <!-- -->
    ```
    -   Devuelve la longitud del segmento inicial de `s` que contiene
        solo caracteres de `accept`.

------------------------------------------------------------------------

inter {#10ec02c1-e3b3-809a-ab2e-ea6d561669b9}
-----

> Assignment name : inter\
> Expected files : inter.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes two strings and displays, without doubles,
> the\
> characters that appear in both strings, in the order they appear in
> the first\
> one.\
> \
> The display will be followed by a \\n.\
> \
> If the number of arguments is not 2, the program displays \\n.\
> \
> Examples:\
> \
> \$\>./inter \"padinton\" \"paqefwtdjetyiytjneytjoeyjnejeyj\" \| cat
> -e\
> padinto\$\
> \$\>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd \| cat -e\
> df6ewg4\$\
> \$\>./inter \"rien\" \"cette phrase ne cache rien\" \| cat -e\
> rien\$\
> \$\>./inter \| cat -e\
> \$\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome dos cadenas de texto como
    entrada y muestre, sin duplicados, los caracteres que aparecen en
    ambas cadenas, en el orden en que aparecen en la primera cadena.

```{=html}
<!-- -->
```
-   **Salida:** La salida será seguida por un salto de línea.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporcionan exactamente dos
    argumentos, el programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-8030-93f6-f7261d1443d6 .code}
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    unsigned char seen[256] = {0};
    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (!seen[(unsigned char)av[1][i]])
                    {
                        write(1, &av[1][i], 1);
                        seen[(unsigned char)av[1][i]] = 1;
                    }
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
```

1.  **Inclusión de la biblioteca**:

    ``` {#10ec02c1-e3b3-80be-9777-d42ffea56004 .code}
    #include <unistd.h>
    ```

    -   Incluye la biblioteca `unistd.h` que proporciona acceso a la
        función `write`.

```{=html}
<!-- -->
```
2.  **Función** `main`:

    ``` {#10ec02c1-e3b3-8044-9f54-e2045ad34030 .code}
    int main(int ac, char **av)
    ```

    -   Define la función principal que toma dos argumentos: el número
        de argumentos `ac` y una matriz de cadenas `av`.

```{=html}
<!-- -->
```
3.  **Declaración de variables**:

    ``` {#10ec02c1-e3b3-807c-94cc-d7673b3bf317 .code}
    int i;
    int j;
    unsigned char seen[256] = {0};
    ```

    -   Declara dos variables enteras `i` y `j` para usar como índices.

    ```{=html}
    <!-- -->
    ```
    -   Declara una matriz `seen` de 256 caracteres inicializada a 0
        para rastrear los caracteres ya impresos.

```{=html}
<!-- -->
```
4.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-80ce-ad61-d9bfa3b24039 .code}
    if (ac == 3)
    ```

    -   Verifica que se hayan pasado exactamente 3 argumentos (el nombre
        del programa y dos cadenas).

```{=html}
<!-- -->
```
5.  **Bucle externo**:

    ``` {#10ec02c1-e3b3-8094-9757-cf9e8764603f .code}
    i = 0;
    while (av[1][i])
    ```

    -   Recorre cada carácter de la primera cadena `av[1]`.

```{=html}
<!-- -->
```
6.  **Bucle interno**:

    ``` {#10ec02c1-e3b3-8062-8ccf-c0bd1ace4223 .code}
    j = 0;
    while (av[2][j])
    ```

    -   Recorre cada carácter de la segunda cadena `av[2]`.

```{=html}
<!-- -->
```
7.  **Comparación de caracteres**:

    ``` {#10ec02c1-e3b3-8046-8b8a-e0de9b5c1b14 .code}
    if (av[1][i] == av[2][j])
    ```

    -   Compara el carácter actual de `av[1]` con el carácter actual de
        `av[2]`.

```{=html}
<!-- -->
```
8.  **Verificación y escritura del carácter**:

    ``` {#10ec02c1-e3b3-802e-a129-e4cd51a4e9e8 .code}
    if (!seen[(unsigned char)av[1][i]])
    {
        write(1, &av[1][i], 1);
        seen[(unsigned char)av[1][i]] = 1;
    }
    ```

    -   Si el carácter no ha sido visto antes (`seen` es 0), lo escribe
        en la salida estándar y marca el carácter como visto.

```{=html}
<!-- -->
```
9.  **Salida del bucle interno**:

    ``` {#10ec02c1-e3b3-808a-bcfc-eac7694ba10f .code}
    break;
    ```

    -   Sale del bucle interno una vez que se encuentra una
        coincidencia.

```{=html}
<!-- -->
```
10. **Incremento de índices**:

    ``` {#10ec02c1-e3b3-8050-bf5a-fb553b55ea28 .code}
    j++;
    i++;
    ```

    -   Incrementa los índices `j` y `i` para continuar con los
        siguientes caracteres.

```{=html}
<!-- -->
```
11. **Escritura de nueva línea**:

    ``` {#10ec02c1-e3b3-80e4-a133-cf0ab3cf0a40 .code}
    write(1, "\n", 1);
    ```

    -   Escribe un carácter de nueva línea al final de la salida.

```{=html}
<!-- -->
```
12. **Retorno de la función**:

    ``` {#10ec02c1-e3b3-80d2-9650-c562b4e51264 .code}
    return (0)
    ```

    -   Finaliza la función `main` devolviendo 0.

Este programa imprime los caracteres comunes entre las dos cadenas
pasadas como argumentos, sin repetir caracteres.

------------------------------------------------------------------------

is\_power\_of\_2 {#10ec02c1-e3b3-8034-b549-cc5e13a5dc71}
----------------

> Assignment name : is\_power\_of\_2\
> Expected files : is\_power\_of\_2.c\
> Allowed functions: None\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that determines if a given number is a power of 2.\
> \
> This function returns 1 if the given number is a power of 2, otherwise
> it returns 0.\
> \
> Your function must be declared as follows:\
> \
> int is\_power\_of\_2(unsigned int n);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que determine si un número dado es
    una potencia de 2.

```{=html}
<!-- -->
```
-   **Retorno:** La función debe devolver 1 si el número es una potencia
    de 2, y 0 en caso contrario.
:::

``` {#10ec02c1-e3b3-8087-81b6-c087766af801 .code}
int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0;
}
```

1.  **Declaración de la función**:

    ``` {#10ec02c1-e3b3-8098-a5f7-f5eca846fe60 .code}
    int is_power_of_2(unsigned int n)
    ```

    -   Define una función llamada `is_power_of_2` que toma un argumento
        `n` de tipo `unsigned int` y devuelve un `int`.

```{=html}
<!-- -->
```
2.  **Comprobación si** `n` **es 0**:

    ``` {#10ec02c1-e3b3-80b4-96e1-eea00bc060e8 .code}
    if (n == 0)
        return 0;
    ```

    -   Si `n` es 0, la función devuelve 0 inmediatamente, ya que 0 no
        es una potencia de 2.

```{=html}
<!-- -->
```
3.  **Verificación de potencia de 2**:

    ``` {#10ec02c1-e3b3-8045-b9c9-d2d045f10238 .code}
    return (n & (n - 1)) == 0;
    ```

    -   Esta línea utiliza una operación bit a bit para verificar si `n`
        es una potencia de 2.

    ```{=html}
    <!-- -->
    ```
    -   La expresión `(n & (n - 1))` realiza una operación AND bit a bit
        entre `n` y `n-1`.

    ```{=html}
    <!-- -->
    ```
    -   Si `n` es una potencia de 2, esta operación resultará en 0. Esto
        se debe a que una potencia de 2 en binario tiene un solo bit en
        1, y restar 1 a una potencia de 2 convierte ese bit en 0 y todos
        los bits a la derecha en 1.

    ```{=html}
    <!-- -->
    ```
    -   Por ejemplo, si `n` es 4 (100 en binario), `n-1` es 3 (011 en
        binario). La operación AND entre 100 y 011 es 000.

    ```{=html}
    <!-- -->
    ```
    -   Si el resultado de `(n & (n - 1))` es 0, entonces `n` es una
        potencia de 2 y la función devuelve 1 (verdadero). Si no,
        devuelve 0 (falso).

Ejemplo

-   Para `n = 8` (1000 en binario):
    -   `n - 1 = 7` (0111 en binario)

    ```{=html}
    <!-- -->
    ```
    -   `n & (n - 1) = 1000 & 0111 = 0000`

    ```{=html}
    <!-- -->
    ```
    -   La función devuelve 1, indicando que 8 es una potencia de 2.

```{=html}
<!-- -->
```
-   Para `n = 10` (1010 en binario):
    -   `n - 1 = 9` (1001 en binario)

    ```{=html}
    <!-- -->
    ```
    -   `n & (n - 1) = 1010 & 1001 = 1000`

    ```{=html}
    <!-- -->
    ```
    -   La función devuelve 0, indicando que 10 no es una potencia de 2.

------------------------------------------------------------------------

last\_word {#10ec02c1-e3b3-8083-afd9-e13c2604d3fa}
----------

> Assignment name : last\_word\
> Expected files : last\_word.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes a string and displays its last word
> followed by a \\n.\
> \
> A word is a section of string delimited by spaces/tabs or by the
> start/end of\
> the string.\
> \
> If the number of parameters is not 1, or there are no words, display a
> newline.\
> \
> Example:\
> \
> \$\> ./last\_word \"FOR PONY\" \| cat -e\
> PONY\$\
> \$\> ./last\_word \"this \... is sparta, then again, maybe not\" \|
> cat -e\
> not\$\
> \$\> ./last\_word \" \" \| cat -e\
> \$\
> \$\> ./last\_word \"a\" \"b\" \| cat -e\
> \$\
> \$\> ./last\_word \" lorem,ipsum \" \| cat -e\
> lorem,ipsum\$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome una cadena de texto como
    entrada y muestre su última palabra seguida de un salto de línea.

```{=html}
<!-- -->
```
-   **Definición de palabra:** Una palabra es una sección de la cadena
    delimitada por espacios, tabulaciones o el inicio/final de la
    cadena.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento o si no hay palabras en la cadena, simplemente se muestra
    un salto de línea.
:::

``` {#10ec02c1-e3b3-804a-87ac-c2e1dac4f6a5 .code}
#include <unistd.h>

void    last_word(char *str)
{
    int j = 0;
    int i = 0;

    while (str[i])
    {
        if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
            j = i + 1;
        i++;
    }
    while (str[j] >= 33 && str[j] <= 127)
    {
        write(1, &str[j], 1);
        j++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}
```

1.  **Inclusión de la biblioteca**:

    ``` {#10ec02c1-e3b3-8009-adc1-f0cb2d626048 .code}
    #include <unistd.h>
    ```

    -   Incluye la biblioteca `unistd.h` que proporciona acceso a la
        función `write`.

```{=html}
<!-- -->
```
2.  **Función** `last_word`:

    ``` {#10ec02c1-e3b3-807e-886f-ee1b116155be .code}
    void last_word(char *str)
    ```

    -   Define una función llamada `last_word` que toma un argumento
        `str` de tipo `char *` (cadena de caracteres).

```{=html}
<!-- -->
```
3.  **Declaración de variables**:

    ``` {#10ec02c1-e3b3-8039-9f0a-eda04d72ea3a .code}
    int j = 0;
    int i = 0;
    ```

    -   Declara dos variables enteras `j` y `i` para usar como índices.

```{=html}
<!-- -->
```
4.  **Bucle para encontrar el inicio de la última palabra**:

    ``` {#10ec02c1-e3b3-8065-b6c3-c4d30c8bd3e6 .code}
    while (str[i])
    {
        if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
            j = i + 1;
        i++;
    }
    ```

    -   Recorre la cadena `str` carácter por carácter.

    ```{=html}
    <!-- -->
    ```
    -   Si encuentra un espacio seguido de un carácter imprimible
        (código ASCII entre 33 y 126), actualiza `j` para que apunte al
        inicio de la siguiente palabra.

```{=html}
<!-- -->
```
5.  **Bucle para imprimir la última palabra**:

    ``` {#10ec02c1-e3b3-804d-834e-c70e5baddf65 .code}
    while (str[j] >= 33 && str[j] <= 127)
    {
        write(1, &str[j], 1);
        j++;
    }
    ```

    -   Recorre la cadena desde la posición `j` y escribe cada carácter
        en la salida estándar hasta que encuentre un carácter no
        imprimible (código ASCII menor que 33 o mayor que 127).

```{=html}
<!-- -->
```
6.  **Función** `main`:

    ``` {#10ec02c1-e3b3-809c-864e-dc01ba9c622b .code}
    int main(int argc, char **argv)
    ```

    -   Define la función principal que toma dos argumentos: el número
        de argumentos `argc` y una matriz de cadenas `argv`.

```{=html}
<!-- -->
```
7.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-80a5-8bee-ebabd37a6192 .code}
    if (argc == 2)
        last_word(argv[1]);
    ```

    -   Verifica que se haya pasado exactamente un argumento adicional
        (además del nombre del programa).

    ```{=html}
    <!-- -->
    ```
    -   Llama a la función `last_word` con el argumento `argv[1]`.

```{=html}
<!-- -->
```
8.  **Escritura de nueva línea**:

    ``` {#10ec02c1-e3b3-8061-871a-ea8c4e639601 .code}
    write(1, "\n", 1);
    ```

    -   Escribe un carácter de nueva línea al final de la salida.

```{=html}
<!-- -->
```
9.  **Retorno de la función**:

    ``` {#10ec02c1-e3b3-8095-ad3b-ece93434a178 .code}
    return (0);
    ```

    -   Finaliza la función `main` devolviendo 0.

Resumen

Este programa toma una cadena como argumento y escribe la última palabra
de esa cadena en la salida estándar. La última palabra se define como la
secuencia de caracteres imprimibles después del último espacio en la
cadena.

------------------------------------------------------------------------

max {#10ec02c1-e3b3-80aa-8fea-eae079bdb46e}
> Assignment name : lcm\
> Expected files : lcm.c\
> Allowed functions:\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function who takes two unsigned int as parameters and returns
> the\
> computed LCM of those parameters.\
> \
> LCM (Lowest Common Multiple) of two non-zero integers is the smallest
> postive\
> integer divisible by the both integers.\
> \
> A LCM can be calculated in two ways:\
> \
> - You can calculate every multiples of each integers until you have a
> common\
> multiple other than 0\
> \
> - You can use the HCF (Highest Common Factor) of these two integers
> and\
> calculate as follows:\
> \
> LCM(x, y) = \| x \* y \| / HCF(x, y)\
> \
> \| x \* y \| means \"Absolute value of the product of x by y\"\
> \
> If at least one integer is null, LCM is equal to 0.\
> \
> Your function must be prototyped as follows:\
> \
> unsigned int lcm(unsigned int a, unsigned int b);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que tome dos números enteros no
    negativos como parámetros y devuelva su mínimo común múltiplo (LCM).

```{=html}
<!-- -->
```
-   **Definición de LCM:** El LCM de dos números enteros no nulos es el
    número entero positivo más pequeño que es divisible por ambos
    números.

```{=html}
<!-- -->
```
-   **Métodos de cálculo:**
    -   Se pueden calcular los múltiplos de cada número hasta encontrar
        un múltiplo común distinto de 0.

    ```{=html}
    <!-- -->
    ```
    -   Se puede usar el máximo común divisor (MCD) de los dos números y
        calcular el LCM como:

`LCM(x, y) = | x * y | / MCD(x, y)`

donde \| x \* y \| significa \"valor absoluto del producto de x por y\".

-   **Caso especial:** Si al menos uno de los números es cero, el LCM es
    igual a 0.

```{=html}
<!-- -->
```
-   **Declaración requerida:** La función debe ser declarada de la
    siguiente manera:
:::

``` {#10ec02c1-e3b3-808d-b7b2-da9998283073 .code}
unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int n; 

    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        n = a;
    else
        n = b;
    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return (n);
        ++n;
    }
}
```

1.  **Declaración de la función**:

    ``` {#10ec02c1-e3b3-808b-b65f-cc27e843da8c .code}
    unsigned int lcm(unsigned int a, unsigned int b)
    ```

    Esta línea declara una función llamada `lcm` que toma dos parámetros
    `a` y `b`, ambos de tipo `unsigned int`, y devuelve un valor de tipo
    `unsigned int`.

```{=html}
<!-- -->
```
2.  **Declaración de la variable** `n`:

    ``` {#10ec02c1-e3b3-8050-ada0-e36bd121e471 .code}
    unsigned int n;
    ```

    Aquí se declara una variable `n` de tipo `unsigned int`.

```{=html}
<!-- -->
```
3.  **Comprobación de ceros**:

    ``` {#10ec02c1-e3b3-802f-ab93-ebcceb53d6bd .code}
    if (a == 0 || b == 0)
        return (0);
    ```

    Si alguno de los dos números es 0, la función devuelve 0
    inmediatamente, ya que el mínimo común múltiplo (LCM) de cualquier
    número con 0 es 0.

```{=html}
<!-- -->
```
4.  **Inicialización de** `n`:

    ``` {#10ec02c1-e3b3-806d-a9bd-d7b0d67a760f .code}
    if (a > b)
        n = a;
    else
        n = b;
    ```

    Se inicializa `n` con el valor mayor entre `a` y `b`. Esto se hace
    porque el LCM no puede ser menor que el mayor de los dos números.

```{=html}
<!-- -->
```
5.  **Bucle infinito**:

    ``` {#10ec02c1-e3b3-80a8-95f7-e6728fe7559b .code}
    while (1)
    ```

    Este es un bucle infinito que continuará ejecutándose hasta que se
    encuentre el LCM.

```{=html}
<!-- -->
```
6.  **Comprobación del LCM**:

    ``` {#10ec02c1-e3b3-8071-87ac-ebaeda443faa .code}
    if (n % a == 0 && n % b == 0)
        return (n);
    ```

    Dentro del bucle, se comprueba si `n` es divisible por `a` y `b` sin
    dejar residuo. Si es así, `n` es el LCM y se devuelve.

```{=html}
<!-- -->
```
7.  **Incremento de** `n`:

    ``` {#10ec02c1-e3b3-80b5-bb6a-f9f2e1cd34c7 .code}
    ++n;
    ```

    Si `n` no es divisible por `a` y `b`, se incrementa `n` en 1 y se
    vuelve a comprobar en la siguiente iteración del bucle.

------------------------------------------------------------------------

paramsum {#10ec02c1-e3b3-80eb-95e5-eb6bf8f6f217}
--------

> Assignment name : paramsum\
> Expected files : paramsum.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that displays the number of arguments passed to it,
> followed by\
> a newline.\
> \
> If there are no arguments, just display a 0 followed by a newline.\
> \
> Example:\
> \
> \$\>./paramsum 1 2 3 5 7 24\
> 6\
> \$\>./paramsum 6 12 24 \| cat -e\
> 3\$\
> \$\>./paramsum \| cat -e\
> 0\$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
**Objetivo:**

-   El programa `paramsum` debe contar y mostrar el número de argumentos
    que se le pasan.

**Funcionamiento:**

-   Si se le pasan argumentos, el programa muestra el número de
    argumentos seguido de un salto de línea.

```{=html}
<!-- -->
```
-   Si no se le pasan argumentos, el programa muestra 0 seguido de un
    salto de línea.

**Ejemplo:**
:::

``` {#10ec02c1-e3b3-8096-9df1-d96515bf5b7e .code}
#include <unistd.h>

void    ft_putnbr(int n)
{
    char digit;

    if (n >= 10)
        ft_putnbr(n / 10);
    digit = (n % 10) + '0';
    write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    (void)argv;

    ft_putnbr(argc - 1);
    write(1, "\n", 1);
    return (0);
}
```

1.  **Incluir la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-80ae-8c99-e246eba0d5f6 .code}
    #include <unistd.h>
    ```

    Esta línea incluye la biblioteca `unistd.h`, que contiene la
    declaración de la función `write`.

```{=html}
<!-- -->
```
2.  **Declaración de la función** `ft_putnbr`:

    ``` {#10ec02c1-e3b3-802e-a2a0-c7c7c906326b .code}
    void  ft_putnbr(int n)
    ```

    Esta línea declara una función llamada `ft_putnbr` que toma un
    parámetro `n` de tipo `int` y no devuelve ningún valor (`void`).

```{=html}
<!-- -->
```
3.  **Declaración de la variable** `digit`:

    ``` {#10ec02c1-e3b3-80da-87a6-d3721340f767 .code}
    char digit;
    ```

    Aquí se declara una variable `digit` de tipo `char`.

```{=html}
<!-- -->
```
4.  **Condición para números mayores o iguales a 10**:

    ``` {#10ec02c1-e3b3-80bd-b70c-ea2faae62bc9 .code}
    if (n >= 10)
        ft_putnbr(n / 10);
    ```

    Si `n` es mayor o igual a 10, la función se llama a sí misma
    recursivamente con el valor de `n` dividido por 10. Esto descompone
    el número en sus dígitos individuales.

```{=html}
<!-- -->
```
5.  **Conversión del dígito a carácter**:

    ``` {#10ec02c1-e3b3-800e-8968-ec246ef5e7f4 .code}
    digit = (n % 10) + '0';
    ```

    Se obtiene el último dígito de `n` usando `n % 10` y se convierte a
    su representación de carácter sumando `'0'`.

```{=html}
<!-- -->
```
6.  **Escribir el dígito en la salida estándar**:

    ``` {#10ec02c1-e3b3-808a-a78c-ee46bdb78044 .code}
    write(1, &digit, 1);
    ```

    La función `write` escribe el carácter `digit` en la salida estándar
    (generalmente la pantalla). El `1` indica el descriptor de archivo
    para la salida estándar.

```{=html}
<!-- -->
```
7.  **Función** `main`:

    ``` {#10ec02c1-e3b3-80c5-a4d5-cecec662e54b .code}
    int  main(int argc, char **argv)
    ```

    Esta es la función principal del programa. Toma dos parámetros:
    `argc`, que es el número de argumentos de la línea de comandos, y
    `argv`, que es una matriz de cadenas que contienen los argumentos.

```{=html}
<!-- -->
```
8.  **Ignorar el parámetro** `argv`:

    ``` {#10ec02c1-e3b3-80ab-9509-d21cceb8f295 .code}
    (void)argv;
    ```

    Esta línea indica que el parámetro `argv` no se va a utilizar en el
    programa.

```{=html}
<!-- -->
```
9.  **Llamada a** `ft_putnbr` **con** `argc - 1`:

    ``` {#10ec02c1-e3b3-80ff-b19a-c495c72a5e0b .code}
    ft_putnbr(argc - 1);
    ```

    Se llama a la función `ft_putnbr` con el valor `argc - 1`, que
    representa el número de argumentos de la línea de comandos menos uno
    (generalmente, el nombre del programa).

```{=html}
<!-- -->
```
10. **Escribir un salto de línea**:

    ``` {#10ec02c1-e3b3-8096-969c-de61fbb49c84 .code}
    write(1, "\n", 1);
    ```

    Esta línea escribe un carácter de nueva línea (`\n`) en la salida
    estándar.

```{=html}
<!-- -->
```
11. **Retorno de la función** `main`:

    ``` {#10ec02c1-e3b3-80b7-89aa-ea816f6c2eb9 .code}
    return (0);
    ```

    La función `main` devuelve 0, indicando que el programa ha terminado
    correctamente.

------------------------------------------------------------------------

pgcd {#10ec02c1-e3b3-80fb-b250-cce0cdb67c22}
----

> Assignment name : pgcd\
> Expected files : pgcd.c\
> Allowed functions: printf, atoi, malloc, free\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes two strings representing two strictly
> positive\
> integers that fit in an int.\
> \
> Display their highest common denominator followed by a newline (It\'s
> always a\
> strictly positive integer).\
> \
> If the number of parameters is not 2, display a newline.\
> \
> Examples:\
> \
> \$\> ./pgcd 42 10 \| cat -e\
> 2\$\
> \$\> ./pgcd 42 12 \| cat -e\
> 6\$\
> \$\> ./pgcd 14 77 \| cat -e\
> 7\$\
> \$\> ./pgcd 17 3 \| cat -e\
> 1\$\
> \$\> ./pgcd \| cat -e\
> \$\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome dos cadenas de texto que
    representan números enteros estrictamente positivos que caben en un
    tipo `int`. Calcula y muestra su máximo común divisor (MCD) seguido
    de un salto de línea.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporcionan exactamente dos
    argumentos, el programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-8077-a2f7-fb9415eaee4e .code}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nbr1;
    int nbr2;

    if (argc == 3)
    {
        if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
        {
            while (nbr1 != nbr2)
            {
                if (nbr1 > nbr2)
                    nbr1 -= nbr2;
                else
                    nbr2 -= nbr1;
            }
            printf("%d", nbr1);
        }
    }
    printf("\n");
    return (0);
}
```

1.  **Incluir las bibliotecas** `stdio.h` **y** `stdlib.h`:

    ``` {#10ec02c1-e3b3-8098-b643-f25ac6c58b97 .code}
    #include <stdio.h>#include <stdlib.h>
    ```

    Estas líneas incluyen las bibliotecas estándar de C para
    entrada/salida (`stdio.h`) y funciones de utilidad (`stdlib.h`).

```{=html}
<!-- -->
```
2.  **Declaración de la función** `main`:

    ``` {#10ec02c1-e3b3-802c-94a5-d3ceb13f4a28 .code}
    int main(int argc, char const *argv[])
    ```

    Esta línea declara la función principal del programa. `argc` es el
    número de argumentos de la línea de comandos y `argv` es una matriz
    de cadenas que contienen esos argumentos.

```{=html}
<!-- -->
```
3.  **Declaración de las variables** `nbr1` **y** `nbr2`:

    ``` {#10ec02c1-e3b3-80bc-9ae2-e530b461377c .code}
    int nbr1;
    int nbr2;
    ```

    Aquí se declaran dos variables enteras `nbr1` y `nbr2`.

```{=html}
<!-- -->
```
4.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-806c-86c6-f864cb72a66b .code}
    if (argc == 3)
    ```

    Esta condición verifica si el número de argumentos es exactamente 3
    (el nombre del programa y dos números).

```{=html}
<!-- -->
```
5.  **Conversión de argumentos a enteros y comprobación de
    positividad**:

    ``` {#10ec02c1-e3b3-804f-86fd-c3ac27c64f0b .code}
    if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
    ```

    Se convierten los argumentos de la línea de comandos a enteros
    usando `atoi` y se verifica si ambos son mayores que 0.

```{=html}
<!-- -->
```
6.  **Bucle para encontrar el máximo común divisor (MCD)**:

    ``` {#10ec02c1-e3b3-801d-83a3-e7358a78ebee .code}
    while (nbr1 != nbr2)
    {
        if (nbr1 > nbr2)
            nbr1 -= nbr2;
        else
            nbr2 -= nbr1;
    }
    ```

    Este bucle continúa ejecutándose hasta que `nbr1` y `nbr2` sean
    iguales. En cada iteración, se resta el menor del mayor. Este es el
    algoritmo de Euclides para encontrar el MCD.

```{=html}
<!-- -->
```
7.  **Imprimir el resultado**:

    ``` {#10ec02c1-e3b3-801a-bc52-fb0a1d656c41 .code}
    printf("%d", nbr1);
    ```

    Una vez que `nbr1` y `nbr2` son iguales, se imprime el valor de
    `nbr1`, que es el MCD.

```{=html}
<!-- -->
```
8.  **Imprimir una nueva línea**:

    ``` {#10ec02c1-e3b3-80fe-865b-fc13bd4450ca .code}
    printf("\n");
    ```

    Esta línea imprime un carácter de nueva línea para formatear la
    salida.

```{=html}
<!-- -->
```
9.  **Retorno de la función** `main`:

    ``` {#10ec02c1-e3b3-8059-87a1-d6e9fd1a3dba .code}
    return (0);
    ```

    La función `main` devuelve 0, indicando que el programa ha terminado
    correctamente.

------------------------------------------------------------------------

print\_hex {#10ec02c1-e3b3-808e-8e10-e1f2610f25c2}
----------

> Assignment name : print\_hex\
> Expected files : print\_hex.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes a positive (or zero) number expressed in
> base 10,\
> and displays it in base 16 (lowercase letters) followed by a newline.\
> \
> If the number of parameters is not 1, the program displays a newline.\
> \
> Examples:\
> \
> \$\> ./print\_hex \"10\" \| cat -e\
> a\$\
> \$\> ./print\_hex \"255\" \| cat -e\
> ff\$\
> \$\> ./print\_hex \"5156454\" \| cat -e\
> 4eae66\$\
> \$\> ./print\_hex \| cat -e\
> \$\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome un número positivo (o
    cero) expresado en base 10 como entrada y lo muestre en base 16
    (letras minúsculas) seguido de un salto de línea.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento, el programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-8087-9777-e70000be57ec .code}
#include <unistd.h>

int ft_atoi(char *str)
{
    int n = 0;

    while (*str != '\0')
    {
        n = n * 10;
        n = n + *str - '0';
        ++str;
    }
    return (n);
}

void    print_hex(int n)
{
    char hex_digits[] = "0123456789abcdef";

    if (n >= 16)
        print_hex(n / 16);
    write(1, &hex_digits[n % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}
```

1.  **Incluir la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-80d6-910f-e48571bd7cbc .code}
    #include <unistd.h>
    ```

    Esta línea incluye la biblioteca `unistd.h`, que contiene la
    declaración de la función `write`.

```{=html}
<!-- -->
```
2.  **Declaración de la función** `ft_atoi`:

    ``` {#10ec02c1-e3b3-8086-986b-c1faff0b6fc7 .code}
    int ft_atoi(char *str)
    ```

    Esta línea declara una función llamada `ft_atoi` que toma un
    parámetro `str` de tipo `char *` (cadena de caracteres) y devuelve
    un valor de tipo `int`.

```{=html}
<!-- -->
```
3.  **Inicialización de la variable** `n`:

    ``` {#10ec02c1-e3b3-802a-bfc4-e9559f47cf35 .code}
    int n = 0;
    ```

    Aquí se inicializa una variable `n` de tipo `int` con el valor 0.

```{=html}
<!-- -->
```
4.  **Bucle para convertir la cadena a entero**:

    ``` {#10ec02c1-e3b3-80f4-9853-f8a2f4ee919e .code}
    while (*str != '\0')
    {
        n = n * 10;
        n = n + *str - '0';
        ++str;
    }
    ```

    Este bucle recorre cada carácter de la cadena `str` hasta que
    encuentra el carácter nulo (`'\0'`). En cada iteración, multiplica
    `n` por 10 y le suma el valor numérico del carácter actual
    (`*str - '0'`), luego avanza al siguiente carácter.

```{=html}
<!-- -->
```
5.  **Retorno del valor convertido**:

    ``` {#10ec02c1-e3b3-807f-909e-e51ee2a1b5ae .code}
    return (n);
    ```

    Una vez que se ha procesado toda la cadena, la función devuelve el
    valor entero resultante.

```{=html}
<!-- -->
```
6.  **Declaración de la función** `print_hex`:

    ``` {#10ec02c1-e3b3-80af-aa3c-c11b54d3bc7e .code}
    void   print_hex(int n)
    ```

    Esta línea declara una función llamada `print_hex` que toma un
    parámetro `n` de tipo `int` y no devuelve ningún valor (`void`).

```{=html}
<!-- -->
```
7.  **Declaración del array** `hex_digits`:

    ``` {#10ec02c1-e3b3-802e-a990-e03e0014db98 .code}
    char hex_digits[] = "0123456789abcdef";
    ```

    Aquí se declara un array de caracteres que contiene los dígitos
    hexadecimales del 0 al 15.

```{=html}
<!-- -->
```
8.  **Condición para números mayores o iguales a 16**:

    ``` {#10ec02c1-e3b3-8087-a616-f1e0a531f79e .code}
    if (n >= 16)
        print_hex(n / 16);
    ```

    Si `n` es mayor o igual a 16, la función se llama a sí misma
    recursivamente con el valor de `n` dividido por 16. Esto descompone
    el número en sus dígitos hexadecimales.

```{=html}
<!-- -->
```
9.  **Escribir el dígito hexadecimal en la salida estándar**:

    ``` {#10ec02c1-e3b3-8097-a2a0-fc0aec247a9d .code}
    write(1, &hex_digits[n % 16], 1);
    ```

    La función `write` escribe el carácter correspondiente al dígito
    hexadecimal (`hex_digits[n % 16]`) en la salida estándar
    (generalmente la pantalla). El `1` indica el descriptor de archivo
    para la salida estándar.

```{=html}
<!-- -->
```
10. **Función** `main`:

    ``` {#10ec02c1-e3b3-8048-8aed-d8c455636e04 .code}
    int main(int argc, char **argv)
    ```

    Esta es la función principal del programa. Toma dos parámetros:
    `argc`, que es el número de argumentos de la línea de comandos, y
    `argv`, que es una matriz de cadenas que contienen los argumentos.

```{=html}
<!-- -->
```
11. **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-80e0-acce-da6b217f2d5f .code}
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    ```

    Esta condición verifica si el número de argumentos es exactamente 2
    (el nombre del programa y un número). Si es así, convierte el
    argumento a un entero usando `ft_atoi` y luego llama a `print_hex`
    para imprimirlo en formato hexadecimal.

```{=html}
<!-- -->
```
12. **Escribir un salto de línea**:

    ``` {#10ec02c1-e3b3-8067-817a-fa02bcd8003b .code}
    write(1, "\n", 1);
    ```

    Esta línea escribe un carácter de nueva línea (`\n`) en la salida
    estándar.

------------------------------------------------------------------------

rstr\_capitalizer {#10ec02c1-e3b3-80be-9fac-d9dd97b274fc}
-----------------

> Assignment name : rstr\_capitalizer\
> Expected files : rstr\_capitalizer.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes one or more strings and, for each argument,
> puts\
> the last character that is a letter of each word in uppercase and the
> rest\
> in lowercase, then displays the result followed by a \\n.\
> \
> A word is a section of string delimited by spaces/tabs or the
> start/end of the\
> string. If a word has a single letter, it must be capitalized.\
> \
> A letter is a character in the set \[a-zA-Z\]\
> \
> If there are no parameters, display \\n.\
> \
> Examples:\
> \
> \$\> ./rstr\_capitalizer \| cat -e\
> \$\
> \$\> ./rstr\_capitalizer \"a FiRSt LiTTlE TESt\" \| cat -e\
> A firsT littlE tesT\$\
> \$\> ./rstr\_capitalizer \"SecONd teST A LITtle BiT Moar comPLEX\" \"
> But\... This iS not THAT COMPLEX\" \" Okay, this is the last
> 1239809147801 but not the least t\" \| cat -e\
> seconD tesT A littlE biT moaR compleX\$\
> but\... thiS iS noT thaT compleX\$\
> okay, thiS iS thE lasT 1239809147801 buT noT thE leasT T\$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome una o más cadenas de
    texto como entrada y, para cada argumento, convierta la última letra
    de cada palabra en mayúscula y el resto en minúscula, mostrando el
    resultado seguido de un salto de línea.

```{=html}
<!-- -->
```
-   **Definición de palabra:** Una palabra es una sección de la cadena
    delimitada por espacios, tabulaciones o el inicio/final de la
    cadena.

```{=html}
<!-- -->
```
-   **Condiciones especiales:** Si una palabra tiene una sola letra,
    debe estar en mayúscula.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporcionan argumentos, el
    programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-80d9-a70c-de1a93d7a80c .code}
#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;
        write(1, &str[i++], 1);
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 1)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < argc)
        {
            rstr_capitalizer(argv[i]);
            write(1, "\n", 1);
            i += 1;
        }
    }
    return (0);
}
```

1.  **Incluir la biblioteca** `unistd.h`:

    ``` {#10ec02c1-e3b3-8084-95b9-f4a3e00bd263 .code}
    #include <unistd.h>
    ```

    Esta línea incluye la biblioteca `unistd.h`, que contiene la
    declaración de la función `write`.

```{=html}
<!-- -->
```
2.  **Declaración de la función** `rstr_capitalizer`:

    ``` {#10ec02c1-e3b3-804f-be24-fbc0f9795857 .code}
    void    rstr_capitalizer(char *str)
    ```

    Esta línea declara una función llamada `rstr_capitalizer` que toma
    un parámetro `str` de tipo `char *` (cadena de caracteres) y no
    devuelve ningún valor (`void`).

```{=html}
<!-- -->
```
3.  **Inicialización de la variable** `i`:

    ``` {#10ec02c1-e3b3-80ef-9aed-edbef2260e9b .code}
    int i = 0;
    ```

    Aquí se inicializa una variable `i` de tipo `int` con el valor 0.

```{=html}
<!-- -->
```
4.  **Bucle para recorrer la cadena**:

    ``` {#10ec02c1-e3b3-80ed-9af7-f12a52dedf07 .code}
    while (str[i])
    ```

    Este bucle recorre cada carácter de la cadena `str` hasta que
    encuentra el carácter nulo (`'\0'`).

```{=html}
<!-- -->
```
5.  **Conversión de mayúsculas a minúsculas**:

    ``` {#10ec02c1-e3b3-80f6-b166-f16263a7f392 .code}
    if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] += 32;
    ```

    Si el carácter actual es una letra mayúscula (entre 'A' y 'Z'), se
    convierte a minúscula sumando 32 a su valor ASCII.

```{=html}
<!-- -->
```
6.  **Conversión de minúsculas a mayúsculas al final de una palabra**:

    ``` {#10ec02c1-e3b3-8081-a8d9-d6235c82c350 .code}
    if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
        str[i] -= 32;
    ```

    Si el carácter actual es una letra minúscula (entre 'a' y 'z') y el
    siguiente carácter es un espacio, una tabulación o el final de la
    cadena, se convierte a mayúscula restando 32 a su valor ASCII.

```{=html}
<!-- -->
```
7.  **Escribir el carácter en la salida estándar**:

    ``` {#10ec02c1-e3b3-800b-8947-db357cff9b00 .code}
    write(1, &str[i++], 1);
    ```

    La función `write` escribe el carácter actual en la salida estándar
    (generalmente la pantalla). El `1` indica el descriptor de archivo
    para la salida estándar. Luego, se incrementa `i` para pasar al
    siguiente carácter.

```{=html}
<!-- -->
```
8.  **Función** `main`:

    ``` {#10ec02c1-e3b3-80ca-ab96-c819c8c02649 .code}
    int main(int argc, char **argv)
    ```

    Esta es la función principal del programa. Toma dos parámetros:
    `argc`, que es el número de argumentos de la línea de comandos, y
    `argv`, que es una matriz de cadenas que contienen los argumentos.

```{=html}
<!-- -->
```
9.  **Comprobación del número de argumentos**:

    ``` {#10ec02c1-e3b3-80c0-930c-ca047b046754 .code}
    if (argc == 1)
        write(1, "\n", 1);
    ```

    Si no se pasan argumentos (solo el nombre del programa), se escribe
    un carácter de nueva línea (`\n`) en la salida estándar.

```{=html}
<!-- -->
```
10. **Procesamiento de los argumentos**:

    ``` {#10ec02c1-e3b3-8028-bfef-d1923adb77b8 .code}
    else
    {
        i = 1;
        while (i < argc)
        {
            rstr_capitalizer(argv[i]);
            write(1, "\n", 1);
            i += 1;
        }
    }
    ```

    Si hay argumentos adicionales, se inicializa `i` a 1 y se recorre
    cada argumento. Para cada argumento, se llama a `rstr_capitalizer`
    para procesarlo y luego se escribe un carácter de nueva línea
    (`\n`). Se incrementa `i` para pasar al siguiente argumento.

```{=html}
<!-- -->
```
11. **Retorno de la función** `main`:

    ``` {#10ec02c1-e3b3-80d6-8344-e44b2068c0b6 .code}
    return (0);
    ```

    La función `main` devuelve 0, indicando que el programa ha terminado
    correctamente.

------------------------------------------------------------------------

str\_capitalizer {#10ec02c1-e3b3-80ce-b814-d6d22bb8ccce}
----------------

> Assignment name : str\_capitalizer\
> Expected files : str\_capitalizer.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes one or several strings and, for each
> argument,\
> capitalizes the first character of each word (If it\'s a letter,
> obviously),\
> puts the rest in lowercase, and displays the result on the standard
> output,\
> followed by a \\n.\
> \
> A \"word\" is defined as a part of a string delimited either by
> spaces/tabs, or\
> by the start/end of the string. If a word only has one letter, it must
> be\
> capitalized.\
> \
> If there are no arguments, the progam must display \\n.\
> \
> Example:\
> \
> \$\> ./str\_capitalizer \| cat -e\
> \$\
> \$\> ./str\_capitalizer \"a FiRSt LiTTlE TESt\" \| cat -e\
> A First Little Test\$\
> \$\> ./str\_capitalizer \"\_\_SecONd teST A LITtle BiT Moar comPLEX\"
> \" But\... This iS not THAT COMPLEX\" \" Okay, this is the last
> 1239809147801 but not the least t\" \| cat -e\
> \_\_second Test A Little Bit Moar Complex\$\
> But\... This Is Not That Complex\$\
> Okay, This Is The Last 1239809147801 But Not The Least T\$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome una o más cadenas de
    texto como entrada y, para cada argumento, capitalice el primer
    carácter de cada palabra (si es una letra), el resto en minúscula y
    muestre el resultado seguido de un salto de línea.

```{=html}
<!-- -->
```
-   **Definición de palabra:** Una palabra es una sección de la cadena
    delimitada por espacios, tabulaciones o el inicio/final de la
    cadena.

```{=html}
<!-- -->
```
-   **Condiciones especiales:** Si una palabra tiene una sola letra,
    debe estar en mayúscula.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporcionan argumentos, el
    programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-808c-92a5-e994918bb0a1 .code}
#include <unistd.h>

void    str_capitalizer(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && 'z' >= str[i])
        str[i] -= 32;
    write(1, &str[i], 1);
    while (str[++i])
    {
        if (str[i] >= 'A' && 'Z' >= str[i])
            str[i] += 32;
        if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
    }
}

int main(int argc, char *argv[])
{
    int i;

    if (argc < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < argc)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i += 1;
        }
    }
    return (0);
```

**1. Inclusión de la biblioteca**

``` {#10ec02c1-e3b3-801f-bea9-f83ab26c7ffe .code}
#include <unistd.h>
```

Esta línea incluye la biblioteca `unistd.h`, que proporciona acceso a la
API del sistema operativo POSIX, incluyendo la función `write`.

**2. Definición de la función** `str_capitalizer`

``` {#10ec02c1-e3b3-8033-a5fc-c3bd6dc9a4e2 .code}
void str_capitalizer(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && 'z' >= str[i])
        str[i] -= 32;
    write(1, &str[i], 1);
    while (str[++i])
    {
        if (str[i] >= 'A' && 'Z' >= str[i])
            str[i] += 32;
        if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
    }
}
```

**a. Inicialización**

``` {#10ec02c1-e3b3-806f-9455-dce4cb4a86ec .code}
int i = 0;
```

Se inicializa un índice `i` a 0 para recorrer la cadena.

**b. Capitalización del primer carácter**

``` {#10ec02c1-e3b3-803c-a854-ee5aeca35813 .code}
if (str[i] >= 'a' && 'z' >= str[i])
    str[i] -= 32;
```

Si el primer carácter es una letra minúscula, se convierte a mayúscula
restando 32 (diferencia en ASCII entre mayúsculas y minúsculas).

**c. Escritura del primer carácter**

``` {#10ec02c1-e3b3-808c-9b4b-d597dc1f21c6 .code}
write(1, &str[i], 1);
```

Se escribe el primer carácter en la salida estándar.

**d. Bucle para recorrer el resto de la cadena**

``` {#10ec02c1-e3b3-80dd-b8ee-dcae2083abda .code}
while (str[++i])
{
    if (str[i] >= 'A' && 'Z' >= str[i])
        str[i] += 32;
    if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
        str[i] -= 32;
    write(1, &str[i], 1);
}
```

-   **Conversión a minúsculas**: Si el carácter es una letra mayúscula,
    se convierte a minúscula sumando 32.

```{=html}
<!-- -->
```
-   **Capitalización de palabras**: Si el carácter es una letra
    minúscula y el carácter anterior es un espacio o tabulación, se
    convierte a mayúscula.

```{=html}
<!-- -->
```
-   **Escritura del carácter**: Se escribe el carácter en la salida
    estándar.

**3. Función** `main`

``` {#10ec02c1-e3b3-8067-bf82-f0826c4021c2 .code}
int main(int argc, char *argv[])
{
    int i;

    if (argc < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < argc)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i += 1;
        }
    }
    return (0);
}
```

**a. Verificación de argumentos**

``` {#10ec02c1-e3b3-801b-b272-cf42f4bdd7d7 .code}
if (argc < 2)
    write(1, "\n", 1);
```

Si no hay argumentos, se escribe una nueva línea.

**b. Bucle para procesar cada argumento**

``` {#10ec02c1-e3b3-80d5-b47d-fd31e0655f68 .code}
else
{
    i = 1;
    while (i < argc)
    {
        str_capitalizer(argv[i]);
        write(1, "\n", 1);
        i += 1;
    }
}
```

-   **Inicialización**: Se inicializa `i` a 1 para saltar el nombre del
    programa.

```{=html}
<!-- -->
```
-   **Procesamiento**: Para cada argumento, se llama a `str_capitalizer`
    y se escribe una nueva línea.

Resumen

Este programa toma una serie de cadenas como argumentos y capitaliza la
primera letra de cada palabra, convirtiendo el resto de las letras a
minúsculas. Luego, imprime cada cadena modificada en una nueva línea.

------------------------------------------------------------------------

tab\_mult {#10ec02c1-e3b3-8041-9502-d94f979aeb70}
---------

> Assignment name : tab\_mult\
> Expected files : tab\_mult.c\
> Allowed functions: write\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that displays a number\'s multiplication table.\
> \
> The parameter will always be a strictly positive number that fits in
> an int,\
> and said number times 9 will also fit in an int.\
> \
> If there are no parameters, the program displays \\n.\
> \
> Examples:\
> \
> \$\>./tab\_mult 9\
> 1 x 9 = 9\
> 2 x 9 = 18\
> 3 x 9 = 27\
> 4 x 9 = 36\
> 5 x 9 = 45\
> 6 x 9 = 54\
> 7 x 9 = 63\
> 8 x 9 = 72\
> 9 x 9 = 81\
> \$\>./tab\_mult 19\
> 1 x 19 = 19\
> 2 x 19 = 38\
> 3 x 19 = 57\
> 4 x 19 = 76\
> 5 x 19 = 95\
> 6 x 19 = 114\
> 7 x 19 = 133\
> 8 x 19 = 152\
> 9 x 19 = 171\
> \$\>\
> \$\>./tab\_mult \| cat -e\
> \$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que muestre la tabla de
    multiplicación de un número dado.

```{=html}
<!-- -->
```
-   **Parámetro:** El parámetro debe ser un número entero estrictamente
    positivo que quepa en un tipo `int`, y su producto con 9 también
    debe caber en un `int`.

```{=html}
<!-- -->
```
-   **Salida:** El programa debe mostrar la tabla de multiplicación del
    número dado, con cada línea en el formato \"n x número =
    resultado\".

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona ningún argumento, el
    programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-8024-b03c-e4c5a28c4551 .code}
#include <unistd.h>

int ft_atoi(char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (sign * result);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb / 10 > 0)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int main(int argc, char *argv[])
{
    int i;
    int nbr;

    if (argc != 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        nbr = ft_atoi(argv[1]);
        while (i <= 9 && nbr <= 238609183)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr(i * nbr);
            write(1, "\n", 1);
            i += 1;
        }
    }
    return (0);
}
```

**1. Inclusión de la biblioteca**

``` {#10ec02c1-e3b3-8052-8e0a-f9086541c55a .code}
#include <unistd.h>
```

Esta línea incluye la biblioteca `unistd.h`, que proporciona acceso a la
API del sistema operativo POSIX, incluyendo la función `write`.

**2. Definición de la función** `ft_atoi`

``` {#10ec02c1-e3b3-807e-abef-ef8ef4561824 .code}
int ft_atoi(char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (sign * result);
}
```

**a. Inicialización**

``` {#10ec02c1-e3b3-8050-b06d-f324aba9c9ad .code}
int result;
int sign;

result = 0;
sign = 1;
```

Se inicializan `result` a 0 y `sign` a 1. `result` almacenará el número
convertido y `sign` manejará el signo del número.

**b. Saltar espacios en blanco**

``` {#10ec02c1-e3b3-802e-b64b-c6ad7111f9da .code}
while (*str == ' ' || (*str >= 9 && *str <= 13))
    str++;
```

Se omiten los espacios en blanco y caracteres de control (tabulación,
nueva línea, etc.).

**c. Manejo del signo**

``` {#10ec02c1-e3b3-8026-a6e1-fe1b862a5600 .code}
if (*str == '+')
    str++;
```

Si hay un signo `+`, se avanza al siguiente carácter.

**d. Conversión de caracteres a números**

``` {#10ec02c1-e3b3-8068-bdc6-d2a6644ccc5b .code}
while (*str >= '0' && *str <= '9')
{
    result = result * 10 + *str - '0';
    str++;
}
```

Se convierten los caracteres numéricos a su valor entero correspondiente
y se acumulan en `result`.

**e. Devolver el resultado**

``` {#10ec02c1-e3b3-8048-a6e4-f28406f65022 .code}
return (sign * result);
```

Se devuelve el resultado final, multiplicado por `sign`.

**3. Definición de la función** `ft_putchar`

``` {#10ec02c1-e3b3-809e-8cbf-f2cc544af02a .code}
void ft_putchar(char c)
{
    write(1, &c, 1);
}
```

Esta función escribe un solo carácter `c` en la salida estándar.

**4. Definición de la función** `ft_putnbr`

``` {#10ec02c1-e3b3-8016-8589-f22c215243fc .code}
void ft_putnbr(int nb)
{
    if (nb / 10 > 0)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}
```

**a. Llamada recursiva**

``` {#10ec02c1-e3b3-80ec-ac18-cc83f622ee77 .code}
if (nb / 10 > 0)
    ft_putnbr(nb / 10);
```

Si `nb` es mayor que 10, se llama recursivamente a `ft_putnbr` con
`nb / 10`.

**b. Escritura del dígito**

``` {#10ec02c1-e3b3-8060-ac9c-dd3e0cd13c95 .code}
ft_putchar(nb % 10 + '0');
```

Se escribe el último dígito de `nb`.

**5. Función** `main`

``` {#10ec02c1-e3b3-80e7-a305-e28087196799 .code}
int main(int argc, char *argv[])
{
    int i;
    int nbr;

    if (argc != 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        nbr = ft_atoi(argv[1]);
        while (i <= 9 && nbr <= 238609183)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr(i * nbr);
            write(1, "\n", 1);
            i += 1;
        }
    }
    return (0);
}
```

**a. Verificación de argumentos**

``` {#10ec02c1-e3b3-8085-87f8-d4b261334915 .code}
if (argc != 2)
    write(1, "\n", 1);
```

Si no hay exactamente un argumento, se escribe una nueva línea.

**b. Conversión del argumento a entero**

``` {#10ec02c1-e3b3-80e7-881e-c768685e89ee .code}
nbr = ft_atoi(argv[1]);
```

Se convierte el argumento a un número entero usando `ft_atoi`.

**c. Bucle para imprimir la tabla de multiplicar**

``` {#10ec02c1-e3b3-804e-a4da-c8b7a7f6e8f6 .code}
while (i <= 9 && nbr <= 238609183)
{
    ft_putnbr(i);
    write(1, " x ", 3);
    ft_putnbr(nbr);
    write(1, " = ", 3);
    ft_putnbr(i * nbr);
    write(1, "\n", 1);
    i += 1;
}
```

-   **Inicialización**: Se inicializa `i` a 1.

```{=html}
<!-- -->
```
-   **Impresión**: Para cada valor de `i` de 1 a 9, se imprime la
    multiplicación de `i` por `nbr`.

Resumen

Este programa toma un número como argumento y imprime su tabla de
multiplicar del 1 al 9. Utiliza funciones auxiliares para convertir una
cadena a entero (`ft_atoi`), escribir caracteres (`ft_putchar`) y
escribir números (`ft_putnbr`).

------------------------------------------------------------------------

Level 4 {#10ec02c1-e3b3-8007-b400-e14f225248c9}
=======

flood\_fill {#10ec02c1-e3b3-802b-8971-dbe0977b1187}
-----------

> Assignment name : flood\_fill\
> Expected files : \*.c, \*.h\
> Allowed functions: -\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that takes a char \*\* as a 2-dimensional array of
> char, a\
> t\_point as the dimensions of this array and a t\_point as the
> starting point.\
> \
> Starting from the given \'begin\' t\_point, this function fills an
> entire zone\
> by replacing characters inside with the character \'F\'. A zone is an
> group of\
> the same character delimitated horizontally and vertically by other
> characters\
> or the array boundry.\
> \
> The flood\_fill function won\'t fill diagonally.\
> \
> The flood\_fill function will be prototyped like this:\
> void flood\_fill(char \*\*tab, t\_point size, t\_point begin);\
> \
> The t\_point structure is prototyped like this:\
> \
> typedef struct s\_point\
> {\
> int x;\
> int y;\
> } t\_point;\
> \
> Example:\
> \
> \$\> cat test.c\
> \#include \<stdlib.h\>\
> \#include \<stdio.h\>\
> \#include \"flood\_fill.h\"\
> \
> char\*\* make\_area(char\*\* zone, t\_point size)\
> {\
> char\*\* new;\
> \
> new = malloc(sizeof(char\*) \* size.y);\
> for (int i = 0; i \< size.y; ++i)\
> {\
> new\[i\] = malloc(size.x + 1);\
> for (int j = 0; j \< size.x; ++j)\
> new\[i\]\[j\] = zone\[i\]\[j\];\
> new\[i\]\[size.x\] = \'\\0\';\
> }\
> \
> return new;\
> }\
> \
> int main(void)\
> {\
> t\_point size = {8, 5};\
> char \*zone\[\] = {\
> \"11111111\",\
> \"10001001\",\
> \"10010001\",\
> \"10110001\",\
> \"11100001\",\
> };\
> \
> char\*\* area = make\_area(zone, size);\
> for (int i = 0; i \< size.y; ++i)\
> printf(\"%s\\n\", area\[i\]);\
> printf(\"\\n\");\
> \
> t\_point begin = {7, 4};\
> flood\_fill(area, size, begin);\
> for (int i = 0; i \< size.y; ++i)\
> printf(\"%s\\n\", area\[i\]);\
> return (0);\
> }\
> \
> \$\> gcc flood\_fill.c test.c -o test; ./test\
> 11111111\
> 10001001\
> 10010001\
> 10110001\
> 11100001\
> \
> FFFFFFFF\
> F000F00F\
> F00F000F\
> F0FF000F\
> FFF0000F\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que tome una matriz bidimensional
    de caracteres, las dimensiones de la matriz y un punto de partida
    como entrada. A partir del punto de partida, la función debe
    rellenar una zona completa de la matriz con el carácter \'F\'. Una
    zona se define como un grupo de caracteres iguales delimitados
    horizontal y verticalmente por otros caracteres o los límites de la
    matriz.

```{=html}
<!-- -->
```
-   **Restricciones:** La función `flood_fill` no debe rellenar en
    diagonal.
:::

``` {#10ec02c1-e3b3-80f9-b725-d45ea862166d .code}
#ifndef T_POINT_FLOOD_FILL
# define T_POINT_FLOOD_FILL

typedef struct  s_point {
    int         x;              // x : Width  | x-axis
    int         y;              // y : Height | y-axis
}               t_point;

#endif
```

``` {#10ec02c1-e3b3-8094-8777-edb74d47329a .code}
typedef struct    s_point
{
    int x;
    int y;
} t_point;

void    fill(char **tab, t_point size, t_point cur, char to_fill)
{
    if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
        return;
    tab[cur.y][cur.x] = 'F';
    fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void    flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}
```

**Definición de la estructura** `t_point`

``` {#10ec02c1-e3b3-80d3-bc51-d38cf4d22507 .code}
typedef struct s_point
{
    int x;
    int y;
} t_point;
```

Esta parte del código define una estructura llamada `t_point` que tiene
dos campos: `x` e `y`, ambos de tipo `int`. Esta estructura se utiliza
para representar un punto en una coordenada bidimensional.

**Función** `fill`

``` {#10ec02c1-e3b3-80ad-897c-ed9899de9ff0 .code}
void fill(char **tab, t_point size, t_point cur, char to_fill)
{
    if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
        return;
    tab[cur.y][cur.x] = 'F';
    fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}
```

Esta función realiza una operación de "flood fill" (relleno por
inundación) en una tabla bidimensional `tab`.

1.  **Condiciones de borde**:

    ``` {#10ec02c1-e3b3-800a-9753-f16a0f6752be .code}
    if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
        return;
    ```

    Aquí se verifica si el punto actual `cur` está fuera de los límites
    de la tabla o si el carácter en la posición actual no es igual a
    `to_fill`. Si alguna de estas condiciones se cumple, la función
    retorna sin hacer nada.

```{=html}
<!-- -->
```
2.  **Relleno del punto actual**:

    ``` {#10ec02c1-e3b3-80e2-b112-c62b5a22c338 .code}
    tab[cur.y][cur.x] = 'F';
    ```

    Si el punto está dentro de los límites y el carácter coincide, se
    rellena con 'F'.

```{=html}
<!-- -->
```
3.  **Llamadas recursivas**:

    ``` {#10ec02c1-e3b3-801e-9b54-ea8cc1029506 .code}
    fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
    ```

    La función se llama a sí misma para los puntos adyacentes
    (izquierda, derecha, arriba y abajo).

**Función** `flood_fill`

``` {#10ec02c1-e3b3-80a3-a617-cbf609218de3 .code}
void flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}
```

Esta función es la interfaz principal para iniciar el proceso de "flood
fill".

1.  **Llamada a** `fill`:\
    Se llama a la función\
    `fill` con el punto inicial `begin` y el carácter que se encuentra
    en esa posición.

    ``` {#10ec02c1-e3b3-808b-a599-ed0dc9b6e6bc .code}
    fill(tab, size, begin, tab[begin.y][begin.x]);
    ```

------------------------------------------------------------------------

fprime {#10ec02c1-e3b3-80c6-aa7f-e74bda809e8c}
------

> Assignment name : fprime\
> Expected files : fprime.c\
> Allowed functions: printf, atoi\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes a positive int and displays its prime
> factors on the\
> standard output, followed by a newline.\
> \
> Factors must be displayed in ascending order and separated by \'\*\',
> so that\
> the expression in the output gives the right result.\
> \
> If the number of parameters is not 1, simply display a newline.\
> \
> The input, when there is one, will be valid.\
> \
> Examples:\
> \
> \$\> ./fprime 225225 \| cat -e\
> 3\*3\*5\*5\*7\*11\*13\$\
> \$\> ./fprime 8333325 \| cat -e\
> 3\*3\*5\*5\*7\*11\*13\*37\$\
> \$\> ./fprime 9539 \| cat -e\
> 9539\$\
> \$\> ./fprime 804577 \| cat -e\
> 804577\$\
> \$\> ./fprime 42 \| cat -e\
> 2\*3\*7\$\
> \$\> ./fprime 1 \| cat -e\
> 1\$\
> \$\> ./fprime \| cat -e\
> \$\
> \$\> ./fprime 42 21 \| cat -e\
> \$\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome un número entero positivo
    como entrada y muestre sus factores primos en la salida estándar,
    separados por asteriscos y en orden ascendente.

```{=html}
<!-- -->
```
-   **Salida:** La salida debe ser una expresión matemática que
    represente la descomposición en factores primos del número.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento, el programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-8032-aa18-f2573f314e70 .code}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int number;

    if (argc == 2)
    {
        i = 1;
        number = atoi(argv[1]);
        if (number == 1)
            printf("1");
        while (number >= ++i)
        {
            if (number % i == 0)
            {
                printf("%d", i);
                if (number == i)
                    break ;
                printf("*");
                number /= i;
                i = 1;
            }
        }
    }
    printf("\n");
    return (0);
}
```

**Inclusión de bibliotecas**

``` {#10ec02c1-e3b3-8067-877a-f28c5618627c .code}
#include <stdio.h>#include <stdlib.h>
```

Estas líneas incluyen las bibliotecas estándar de C para entrada/salida
(`stdio.h`) y funciones de utilidad (`stdlib.h`).

**Función principal** `main`

``` {#10ec02c1-e3b3-80df-9774-cb55c007859a .code}
int main(int argc, char *argv[])
{
    int i;
    int number;
```

La función `main` es el punto de entrada del programa. Recibe dos
parámetros: `argc` (el número de argumentos de la línea de comandos) y
`argv` (una matriz de cadenas que contiene los argumentos).

**Verificación del número de argumentos**

``` {#10ec02c1-e3b3-8083-970d-c54759f6a7ae .code}
    if (argc == 2)
    {
        i = 1;
        number = atoi(argv[1]);
```

Aquí se verifica si se ha pasado exactamente un argumento (además del
nombre del programa). Si es así, se inicializa `i` a 1 y `number` se
convierte del argumento de cadena a un entero usando `atoi`.

**Caso especial para el número 1**

``` {#10ec02c1-e3b3-80ce-a5bd-e3200821577f .code}
        if (number == 1)
            printf("1");
```

Si el número es 1, se imprime "1".

**Bucle** `while` **para descomposición en factores primos**

``` {#10ec02c1-e3b3-802a-83f3-e3765535d757 .code}
        while (number >= ++i)
        {
            if (number % i == 0)
            {
                printf("%d", i);
                if (number == i)
                    break ;
                printf("*");
                number /= i;
                i = 1;
            }
        }
    }
```

Este bucle descompone el número en sus factores primos:

1.  **Incremento de** `i` **y verificación de divisibilidad**:

    ``` {#10ec02c1-e3b3-8085-b569-f6927b4e00fa .code}
    while (number >= ++i)
    {
        if (number % i == 0)
        {
    ```

    Se incrementa `i` y se verifica si `number` es divisible por `i`.

```{=html}
<!-- -->
```
2.  **Impresión del factor y ajuste del número**:

    ``` {#10ec02c1-e3b3-8034-aec6-d95781c6a9c7 .code}
        printf("%d", i);
        if (number == i)
           break ;
        printf("*");
        number /= i;
        i = 1;
    ```

    Si `number` es divisible por `i`, se imprime `i`. Si `number` es
    igual a `i`, se rompe el bucle. De lo contrario, se imprime un
    asterisco, se divide `number` por `i` y se reinicia `i` a 1 para
    comenzar de nuevo.

**Impresión de nueva línea y retorno**

``` {#10ec02c1-e3b3-8044-9e7d-e24b39536681 .code}
    printf("\n");
    return (0);
}
```

Finalmente, se imprime una nueva línea y la función `main` retorna 0,
indicando que el programa terminó correctamente.

------------------------------------------------------------------------

ft\_itoa {#10ec02c1-e3b3-80db-b94f-c43cc95fe76f}
--------

> Assignment name : ft\_itoa\
> Expected files : ft\_itoa.c\
> Allowed functions: malloc\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that takes an int and converts it to a
> null-terminated string.\
> The function returns the result in a char array that you must
> allocate.\
> \
> Your function must be declared as follows:\
> \
> char \*ft\_itoa(int nbr);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que tome un número entero como
    entrada y lo convierta en una cadena de caracteres terminada en
    nulo.

```{=html}
<!-- -->
```
-   **Retorno:** La función debe devolver un puntero a la cadena de
    caracteres recién creada, que debe ser asignada dinámicamente usando
    `malloc`.
:::

``` {#10ec02c1-e3b3-80be-ab1c-f7cecc220acf .code}
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr) 
{
    if(nbr == -2147483648)
        return("-2147483648\0");
    int n = nbr;
    int len = 0;
    if (nbr <= 0)
        len++;
    while (n) 
    {
        n /= 10;
        len++;
    }
    char *result = (char *)malloc(sizeof(char) * (len + 1));
    if (result == NULL) 
        return NULL;
    result[len] = '\0';
    if (nbr == 0)
    {
        result[0] = '0';
        return(result);
    }
    if (nbr < 0) 
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while (nbr) 
    {
        result[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return result;
}
```

**Inclusión de bibliotecas**

``` {#10ec02c1-e3b3-80d5-8f37-c422da3fa417 .code}
#include <stdio.h>#include <stdlib.h>
```

Estas líneas incluyen las bibliotecas estándar de C para entrada/salida
(`stdio.h`) y funciones de utilidad (`stdlib.h`).

**Función** `ft_itoa`

``` {#10ec02c1-e3b3-8002-b70b-ce25a28cb1f9 .code}
char *ft_itoa(int nbr)
{
```

Esta función convierte un número entero (`int`) en una cadena de
caracteres (`char *`).

**Caso especial para el valor mínimo de un entero**

``` {#10ec02c1-e3b3-8088-8425-f626d91711cd .code}
    if(nbr == -2147483648)
        return("-2147483648\0");
```

Si el número es el valor mínimo de un entero (`-2147483648`), se
devuelve directamente esta cadena, ya que no se puede convertir a
positivo debido a los límites del tipo `int`.

**Inicialización de variables**

``` {#10ec02c1-e3b3-80a0-971b-cfde9203d91a .code}
  int n = nbr;
    int len = 0;
    if (nbr <= 0)
        len++;
```

Se inicializa `n` con el valor de `nbr` y `len` con 0. Si `nbr` es menor
o igual a 0, se incrementa `len` en 1 para contar el signo negativo o el
cero.

**Cálculo de la longitud de la cadena**

``` {#10ec02c1-e3b3-80ad-8679-cb941b199ec1 .code}
  while (n)
    {
        n /= 10;
        len++;
    }
```

Este bucle divide `n` por 10 repetidamente para contar cuántos dígitos
tiene el número, incrementando `len` en cada iteración.

**Asignación de memoria para la cadena resultante**

``` {#10ec02c1-e3b3-80ba-8401-fdff4320d946 .code}
 char *result = (char *)malloc(sizeof(char) * (len + 1));
    if (result == NULL)
        return NULL;
    result[len] = '\0';
```

Se asigna memoria para la cadena resultante, incluyendo espacio para el
carácter nulo (`\0`) al final. Si la asignación falla, se retorna
`NULL`. Luego, se establece el carácter nulo al final de la cadena.

**Manejo del caso en que** `nbr` **es 0**

``` {#10ec02c1-e3b3-808c-9990-f2c34af8d30d .code}
   if (nbr == 0)
    {
        result[0] = '0';
        return(result);
    }
```

Si `nbr` es 0, se asigna '0' a la primera posición de la cadena y se
retorna.

**Manejo de números negativos**

``` {#10ec02c1-e3b3-8090-a6d0-f9b4547c0624 .code}
 if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
```

Si `nbr` es negativo, se coloca un signo '-' en la primera posición de
la cadena y se convierte `nbr` a positivo.

**Conversión del número a cadena**

``` {#10ec02c1-e3b3-80ab-9a4b-d95a4789f81d .code}
   while (nbr)
    {
        result[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return result;
}
```

Este bucle convierte cada dígito del número a su carácter
correspondiente y lo coloca en la posición correcta de la cadena,
comenzando desde el final. Luego, se retorna la cadena resultante.

------------------------------------------------------------------------

ft\_list\_forearch {#10ec02c1-e3b3-8076-9100-ebb12836a76a}
------------------

> Assignment name : ft\_list\_foreach\
> Expected files : ft\_list\_foreach.c, ft\_list.h\
> Allowed functions:\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that takes a list and a function pointer, and applies
> this\
> function to each element of the list.\
> \
> It must be declared as follows:\
> \
> void ft\_list\_foreach(t\_list \*begin\_list, void (\*f)(void \*));\
> \
> The function pointed to by f will be used as follows:\
> \
> (\*f)(list\_ptr-\>data);\
> \
> You must use the following structure, and turn it in as a file called\
> ft\_list.h:\
> \
> typedef struct s\_list\
> {\
> struct s\_list \*next;\
> void \*data;\
> } t\_list;\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   La función `ft_list_foreach` recorre una lista enlazada y aplica una
    función dada a cada elemento de la lista.
:::

``` {#10ec02c1-e3b3-803f-b453-d4cbedf751ce .code}
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
```

``` {#10ec02c1-e3b3-80a7-8c48-f49712a8a037 .code}
#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}
```

**Inclusión del archivo de cabecera**

``` {#10ec02c1-e3b3-80ce-a7aa-e9bc78afb15d .code}
#include "ft_list.h"
```

Esta línea incluye el archivo de cabecera `ft_list.h`, que probablemente
contiene la definición de la estructura `t_list` y otras funciones
relacionadas con listas enlazadas.

**Función** `ft_list_foreach`

``` {#10ec02c1-e3b3-803e-938d-e6b511a250f0 .code}
void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
```

Esta función aplica una función dada (`f`) a cada elemento de una lista
enlazada. Recibe dos parámetros:

-   `begin_list`: un puntero al primer elemento de la lista.

```{=html}
<!-- -->
```
-   `f`: un puntero a una función que toma un `void *` como argumento y
    no retorna nada.

**Bucle** `while` **para recorrer la lista**

``` {#10ec02c1-e3b3-802c-89ba-cffe04e5802f .code}
    while (begin_list)
    {
```

Este bucle `while` recorre la lista enlazada. Continúa mientras
`begin_list` no sea `NULL`.

**Aplicación de la función** `f` **a cada elemento**

``` {#10ec02c1-e3b3-80dc-bf86-c9eaa54bbfeb .code}
        (*f)(begin_list->data);
```

Dentro del bucle, se aplica la función `f` al dato contenido en el nodo
actual de la lista (`begin_list->data`).

**Avance al siguiente nodo**

``` {#10ec02c1-e3b3-8035-9fa1-d34d09e77352 .code}
        begin_list = begin_list->next;
    }
}
```

Después de aplicar la función, el puntero `begin_list` se actualiza para
apuntar al siguiente nodo de la lista (`begin_list->next`). El bucle
continúa hasta que `begin_list` sea `NULL`, es decir, hasta que se haya
procesado el último nodo de la lista.

Resumen

La función `ft_list_foreach` recorre toda la lista enlazada y aplica la
función `f` a los datos de cada nodo. Es una forma común de iterar sobre
una lista enlazada y realizar una operación en cada uno de sus
elementos.

------------------------------------------------------------------------

ft\_list\_remove\_if {#10ec02c1-e3b3-8029-a970-d5d80a1f8744}
--------------------

> Assignment name : ft\_list\_remove\_if\
> Expected files : ft\_list\_remove\_if.c\
> Allowed functions: free\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function called ft\_list\_remove\_if that removes from the\
> passed list any element the data of which is \"equal\" to the
> reference data.\
> \
> It will be declared as follows :\
> \
> void ft\_list\_remove\_if(t\_list \*\*begin\_list, void \*data\_ref,
> int (\*cmp)());\
> \
> cmp takes two void\* and returns 0 when both parameters are equal.\
> \
> You have to use the ft\_list.h file, which will contain:\
> \
> \$\>cat ft\_list.h\
> typedef struct s\_list\
> {\
> struct s\_list \*next;\
> void \*data;\
> } t\_list;\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función llamada `ft_list_remove_if` que
    elimina de la lista pasada cualquier elemento cuyo dato sea
    \"igual\" al dato de referencia.
:::

``` {#111c02c1-e3b3-805e-b064-d3a742c1e360 .code}
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
```

``` {#10ec02c1-e3b3-8071-a837-d0d20577c489 .code}
#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
        return;

    t_list *cur = *begin_list;

    if (cmp(cur->data, data_ref) == 0)
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else // if there is a no else, you cant pass the Moulinette, tryed 2023.09.08
    {
        cur = *begin_list;
        ft_list_remove_if(&cur->next, data_ref, cmp);
    }
}
```

**Inclusión de bibliotecas**

``` {#10ec02c1-e3b3-8073-9be3-dbda9ba8b26f .code}
#include <stdlib.h>
#include "ft_list.h"
```

Estas líneas incluyen las bibliotecas estándar de C para funciones de
utilidad (`stdlib.h`) y el archivo de cabecera `ft_list.h`, que
probablemente contiene la definición de la estructura `t_list` y otras
funciones relacionadas con listas enlazadas.

**Función** `ft_list_remove_if`

``` {#10ec02c1-e3b3-800c-8686-e38857a73ce0 .code}
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
```

Esta función elimina los elementos de una lista enlazada que coinciden
con un valor de referencia (`data_ref`). Recibe tres parámetros:

-   `begin_list`: un puntero al puntero del primer elemento de la lista.

```{=html}
<!-- -->
```
-   `data_ref`: un puntero al dato de referencia con el que se
    compararán los elementos de la lista.

```{=html}
<!-- -->
```
-   `cmp`: un puntero a una función de comparación que toma dos `void *`
    y retorna un `int`.

**Verificación de punteros nulos**

``` {#10ec02c1-e3b3-8062-a3a8-d82c9d11c357 .code}
    if (begin_list == NULL || *begin_list == NULL)
        return
```

Si `begin_list` o el primer elemento de la lista (`*begin_list`) es
`NULL`, la función retorna sin hacer nada.

**Inicialización del puntero** `cur`

``` {#10ec02c1-e3b3-8023-9959-e4606e5ba6e2 .code}
    t_list *cur = *begin_list;
```

Se inicializa `cur` con el primer elemento de la lista.

**Comparación y eliminación del nodo**

``` {#10ec02c1-e3b3-804a-9073-d13711055949 .code}
   if (cmp(cur->data, data_ref) == 0)
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
```

Si el dato del nodo actual (`cur->data`) es igual a `data_ref` (según la
función de comparación `cmp`), se actualiza `begin_list` para que apunte
al siguiente nodo (`cur->next`), se libera la memoria del nodo actual
(`free(cur)`) y se llama recursivamente a `ft_list_remove_if` para
continuar con el siguiente nodo.

**Manejo del caso en que no hay coincidencia**

``` {#10ec02c1-e3b3-8060-bc61-f9995a791e69 .code}
    else // if there is a no else, you cant pass the Moulinette, tryed 2023.09.08
    {
        cur = *begin_list;
        ft_list_remove_if(&cur->next, data_ref, cmp);
    }
}
```

Si el dato del nodo actual no coincide con `data_ref`, se llama
recursivamente a `ft_list_remove_if` con el siguiente nodo
(`cur->next`). La línea de comentario indica que es necesario tener esta
rama `else` para pasar una prueba específica (Moulinette).

Resumen

La función `ft_list_remove_if` recorre la lista enlazada y elimina los
nodos cuyos datos coinciden con `data_ref`, utilizando una función de
comparación `cmp`. La eliminación se realiza de manera recursiva.

------------------------------------------------------------------------

ft\_split {#10ec02c1-e3b3-80a5-a447-c6647f1d5711}
---------

> Assignment name : ft\_split\
> Expected files : ft\_split.c\
> Allowed functions: malloc\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a function that takes a string, splits it into words, and
> returns them as\
> a NULL-terminated array of strings.\
> \
> A \"word\" is defined as a part of a string delimited either by
> spaces/tabs/new\
> lines, or by the start/end of the string.\
> \
> Your function must be declared as follows:\
> \
> char \*\*ft\_split(char \*str);\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe una función que tome una cadena de texto como
    entrada, la divida en palabras y devuelva un arreglo de cadenas
    terminadas en nulo.

```{=html}
<!-- -->
```
-   **Definición de palabra:** Una palabra es una sección de la cadena
    delimitada por espacios, tabulaciones, saltos de línea o el
    inicio/final de la cadena.

```{=html}
<!-- -->
```
-   **Retorno:** La función debe devolver un puntero a un arreglo de
    cadenas, donde cada cadena representa una palabra del texto
    original. El arreglo debe estar terminado en nulo.
:::

``` {#10ec02c1-e3b3-80fe-8ae1-f3b5dbbd05ba .code}
#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
    int i = -1;

    while (++i < n && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return (s1);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int wc = 0;
    
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            wc++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }
    
    char **out = (char **)malloc(sizeof(char *) * (wc + 1));
    i = 0;
    
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (i > j)
        {
            out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(out[k++], &str[j], i - j);
        }
    }
    out[k] = NULL;
    return (out);
}
```

**Función** `ft_strncpy`

``` {#10ec02c1-e3b3-801d-8120-f437f1d2b7f2 .code}
char *ft_strncpy(char *s1, char *s2, int n)
{
    int i = -1;

    while (++i < n && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return (s1);
}
```

1.  **Declaración de la función**: `ft_strncpy` copia hasta `n`
    caracteres de la cadena `s2` a la cadena `s1`.

```{=html}
<!-- -->
```
2.  **Inicialización del índice**: `int i = -1;` inicializa el índice
    `i` a -1.

```{=html}
<!-- -->
```
3.  **Bucle** `while`: `while (++i < n && s2[i])` incrementa `i` y copia
    caracteres de `s2` a `s1` mientras `i` sea menor que `n` y `s2[i]`
    no sea nulo.

```{=html}
<!-- -->
```
4.  **Asignación de caracteres**: `s1[i] = s2[i];` copia el carácter de
    `s2` a `s1`.

```{=html}
<!-- -->
```
5.  **Terminación de la cadena**: `s1[i] = '\0';` añade un carácter nulo
    al final de `s1` para asegurar que es una cadena válida.

```{=html}
<!-- -->
```
6.  **Retorno**: `return (s1);` devuelve la cadena `s1`.

**Función** `ft_split`

``` {#10ec02c1-e3b3-8087-93da-ddc10e53e202 .code}
char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int wc = 0;

    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            wc++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }

    char **out = (char **)malloc(sizeof(char *) * (wc + 1));
    i = 0;

    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (i > j)
        {
            out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(out[k++], &str[j], i - j);
        }
    }
    out[k] = NULL;
    return (out);
}
```

1.  **Declaración de la función**: `ft_split` divide una cadena `str` en
    palabras separadas por espacios, tabulaciones o saltos de línea.

```{=html}
<!-- -->
```
2.  **Inicialización de variables**: `int i = 0, j = 0, k = 0, wc = 0;`
    inicializa los índices y el contador de palabras `wc`.

```{=html}
<!-- -->
```
3.  **Contar palabras**:
    -   **Bucle externo**: `while (str[i])` recorre la cadena `str`.

    ```{=html}
    <!-- -->
    ```
    -   **Saltar espacios**:
        `while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) i++;`
        avanza el índice `i` mientras encuentre espacios, tabulaciones o
        saltos de línea.

    ```{=html}
    <!-- -->
    ```
    -   **Contar palabras**: `if (str[i]) wc++;` incrementa el contador
        de palabras si encuentra una palabra.

    ```{=html}
    <!-- -->
    ```
    -   **Saltar palabra**:
        `while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')) i++;`
        avanza el índice `i` hasta el final de la palabra.

```{=html}
<!-- -->
```
4.  **Asignar memoria**:
    `char **out = (char **)malloc(sizeof(char *) * (wc + 1));` asigna
    memoria para el array de palabras.

```{=html}
<!-- -->
```
5.  **Dividir palabras**:
    -   **Reiniciar índice**: `i = 0;` reinicia el índice `i`.

    ```{=html}
    <!-- -->
    ```
    -   **Bucle externo**: `while (str[i])` recorre la cadena `str`
        nuevamente.

    ```{=html}
    <!-- -->
    ```
    -   **Saltar espacios**:
        `while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) i++;`
        avanza el índice `i` mientras encuentre espacios, tabulaciones o
        saltos de línea.

    ```{=html}
    <!-- -->
    ```
    -   **Guardar inicio de palabra**: `j = i;` guarda el inicio de la
        palabra.

    ```{=html}
    <!-- -->
    ```
    -   **Saltar palabra**:
        `while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')) i++;`
        avanza el índice `i` hasta el final de la palabra.

    ```{=html}
    <!-- -->
    ```
    -   **Copiar palabra**: `if (i > j)` copia la palabra en el array
        `out` usando `ft_strncpy`.

```{=html}
<!-- -->
```
6.  **Terminar array**: `out[k] = NULL;` añade un puntero nulo al final
    del array de palabras.

```{=html}
<!-- -->
```
7.  **Retorno**: `return (out);` devuelve el array de palabras.

------------------------------------------------------------------------

rev\_wstr {#10ec02c1-e3b3-8068-96d8-cd54a3fd928e}
---------

> Assignment name : rev\_wstr\
> Expected files : rev\_wstr.c\
> Allowed functions: write, malloc, free\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes a string as a parameter, and prints its
> words in\
> reverse order.\
> \
> A \"word\" is a part of the string bounded by spaces and/or tabs, or
> the\
> begin/end of the string.\
> \
> If the number of parameters is different from 1, the program will
> display\
> \'\\n\'.\
> \
> In the parameters that are going to be tested, there won\'t be any
> \"additional\"\
> spaces (meaning that there won\'t be additionnal spaces at the
> beginning or at\
> the end of the string, and words will always be separated by exactly
> one space).\
> \
> Examples:\
> \
> \$\> ./rev\_wstr \"You hate people! But I love gatherings. Isn\'t it
> ironic?\" \| cat -e\
> ironic? it Isn\'t gatherings. love I But people! hate You\$\
> \$\>./rev\_wstr \"abcdefghijklm\"\
> abcdefghijklm\
> \$\> ./rev\_wstr \"Wingardium Leviosa\" \| cat -e\
> Leviosa Wingardium\$\
> \$\> ./rev\_wstr \| cat -e\
> \$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome una cadena de texto como
    entrada e imprima sus palabras en orden inverso.

```{=html}
<!-- -->
```
-   **Definición de palabra:** Una palabra es una parte de la cadena
    delimitada por espacios, tabulaciones o el inicio/final de la
    cadena.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento, el programa muestra un salto de línea.

```{=html}
<!-- -->
```
-   **Restricciones:** Las cadenas de entrada no tendrán espacios
    adicionales al principio o al final, y las palabras estarán
    separadas por exactamente un espacio.
:::

``` {#10ec02c1-e3b3-80d9-ad2e-faae4df5968a .code}
#include <unistd.h>

int main(int argc, char **argv)
{
    int start;
    int end;
    int i = 0;
        
    if(argc == 2)
    {   
        while(argv[1][i] != '\0')
            i++;
        while(i >= 0)
        {
            while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
                i--;
            end = i;
            while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                i--;
            start = i + 1;
            int  flag;
            flag = start;
            while(start <= end)
            {
                write (1, &argv[1][start],1);
                start++;        
            }
            if (flag !=0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}
```

1.  **Incluir la biblioteca** `unistd.h`: Esta biblioteca proporciona
    acceso a la función `write`, que se usa para escribir datos en la
    salida estándar.

```{=html}
<!-- -->
```
2.  **Declaración de la función** `main`: La función principal toma dos
    argumentos: `argc` (número de argumentos) y `argv` (array de
    argumentos).

```{=html}
<!-- -->
```
3.  **Declaración de variables**:
    -   `int start;` y `int end;` para marcar el inicio y el final de
        cada palabra.

    ```{=html}
    <!-- -->
    ```
    -   `int i = 0;` para recorrer la cadena de caracteres.

```{=html}
<!-- -->
```
4.  **Comprobación del número de argumentos**: `if(argc == 2)` verifica
    que se haya pasado exactamente un argumento adicional al programa.

```{=html}
<!-- -->
```
5.  **Encontrar la longitud de la cadena**:
    -   `while(argv[1][i] != '\0') i++;` recorre la cadena hasta
        encontrar el carácter nulo (`\0`), incrementando `i` para
        obtener la longitud de la cadena.

```{=html}
<!-- -->
```
6.  **Procesar la cadena desde el final**:
    -   `while(i >= 0)` recorre la cadena hacia atrás.

    ```{=html}
    <!-- -->
    ```
    -   `while(argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t') i--;`
        salta los espacios en blanco y tabulaciones.

    ```{=html}
    <!-- -->
    ```
    -   `end = i;` marca el final de una palabra.

    ```{=html}
    <!-- -->
    ```
    -   `while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t') i--;`
        encuentra el inicio de la palabra.

    ```{=html}
    <!-- -->
    ```
    -   `start = i + 1;` ajusta el inicio de la palabra.

```{=html}
<!-- -->
```
7.  **Imprimir la palabra**:
    -   `int flag; flag = start;` guarda el inicio de la palabra en
        `flag`.

    ```{=html}
    <!-- -->
    ```
    -   `while(start <= end)` recorre la palabra desde `start` hasta
        `end`.

    ```{=html}
    <!-- -->
    ```
    -   `write(1, &argv[1][start], 1);` escribe cada carácter de la
        palabra en la salida estándar.

    ```{=html}
    <!-- -->
    ```
    -   `start++;` avanza al siguiente carácter.

```{=html}
<!-- -->
```
8.  **Imprimir un espacio entre palabras**:
    -   `if (flag != 0) write(1, " ", 1);` imprime un espacio si no es
        la primera palabra.

```{=html}
<!-- -->
```
9.  **Imprimir una nueva línea**: `write(1, "\n", 1);` imprime una nueva
    línea al final.

Este código invierte las palabras de una cadena pasada como argumento al
programa y las imprime en orden inverso.

------------------------------------------------------------------------

rostring {#10ec02c1-e3b3-809d-9199-e6d3931b2c94}
--------

> Assignment name : rostring\
> Expected files : rostring.c\
> Allowed functions: write, malloc, free\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write a program that takes a string and displays this string after
> rotating it\
> one word to the left.\
> \
> Thus, the first word becomes the last, and others stay in the same
> order.\
> \
> A \"word\" is defined as a part of a string delimited either by
> spaces/tabs, or\
> by the start/end of the string.\
> \
> Words will be separated by only one space in the output.\
> \
> If there\'s less than one argument, the program displays \\n.\
> \
> Example:\
> \
> \$\>./rostring \"abc \" \| cat -e\
> abc\$\
> \$\>\
> \$\>./rostring \"Que la lumiere soit et la lumiere fut\"\
> la lumiere soit et la lumiere fut Que\
> \$\>\
> \$\>./rostring \" AkjhZ zLKIJz , 23y\"\
> zLKIJz , 23y AkjhZ\
> \$\>\
> \$\>./rostring \"first\" \"2\" \"11000000\"\
> first\
> \$\>\
> \$\>./rostring \| cat -e\
> \$\
> \$\>\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe un programa que tome una cadena de texto como
    entrada y la muestre después de rotarla una palabra hacia la
    izquierda. Esto significa que la primera palabra se convierte en la
    última, y las demás permanecen en el mismo orden.

```{=html}
<!-- -->
```
-   **Definición de palabra:** Una palabra es una sección de la cadena
    delimitada por espacios, tabulaciones o el inicio/final de la
    cadena.

```{=html}
<!-- -->
```
-   **Salida:** Las palabras se separarán por exactamente un espacio en
    la salida.

```{=html}
<!-- -->
```
-   **Condiciones de error:** Si no se proporciona exactamente un
    argumento, el programa muestra un salto de línea.
:::

``` {#10ec02c1-e3b3-80b0-9b4f-c4747986e417 .code}
#include <unistd.h>

void write_word(char *start, char *end)
{
    while (start < end)
    {
        write(1, start, 1);
        start++;
    }
}

int main(int argc, char **argv)
{
    char *str;
    char *first_word_start;
    char *first_word_end;

    if (argc > 1)
    {
        str = argv[1];
        while (*str == ' ' || *str == '\t') 
            str++;
        first_word_start = str;
        while (*str && *str != ' ' && *str != '\t')
            str++;
        first_word_end = str;
        while (*str == ' ' || *str == '\t')
            str++;
        if (*str) {
            while (*str)
            {
                if (*str == ' ' || *str == '\t')
                {
                    while (*str == ' ' || *str == '\t')
                        str++;
                    if (*str)
                        write(1, " ", 1);
                } 
                else 
                {
                    write(1, str, 1);
                    str++;
                }
            }
            write(1, " ", 1);
        }
        write_word(first_word_start, first_word_end);
    }
    write(1, "\n", 1);
    return 0;
}
```

1.  **Incluir la biblioteca** `unistd.h`: Esta biblioteca proporciona
    acceso a la función `write`, que se usa para escribir datos en la
    salida estándar.

```{=html}
<!-- -->
```
2.  **Declaración de la función** `write_word`:
    -   **Parámetros**: `char *start` y `char *end` son punteros que
        indican el inicio y el final de la palabra a escribir.

    ```{=html}
    <!-- -->
    ```
    -   **Bucle** `while`: `while (start < end)` recorre los caracteres
        desde `start` hasta `end`.

    ```{=html}
    <!-- -->
    ```
    -   **Escribir carácter**: `write(1, start, 1);` escribe el carácter
        apuntado por `start` en la salida estándar.

    ```{=html}
    <!-- -->
    ```
    -   **Incrementar puntero**: `start++;` avanza al siguiente
        carácter.

```{=html}
<!-- -->
```
3.  **Declaración de la función** `main`:
    -   **Parámetros**: `int argc` (número de argumentos) y
        `char **argv` (array de argumentos).

```{=html}
<!-- -->
```
4.  **Declaración de variables**:
    -   `char *str;` para almacenar la cadena de entrada.

    ```{=html}
    <!-- -->
    ```
    -   `char *first_word_start;` y `char *first_word_end;` para marcar
        el inicio y el final de la primera palabra.

```{=html}
<!-- -->
```
5.  **Comprobación del número de argumentos**: `if (argc > 1)` verifica
    que se haya pasado al menos un argumento adicional al programa.

```{=html}
<!-- -->
```
6.  **Procesar la cadena de entrada**:
    -   **Eliminar espacios iniciales**:
        `while (*str == ' ' || *str == '\t') str++;` avanza el puntero
        `str` mientras encuentre espacios o tabulaciones.

    ```{=html}
    <!-- -->
    ```
    -   **Marcar inicio de la primera palabra**:
        `first_word_start = str;`.

    ```{=html}
    <!-- -->
    ```
    -   **Encontrar el final de la primera palabra**:
        `while (*str && *str != ' ' && *str != '\t') str++;`.

    ```{=html}
    <!-- -->
    ```
    -   **Marcar final de la primera palabra**: `first_word_end = str;`.

    ```{=html}
    <!-- -->
    ```
    -   **Eliminar espacios entre palabras**:
        `while (*str == ' ' || *str == '\t') str++;`.

```{=html}
<!-- -->
```
7.  **Imprimir palabras restantes**:
    -   **Bucle** `while`: `while (*str)` recorre la cadena de entrada.

    ```{=html}
    <!-- -->
    ```
    -   **Eliminar espacios**: `if (*str == ' ' || *str == '\t')`
        elimina espacios entre palabras.

    ```{=html}
    <!-- -->
    ```
    -   **Escribir espacio**: `if (*str) write(1, " ", 1);` escribe un
        espacio si hay más palabras.

    ```{=html}
    <!-- -->
    ```
    -   **Escribir carácter**: `else write(1, str, 1);` escribe el
        carácter actual.

    ```{=html}
    <!-- -->
    ```
    -   **Incrementar puntero**: `str++;`.

```{=html}
<!-- -->
```
8.  **Escribir la primera palabra al final**:
    `write_word(first_word_start, first_word_end);`.

```{=html}
<!-- -->
```
9.  **Imprimir una nueva línea**: `write(1, "\n", 1);`.

Este código toma una cadena de entrada, mueve la primera palabra al
final y la imprime, separando las palabras por espacios.

------------------------------------------------------------------------

sort\_in\_tab {#10ec02c1-e3b3-801b-a891-c234a2a98cba}
-------------

> Assignment name : sort\_int\_tab\
> Expected files : sort\_int\_tab.c\
> Allowed functions:\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write the following function:\
> \
> void sort\_int\_tab(int \*tab, unsigned int size);\
> \
> It must sort (in-place) the \'tab\' int array, that contains exactly
> \'size\'\
> members, in ascending order.\
> \
> Doubles must be preserved.\
> \
> Input is always coherent.\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
\~La tarea consiste en crear una función que ordene un arreglo de
enteros en orden ascendente utilizando el algoritmo de ordenación por
inserción, preservando los elementos duplicados.
:::

``` {#10ec02c1-e3b3-8094-a491-d4feb9b70500 .code}
void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int    i = 0;
    int temp;

    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i+ 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }
}
```

1.  **Declaración de la función** `sort_int_tab`:
    -   **Parámetros**: `int *tab` es un puntero a un array de enteros
        que se va a ordenar, y `unsigned int size` es el tamaño del
        array.

```{=html}
<!-- -->
```
2.  **Inicialización de variables**:
    -   `unsigned int i = 0;` inicializa el índice `i` a 0.

    ```{=html}
    <!-- -->
    ```
    -   `int temp;` declara una variable temporal `temp` para
        intercambiar valores.

```{=html}
<!-- -->
```
3.  **Bucle** `while` **principal**:
    -   `while (i < (size - 1))` recorre el array hasta el penúltimo
        elemento.

```{=html}
<!-- -->
```
4.  **Comparación de elementos**:
    -   `if (tab[i] > tab[i + 1])` verifica si el elemento actual es
        mayor que el siguiente.

```{=html}
<!-- -->
```
5.  **Intercambio de elementos**:
    -   `temp = tab[i];` guarda el valor del elemento actual en `temp`.

    ```{=html}
    <!-- -->
    ```
    -   `tab[i] = tab[i + 1];` asigna el valor del siguiente elemento al
        elemento actual.

    ```{=html}
    <!-- -->
    ```
    -   `tab[i + 1] = temp;` asigna el valor guardado en `temp` al
        siguiente elemento.

    ```{=html}
    <!-- -->
    ```
    -   `i = 0;` reinicia el índice `i` a 0 para volver a verificar
        desde el principio.

```{=html}
<!-- -->
```
6.  **Incremento del índice**:
    -   `else i++;` si no se realizó un intercambio, incrementa el
        índice `i` para pasar al siguiente par de elementos.

Resumen

Este código implementa una versión simple del algoritmo de ordenación de
burbuja (bubble sort). La función `sort_int_tab` ordena un array de
enteros en orden ascendente. Recorre el array comparando pares de
elementos adyacentes e intercambiándolos si están en el orden
incorrecto. Si se realiza un intercambio, el índice `i` se reinicia a 0
para volver a verificar desde el principio, asegurando que el array esté
completamente ordenado al final.

------------------------------------------------------------------------

sort\_list {#10ec02c1-e3b3-807c-83bb-c1ffcbacbd50}
----------

> Assignment name : sort\_list\
> Expected files : sort\_list.c\
> Allowed functions:\
> \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\
> \
> Write the following functions:\
> \
> t\_list \*sort\_list(t\_list\* lst, int (\*cmp)(int, int));\
> \
> This function must sort the list given as a parameter, using the
> function\
> pointer cmp to select the order to apply, and returns a pointer to
> the\
> first element of the sorted list.\
> \
> Duplications must remain.\
> \
> Inputs will always be consistent.\
> \
> You must use the type t\_list described in the file list.h\
> that is provided to you. You must include that file\
> (\#include \"list.h\"), but you must not turn it in. We will use our
> own\
> to compile your assignment.\
> \
> Functions passed as cmp will always return a value different from\
> 0 if a and b are in the right order, 0 otherwise.\
> \
> For example, the following function used as cmp will sort the list\
> in ascending order:\
> \
> int ascending(int a, int b)\
> {\
> return (a \<= b);\
> }\

::: {style="font-size:1.5em"}
[💡]{.icon}
:::

::: {style="width:100%"}
-   **Objetivo:** Escribe la función `sort_list` que ordena una lista
    enlazada en función de una función de comparación proporcionada.

```{=html}
<!-- -->
```
-   **Parámetros:**
    -   `lst`: Un puntero al primer elemento de la lista enlazada.

    ```{=html}
    <!-- -->
    ```
    -   `cmp`: Un puntero a una función de comparación que toma dos
        enteros y devuelve un valor distinto de 0 si `a` es menor o
        igual que `b`, y 0 en caso contrario.

```{=html}
<!-- -->
```
-   **Retorno:** La función debe devolver un puntero al primer elemento
    de la lista ordenada.

```{=html}
<!-- -->
```
-   **Preservación de duplicados:** Los duplicados deben mantenerse en
    el orden original.

```{=html}
<!-- -->
```
-   **Entrada coherente:** Se puede asumir que la entrada siempre es
    coherente.

```{=html}
<!-- -->
```
-   **Archivo** `list.h`**:** Se debe utilizar la estructura `t_list`
    definida en el archivo `list.h` proporcionado.
:::

``` {#10ec02c1-e3b3-8022-8d7d-f04adb998f76 .code}
typedef struct s_list t_list;

struct s_list
{
    int     data;
    t_list  *next;
};
```

``` {#10ec02c1-e3b3-8022-b003-ddd63b44acf5 .code}
#include <stdlib.h>
#include "list.h"

t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
    int swap;
    t_list *start;

    start = lst;

    while (lst != NULL && lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
    {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start;
        }
    else
        lst = lst->next;
    }
    return (start);
}
```

1.  **Incluir bibliotecas**:
    -   `#include <stdlib.h>`: Incluye funciones estándar de C, como
        `malloc` y `free`.

    ```{=html}
    <!-- -->
    ```
    -   `#include "list.h"`: Incluye la definición de la estructura
        `t_list`.

```{=html}
<!-- -->
```
2.  **Declaración de la función** `sort_list`:
    -   **Parámetros**:
        -   `t_list* lst`: Un puntero a la lista que se va a ordenar.

        ```{=html}
        <!-- -->
        ```
        -   `int (*cmp)(int, int)`: Un puntero a una función de
            comparación que toma dos enteros y devuelve un entero.

```{=html}
<!-- -->
```
3.  **Declaración de variables**:
    -   `int swap;`: Variable temporal para intercambiar datos.

    ```{=html}
    <!-- -->
    ```
    -   `t_list *start;`: Puntero para almacenar el inicio de la lista.

```{=html}
<!-- -->
```
4.  **Inicialización**:
    -   `start = lst;`: Guarda el puntero inicial de la lista en
        `start`.

```{=html}
<!-- -->
```
5.  **Bucle** `while` **principal**:
    -   `while (lst != NULL && lst->next != NULL)`: Recorre la lista
        mientras haya al menos dos nodos.

```{=html}
<!-- -->
```
6.  **Comparación de elementos**:
    -   `if ((*cmp)(lst->data, lst->next->data) == 0)`: Usa la función
        de comparación `cmp` para comparar los datos del nodo actual y
        el siguiente. Si la función devuelve 0, significa que los
        elementos están en el orden incorrecto.

```{=html}
<!-- -->
```
7.  **Intercambio de elementos**:
    -   `swap = lst->data;`: Guarda el dato del nodo actual en `swap`.

    ```{=html}
    <!-- -->
    ```
    -   `lst->data = lst->next->data;`: Asigna el dato del siguiente
        nodo al nodo actual.

    ```{=html}
    <!-- -->
    ```
    -   `lst->next->data = swap;`: Asigna el dato guardado en `swap` al
        siguiente nodo.

    ```{=html}
    <!-- -->
    ```
    -   `lst = start;`: Reinicia el puntero `lst` al inicio de la lista
        para volver a verificar desde el principio.

```{=html}
<!-- -->
```
8.  **Avanzar al siguiente nodo**:
    -   `else lst = lst->next;`: Si los elementos están en el orden
        correcto, avanza al siguiente nodo.

```{=html}
<!-- -->
```
9.  **Retorno**:
    -   `return (start);`: Devuelve el puntero al inicio de la lista
        ordenada.

Resumen

Este código implementa una versión simple del algoritmo de ordenación de
burbuja (bubble sort) para una lista enlazada. La función `sort_list`
ordena la lista enlazada en orden ascendente utilizando una función de
comparación proporcionada por el usuario. Recorre la lista comparando
pares de nodos adyacentes e intercambiándolos si están en el orden
incorrecto. Si se realiza un intercambio, el puntero `lst` se reinicia
al inicio de la lista para volver a verificar desde el principio,
asegurando que la lista esté completamente ordenada al final.

------------------------------------------------------------------------
:::

[]{.sans style="font-size:14px;padding-top:2em"}
