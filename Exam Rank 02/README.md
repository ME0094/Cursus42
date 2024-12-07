Exam Rank 02 /\* cspell:disable-file \*/ /\* webkit printing magic: print all background colors \*/ html { -webkit-print-color-adjust: exact; } \* { box-sizing: border-box; -webkit-print-color-adjust: exact; } html, body { margin: 0; padding: 0; } @media only screen { body { margin: 2em auto; max-width: 900px; color: rgb(55, 53, 47); } } body { line-height: 1.5; white-space: pre-wrap; } a, a.visited { color: inherit; text-decoration: underline; } .pdf-relative-link-path { font-size: 80%; color: #444; } h1, h2, h3 { letter-spacing: -0.01em; line-height: 1.2; font-weight: 600; margin-bottom: 0; } .page-title { font-size: 2.5rem; font-weight: 700; margin-top: 0; margin-bottom: 0.75em; } h1 { font-size: 1.875rem; margin-top: 1.875rem; } h2 { font-size: 1.5rem; margin-top: 1.5rem; } h3 { font-size: 1.25rem; margin-top: 1.25rem; } .source { border: 1px solid #ddd; border-radius: 3px; padding: 1.5em; word-break: break-all; } .callout { border-radius: 3px; padding: 1rem; } figure { margin: 1.25em 0; page-break-inside: avoid; } figcaption { opacity: 0.5; font-size: 85%; margin-top: 0.5em; } mark { background-color: transparent; } .indented { padding-left: 1.5em; } hr { background: transparent; display: block; width: 100%; height: 1px; visibility: visible; border: none; border-bottom: 1px solid rgba(55, 53, 47, 0.09); } img { max-width: 100%; } @media only print { img { max-height: 100vh; object-fit: contain; } } @page { margin: 1in; } .collection-content { font-size: 0.875rem; } .column-list { display: flex; justify-content: space-between; } .column { padding: 0 1em; } .column:first-child { padding-left: 0; } .column:last-child { padding-right: 0; } .table\_of\_contents-item { display: block; font-size: 0.875rem; line-height: 1.3; padding: 0.125rem; } .table\_of\_contents-indent-1 { margin-left: 1.5rem; } .table\_of\_contents-indent-2 { margin-left: 3rem; } .table\_of\_contents-indent-3 { margin-left: 4.5rem; } .table\_of\_contents-link { text-decoration: none; opacity: 0.7; border-bottom: 1px solid rgba(55, 53, 47, 0.18); } table, th, td { border: 1px solid rgba(55, 53, 47, 0.09); border-collapse: collapse; } table { border-left: none; border-right: none; } th, td { font-weight: normal; padding: 0.25em 0.5em; line-height: 1.5; min-height: 1.5em; text-align: left; } th { color: rgba(55, 53, 47, 0.6); } ol, ul { margin: 0; margin-block-start: 0.6em; margin-block-end: 0.6em; } li > ol:first-child, li > ul:first-child { margin-block-start: 0.6em; } ul > li { list-style: disc; } ul.to-do-list { padding-inline-start: 0; } ul.to-do-list > li { list-style: none; } .to-do-children-checked { text-decoration: line-through; opacity: 0.375; } ul.toggle > li { list-style: none; } ul { padding-inline-start: 1.7em; } ul > li { padding-left: 0.1em; } ol { padding-inline-start: 1.6em; } ol > li { padding-left: 0.2em; } .mono ol { padding-inline-start: 2em; } .mono ol > li { text-indent: -0.4em; } .toggle { padding-inline-start: 0em; list-style-type: none; } /\* Indent toggle children \*/ .toggle > li > details { padding-left: 1.7em; } .toggle > li > details > summary { margin-left: -1.1em; } .selected-value { display: inline-block; padding: 0 0.5em; background: rgba(206, 205, 202, 0.5); border-radius: 3px; margin-right: 0.5em; margin-top: 0.3em; margin-bottom: 0.3em; white-space: nowrap; } .collection-title { display: inline-block; margin-right: 1em; } .page-description { margin-bottom: 2em; } .simple-table { margin-top: 1em; font-size: 0.875rem; empty-cells: show; } .simple-table td { height: 29px; min-width: 120px; } .simple-table th { height: 29px; min-width: 120px; } .simple-table-header-color { background: rgb(247, 246, 243); color: black; } .simple-table-header { font-weight: 500; } time { opacity: 0.5; } .icon { display: inline-block; max-width: 1.2em; max-height: 1.2em; text-decoration: none; vertical-align: text-bottom; margin-right: 0.5em; } img.icon { border-radius: 3px; } .user-icon { width: 1.5em; height: 1.5em; border-radius: 100%; margin-right: 0.5rem; } .user-icon-inner { font-size: 0.8em; } .text-icon { border: 1px solid #000; text-align: center; } .page-cover-image { display: block; object-fit: cover; width: 100%; max-height: 30vh; } .page-header-icon { font-size: 3rem; margin-bottom: 1rem; } .page-header-icon-with-cover { margin-top: -0.72em; margin-left: 0.07em; } .page-header-icon img { border-radius: 3px; } .link-to-page { margin: 1em 0; padding: 0; border: none; font-weight: 500; } p > .user { opacity: 0.5; } td > .user, td > time { white-space: nowrap; } input\[type="checkbox"\] { transform: scale(1.5); margin-right: 0.6em; vertical-align: middle; } p { margin-top: 0.5em; margin-bottom: 0.5em; } .image { border: none; margin: 1.5em 0; padding: 0; border-radius: 0; text-align: center; } .code, code { background: rgba(135, 131, 120, 0.15); border-radius: 3px; padding: 0.2em 0.4em; border-radius: 3px; font-size: 85%; tab-size: 2; } code { color: #eb5757; } .code { padding: 1.5em 1em; } .code-wrap { white-space: pre-wrap; word-break: break-all; } .code > code { background: none; padding: 0; font-size: 100%; color: inherit; } blockquote { font-size: 1.25em; margin: 1em 0; padding-left: 1em; border-left: 3px solid rgb(55, 53, 47); } .bookmark { text-decoration: none; max-height: 8em; padding: 0; display: flex; width: 100%; align-items: stretch; } .bookmark-title { font-size: 0.85em; overflow: hidden; text-overflow: ellipsis; height: 1.75em; white-space: nowrap; } .bookmark-text { display: flex; flex-direction: column; } .bookmark-info { flex: 4 1 180px; padding: 12px 14px 14px; display: flex; flex-direction: column; justify-content: space-between; } .bookmark-image { width: 33%; flex: 1 1 180px; display: block; position: relative; object-fit: cover; border-radius: 1px; } .bookmark-description { color: rgba(55, 53, 47, 0.6); font-size: 0.75em; overflow: hidden; max-height: 4.5em; word-break: break-word; } .bookmark-href { font-size: 0.75em; margin-top: 0.25em; } .sans { font-family: ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI Variable Display", "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol"; } .code { font-family: "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace; } .serif { font-family: Lyon-Text, Georgia, ui-serif, serif; } .mono { font-family: iawriter-mono, Nitti, Menlo, Courier, monospace; } .pdf .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI Variable Display", "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK JP'; } .pdf:lang(zh-CN) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI Variable Display", "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK SC'; } .pdf:lang(zh-TW) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI Variable Display", "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK TC'; } .pdf:lang(ko-KR) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI Variable Display", "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK KR'; } .pdf .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; } .pdf:lang(zh-CN) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; } .pdf:lang(zh-TW) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; } .pdf:lang(ko-KR) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; } .pdf .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK JP'; } .pdf:lang(zh-CN) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK SC'; } .pdf:lang(zh-TW) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK TC'; } .pdf:lang(ko-KR) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK KR'; } .pdf .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; } .pdf:lang(zh-CN) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; } .pdf:lang(zh-TW) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; } .pdf:lang(ko-KR) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; } .highlight-default { color: rgba(55, 53, 47, 1); } .highlight-gray { color: rgba(120, 119, 116, 1); fill: rgba(120, 119, 116, 1); } .highlight-brown { color: rgba(159, 107, 83, 1); fill: rgba(159, 107, 83, 1); } .highlight-orange { color: rgba(217, 115, 13, 1); fill: rgba(217, 115, 13, 1); } .highlight-yellow { color: rgba(203, 145, 47, 1); fill: rgba(203, 145, 47, 1); } .highlight-teal { color: rgba(68, 131, 97, 1); fill: rgba(68, 131, 97, 1); } .highlight-blue { color: rgba(51, 126, 169, 1); fill: rgba(51, 126, 169, 1); } .highlight-purple { color: rgba(144, 101, 176, 1); fill: rgba(144, 101, 176, 1); } .highlight-pink { color: rgba(193, 76, 138, 1); fill: rgba(193, 76, 138, 1); } .highlight-red { color: rgba(212, 76, 71, 1); fill: rgba(212, 76, 71, 1); } .highlight-default\_background { color: rgba(55, 53, 47, 1); } .highlight-gray\_background { background: rgba(241, 241, 239, 1); } .highlight-brown\_background { background: rgba(244, 238, 238, 1); } .highlight-orange\_background { background: rgba(251, 236, 221, 1); } .highlight-yellow\_background { background: rgba(251, 243, 219, 1); } .highlight-teal\_background { background: rgba(237, 243, 236, 1); } .highlight-blue\_background { background: rgba(231, 243, 248, 1); } .highlight-purple\_background { background: rgba(244, 240, 247, 0.8); } .highlight-pink\_background { background: rgba(249, 238, 243, 0.8); } .highlight-red\_background { background: rgba(253, 235, 236, 1); } .block-color-default { color: inherit; fill: inherit; } .block-color-gray { color: rgba(120, 119, 116, 1); fill: rgba(120, 119, 116, 1); } .block-color-brown { color: rgba(159, 107, 83, 1); fill: rgba(159, 107, 83, 1); } .block-color-orange { color: rgba(217, 115, 13, 1); fill: rgba(217, 115, 13, 1); } .block-color-yellow { color: rgba(203, 145, 47, 1); fill: rgba(203, 145, 47, 1); } .block-color-teal { color: rgba(68, 131, 97, 1); fill: rgba(68, 131, 97, 1); } .block-color-blue { color: rgba(51, 126, 169, 1); fill: rgba(51, 126, 169, 1); } .block-color-purple { color: rgba(144, 101, 176, 1); fill: rgba(144, 101, 176, 1); } .block-color-pink { color: rgba(193, 76, 138, 1); fill: rgba(193, 76, 138, 1); } .block-color-red { color: rgba(212, 76, 71, 1); fill: rgba(212, 76, 71, 1); } .block-color-default\_background { color: inherit; fill: inherit; } .block-color-gray\_background { background: rgba(241, 241, 239, 1); } .block-color-brown\_background { background: rgba(244, 238, 238, 1); } .block-color-orange\_background { background: rgba(251, 236, 221, 1); } .block-color-yellow\_background { background: rgba(251, 243, 219, 1); } .block-color-teal\_background { background: rgba(237, 243, 236, 1); } .block-color-blue\_background { background: rgba(231, 243, 248, 1); } .block-color-purple\_background { background: rgba(244, 240, 247, 0.8); } .block-color-pink\_background { background: rgba(249, 238, 243, 0.8); } .block-color-red\_background { background: rgba(253, 235, 236, 1); } .select-value-color-uiBlue { background-color: rgba(35, 131, 226, .07); } .select-value-color-pink { background-color: rgba(245, 224, 233, 1); } .select-value-color-purple { background-color: rgba(232, 222, 238, 1); } .select-value-color-green { background-color: rgba(219, 237, 219, 1); } .select-value-color-gray { background-color: rgba(227, 226, 224, 1); } .select-value-color-transparentGray { background-color: rgba(227, 226, 224, 0); } .select-value-color-translucentGray { background-color: rgba(0, 0, 0, 0.06); } .select-value-color-orange { background-color: rgba(250, 222, 201, 1); } .select-value-color-brown { background-color: rgba(238, 224, 218, 1); } .select-value-color-red { background-color: rgba(255, 226, 221, 1); } .select-value-color-yellow { background-color: rgba(253, 236, 200, 1); } .select-value-color-blue { background-color: rgba(211, 229, 239, 1); } .select-value-color-pageGlass { background-color: undefined; } .select-value-color-washGlass { background-color: undefined; } .checkbox { display: inline-flex; vertical-align: text-bottom; width: 16; height: 16; background-size: 16px; margin-left: 2px; margin-right: 5px; } .checkbox-on { background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20width%3D%2216%22%20height%3D%2216%22%20fill%3D%22%2358A9D7%22%2F%3E%0A%3Cpath%20d%3D%22M6.71429%2012.2852L14%204.9995L12.7143%203.71436L6.71429%209.71378L3.28571%206.2831L2%207.57092L6.71429%2012.2852Z%22%20fill%3D%22white%22%2F%3E%0A%3C%2Fsvg%3E"); } .checkbox-off { background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20x%3D%220.75%22%20y%3D%220.75%22%20width%3D%2214.5%22%20height%3D%2214.5%22%20fill%3D%22white%22%20stroke%3D%22%2336352F%22%20stroke-width%3D%221.5%22%2F%3E%0A%3C%2Fsvg%3E"); }

Exam Rank 02
============

Level 1
=======

first\_word
-----------

> Assignment name : first\_word  
> Expected files : first\_word.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a string and displays its first word, followed by a  
> newline.  
>   
> A word is a section of string delimited by spaces/tabs or by the start/end of  
> the string.  
>   
> If the number of parameters is not 1, or if there are no words, simply display  
> a newline.  
>   
> Examples:  
>   
> $> ./first\_word "FOR PONY" | cat -e  
> FOR$  
> $> ./first\_word "this ... is sparta, then again, maybe not" | cat -e  
> this$  
> $> ./first\_word " " | cat -e  
> $  
> $> ./first\_word "a" "b" | cat -e  
> $  
> $> ./first\_word " lorem,ipsum " | cat -e  
> lorem,ipsum$  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto como entrada y muestre su primera palabra seguida de un salto de línea.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento o si no hay palabras en la cadena, simplemente se muestra un salto de línea.

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

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la función `write`, que se utiliza para escribir datos en archivos o en la salida estándar.
    

2.  **Función principal** `**main**`:
    
        int main (int argc, char **argv)
    
    La función principal recibe dos argumentos: `argc` (el número de argumentos pasados al programa) y `argv` (una matriz de cadenas que contiene los argumentos).
    

3.  **Declaración de la variable** `**i**`:
    
        int i = 0;
    
    Se declara e inicializa la variable `i` a 0. Esta variable se usará como índice para recorrer la cadena.
    

4.  **Comprobación del número de argumentos**:
    
        if (argc == 2)
    
    Se verifica si el número de argumentos es 2. Esto asegura que el programa solo se ejecutará si se pasa exactamente un argumento adicional (además del nombre del programa).
    

5.  **Salto de espacios y tabulaciones iniciales**:
    
        while (argv[1][i] == 32 || argv[1][i] == 9)
            i++;
    
    Este bucle `while` avanza el índice `i` mientras el carácter actual en `argv[1]` sea un espacio (código ASCII 32) o una tabulación (código ASCII 9).
    

6.  **Escritura de caracteres hasta el siguiente espacio o tabulación**:
    
        while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    
    Este segundo bucle `while` escribe caracteres en la salida estándar (usando `write`) hasta encontrar un espacio, una tabulación o el final de la cadena.
    

7.  **Escritura de un salto de línea**:
    
        write(1, "\n", 1);
    
    Finalmente, se escribe un salto de línea para terminar la salida.
    

En resumen, este programa toma un argumento de línea de comandos, omite los espacios y tabulaciones iniciales, y luego imprime los caracteres hasta el siguiente espacio o tabulación.

* * *

fizzbuzz
--------

> Assignment name : fizzbuzz  
> Expected files : fizzbuzz.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that prints the numbers from 1 to 100, each separated by a  
> newline.  
>   
> If the number is a multiple of 3, it prints 'fizz' instead.  
>   
> If the number is a multiple of 5, it prints 'buzz' instead.  
>   
> If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.  
>   
> Example:  
>   
> $>./fizzbuzz  
> 1  
> 2  
> fizz  
> 4  
> buzz  
> fizz  
> 7  
> 8  
> fizz  
> buzz  
> 11  
> fizz  
> 13  
> 14  
> fizzbuzz  
> \[...\]  
> 97  
> 98  
> fizz  
> buzz  
> $>  

💡

*   **Objetivo:** Escribe un programa que imprima los números del 1 al 100, cada uno separado por un salto de línea.

*   **Condiciones especiales:**
    
    *   Si el número es múltiplo de 3, imprime "fizz".
    
    *   Si el número es múltiplo de 5, imprime "buzz".
    
    *   Si el número es múltiplo de 3 y de 5, imprime "fizzbuzz".

    #include <unistd.h>
    
    void	ft_write_number(int number)
    {
    	char	str[10] = "0123456789";
    
    	if (number > 9)
    		ft_write_number(number / 10);
    	write (1, &str[number % 10], 1);
    }
    
    int		main()
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

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la función `write`, que se utiliza para escribir datos en archivos o en la salida estándar.
    

2.  **Definición de la función** `**ft_write_number**`:
    
        void	ft_write_number(int number)
    
    Esta función se encarga de escribir un número entero en la salida estándar.
    

3.  **Declaración de la cadena** `**str**`:
    
        char	str[10] = "0123456789";
    
    Se declara una cadena que contiene los caracteres del 0 al 9.
    

4.  **Condición para números mayores que 9**:
    
        if (number > 9)
            ft_write_number(number / 10);
    
    Si el número es mayor que 9, la función se llama a sí misma recursivamente con el número dividido por 10. Esto permite descomponer el número en sus dígitos individuales.
    

5.  **Escritura del dígito actual**:
    
        write (1, &str[number % 10], 1);
    
    Se escribe el dígito correspondiente al residuo de `number` dividido por 10.
    

6.  **Función principal** `**main**`:
    
        int		main()
    
    La función principal del programa.
    

7.  **Inicialización de la variable** `**i**`:
    
        int i = 1;
    
    Se declara e inicializa la variable `i` a 1. Esta variable se usará para contar del 1 al 100.
    

8.  **Bucle** `**while**` **para iterar del 1 al 100**:
    
        while (i <= 100)
    

9.  **Condición para múltiplos de 15**:
    
        if (i % 15 == 0)
            write (1, "fizzbuzz", 8);
    
    Si `i` es múltiplo de 15, se escribe “fizzbuzz”.
    

10.  **Condición para múltiplos de 3**:
    
        else if (i % 3 == 0)
            write (1, "fizz", 4);
    
    Si `i` es múltiplo de 3, se escribe “fizz”.
    

11.  **Condición para múltiplos de 5**:
    
        else if (i % 5 == 0)
            write (1, "buzz", 4);
    
    Si `i` es múltiplo de 5, se escribe “buzz”.
    

12.  **Escritura del número**:
    
        else
            ft_write_number(i);
    
    Si `i` no es múltiplo de 3, 5 o 15, se escribe el número usando la función `ft_write_number`.
    

13.  **Incremento de** `**i**`:
    
        i++;
    

14.  **Escritura de un salto de línea**:
    
        write (1, "\n", 1);
        
    
    Después de cada iteración, se escribe un salto de línea para separar las salidas.
    

En resumen, este programa imprime los números del 1 al 100, pero reemplaza los múltiplos de 3 con “fizz”, los múltiplos de 5 con “buzz” y los múltiplos de 15 con “fizzbuzz”.

* * *

ft\_putstr
----------

> Assignment name : ft\_putstr  
> Expected files : ft\_putstr.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a function that displays a string on the standard output.  
>   
> The pointer passed to the function contains the address of the string's first  
> character.  
>   
> Your function must be declared as follows:  
>   
> void ft\_putstr(char \*str);  

💡

*   **Objetivo:** Escribe una función que muestre una cadena de texto en la salida estándar.

    #include <unistd.h>
    
    void	ft_putstr(char *str)
    {
    	int	i = 0;
    
    	while (str[i])
    		write(1, &str[i++], 1);
    }

* * *

ft\_strcpy
----------

> Assignment name : ft\_strcpy  
> Expected files : ft\_strcpy.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Reproduce the behavior of the function strcpy (man strcpy).  
>   
> Your function must be declared as follows:  
>   
> char \*ft\_strcpy(char \*s1, char \*s2);  

💡

*   **Objetivo:** Reproduce el comportamiento de la función `strcpy` de la biblioteca estándar de C.

    char	*ft_strcpy(char *s1, char *s2)
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

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la función `write`, que se utiliza para escribir datos en archivos o en la salida estándar.
    

2.  **Definición de la función** `**ft_putstr**`:
    
        void	ft_putstr(char *str)
    
    Esta función toma un puntero a una cadena de caracteres (`char *str`) y se encarga de escribir esa cadena en la salida estándar.
    

3.  **Declaración e inicialización de la variable** `**i**`:
    
        int	i = 0;
    
    Se declara e inicializa la variable `i` a 0. Esta variable se usará como índice para recorrer la cadena.
    

4.  **Bucle** `**while**` **para recorrer la cadena**:
    
        while (str[i])
    
    Este bucle `while` continúa ejecutándose mientras el carácter actual en `str[i]` no sea el carácter nulo (`'\0'`), que indica el final de la cadena.
    

5.  **Escritura de cada carácter**:
    
        write(1, &str[i++], 1);
    
    Dentro del bucle, se utiliza la función `write` para escribir el carácter actual (`str[i]`) en la salida estándar. El índice `i` se incrementa después de cada escritura para pasar al siguiente carácter.
    

En resumen, esta función recorre la cadena de caracteres `str` y escribe cada carácter en la salida estándar uno por uno hasta llegar al final de la cadena.

* * *

ft\_strlen
----------

> Assignment name : ft\_strlen  
> Expected files : ft\_strlen.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write a function that returns the length of a string.  
>   
> Your function must be declared as follows:  
>   
> int ft\_strlen(char \*str);  

💡

*   **Objetivo:** Escribe una función que devuelva la longitud de una cadena de texto.

    int ft_strlen(char *str)
    {
    	int	i = 0;
    
    	while (str[i])
    		i++;
    	return (i);
    }

1.  **Definición de la función** `**ft_strlen**`:
    
        int ft_strlen(char *str)
    
    Esta función toma un puntero a una cadena de caracteres (`char *str`) y devuelve la longitud de esa cadena como un entero.
    

2.  **Declaración e inicialización de la variable** `**i**`:
    
        int i = 0;
    
    Se declara e inicializa la variable `i` a 0. Esta variable se usará como contador para medir la longitud de la cadena.
    

3.  **Bucle** `**while**` **para recorrer la cadena**:
    
        while (str[i])
            i++;
    
    Este bucle `while` continúa ejecutándose mientras el carácter actual en `str[i]` no sea el carácter nulo (`'\0'`), que indica el final de la cadena. En cada iteración, se incrementa `i` en 1.
    

4.  **Devolución de la longitud de la cadena**:
    
        return (i);
    
    Una vez que el bucle `while` termina, `i` contiene la longitud de la cadena, y esta longitud se devuelve como el resultado de la función.
    

En resumen, esta función recorre la cadena de caracteres `str` y cuenta cuántos caracteres hay hasta llegar al carácter nulo (`'\0'`). La longitud de la cadena se devuelve como un entero.

* * *

ft\_swap
--------

> Assignment name : ft\_swap  
> Expected files : ft\_swap.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write a function that swaps the contents of two integers the adresses of which  
> are passed as parameters.  
>   
> Your function must be declared as follows:  
>   
> void ft\_swap(int \*a, int \*b);  

💡

*   **Objetivo:** Escribe una función que intercambie los valores de dos enteros cuyas direcciones se pasan como parámetros.

    void	ft_swap(int *a, int *b)
    {
    	int temp = *a;
    	*a = *b;
    	*b = temp;
    }

1.  **Definición de la función** `**ft_swap**`:
    
        void	ft_swap(int *a, int *b
    
    Esta función toma dos punteros a enteros (`int *a` y `int *b`) y se encarga de intercambiar los valores a los que apuntan.
    

2.  **Declaración e inicialización de la variable** `**temp**`:
    
        int temp = *a;
    
    Se declara una variable temporal `temp` y se inicializa con el valor al que apunta `a`. Esto se hace para almacenar temporalmente el valor de `a`.
    

3.  **Intercambio del valor de** `**a**` **con el valor de** `**b**`:
    
        *a = *b;
    
    El valor al que apunta `a` se reemplaza con el valor al que apunta `b`.
    

4.  **Asignación del valor almacenado en** `**temp**` **a** `**b**`:
    
        *b = temp;
    
    Finalmente, el valor almacenado en `temp` (que originalmente era el valor de `a`) se asigna al valor al que apunta `b`.
    

En resumen, esta función intercambia los valores de dos variables enteras utilizando una variable temporal para almacenar uno de los valores durante el proceso de intercambio.

* * *

repeat\_alpha
-------------

> Assignment name : repeat\_alpha  
> Expected files : repeat\_alpha.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program called repeat\_alpha that takes a string and display it  
> repeating each alphabetical character as many times as its alphabetical index,  
> followed by a newline.  
>   
> 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...  
>   
> Case remains unchanged.  
>   
> If the number of arguments is not 1, just display a newline.  
>   
> Examples:  
>   
> $>./repeat\_alpha "abc"  
> abbccc  
> $>./repeat\_alpha "Alex." | cat -e  
> Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$  
> $>./repeat\_alpha 'abacadaba 42!' | cat -e  
> abbacccaddddabba 42!$  
> $>./repeat\_alpha | cat -e  
> $  
> $>  
> $>./repeat\_alpha "" | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa llamado `repeat_alpha` que tome una cadena de texto como entrada y la muestre repitiendo cada carácter alfabético tantas veces como su índice alfabético, seguido de un salto de línea.

*   **Reglas de repetición:**
    
    *   'a' se convierte en 'a'.
    
    *   'b' se convierte en 'bb'.
    
    *   'e' se convierte en 'eeeee', etc.
    
    *   El caso (mayúscula o minúscula) se mantiene.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, simplemente se muestra un salto de línea.

*   **En resumen:** El programa debe repetir cada carácter alfabético en una cadena tantas veces como su posición en el alfabeto, manteniendo el caso original. Si no se proporciona una cadena de texto, se debe imprimir un salto de línea.

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

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la función `write`, que se utiliza para escribir datos en archivos, incluyendo la salida estándar.
    

2.  **Función principal** `**main**`:
    
        int main(int ac, char **av)
    
    La función principal recibe dos parámetros: `ac` (el número de argumentos) y `av` (una matriz de cadenas que contiene los argumentos).
    

3.  **Declaración de variables**:
    
        int i;
        int count;
    
    Se declaran dos variables enteras: `i` para iterar a través de los caracteres de la cadena y `count` para determinar cuántas veces se debe imprimir cada carácter.
    

4.  **Comprobación del número de argumentos**:
    
        if (ac == 2)
    
    Se verifica que el programa reciba exactamente un argumento adicional (además del nombre del programa).
    

5.  **Inicialización del índice** `**i**`:
    
        i = 0;
    
    Se inicializa `i` a 0 para comenzar a recorrer la cadena desde el primer carácter.
    

6.  **Bucle** `**while**` **para recorrer la cadena**:
    
        while (av[1][i])
    
    Este bucle recorre cada carácter de la cadena proporcionada como argumento hasta llegar al final de la cadena (`'\0'`).
    

7.  **Determinación del valor de** `**count**`:
    
        if (av[1][i] >= 'a' && av[1][i] <= 'z')
            count = av[1][i] - 'a' + 1;
        else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            count = av[1][i] - 'A' + 1;
        else
            count = 1;
    
    *   Si el carácter es una letra minúscula (`az`), `count` se establece en su posición en el alfabeto (por ejemplo, ‘a’ es 1, ‘b’ es 2, etc.).
    
    *   Si el carácter es una letra mayúscula (`AZ`), `count` se establece de manera similar.
    
    *   Si el carácter no es una letra, `count` se establece en 1.

8.  **Bucle** `**while**` **interno para imprimir el carácter**:
    
        while (count--)
            write(1, &av[1][i], 1);
    
    Este bucle imprime el carácter actual `count` veces usando la función `write`.
    

9.  **Incremento del índice** `**i**`:
    
        i++;
    
    Se incrementa `i` para pasar al siguiente carácter de la cadena.
    

10.  **Impresión de un salto de línea**:
    
        write(1, "\n", 1);
    
    Después de procesar toda la cadena, se imprime un salto de línea para finalizar la salida.
    

11.  **Retorno de la función** `**main**`:
    
        return 0;
    
    La función `main` retorna 0, indicando que el programa ha terminado correctamente.
    

Este programa toma una cadena como argumento y repite cada letra tantas veces como su posición en el alfabeto. Por ejemplo, si la entrada es “abc”, la salida será “abbccc”.

* * *

rev\_print
----------

> Assignment name : rev\_print  
> Expected files : rev\_print.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a function that takes a string, and displays the string in reverse  
> followed by a newline.  
>   
> The original string must not be modified.  
>   
> You must return the string passed as a parameter.  
>   
> Your function must be declared as follows:  
>   
> char \*rev\_print(char \*str);  
>   
> Examples:  
>   
> int main(void)  
> {  
> rev\_print("Hello world");  
> write (1, "\\n", 1);  
> rev\_print("tnirp esreveR");  
> write (1, "\\n", 1);  
> rev\_print("");  
> write (1, "\\n", 1);  
> }  
>   
> Output :  
> $> ./a.out | cat -e  
> dlrow olleH$  
> $> ./a.out | cat -e  
> Reverse print$  
> $> ./a.out | cat -e  
> $  

💡

*   **Objetivo:** Escribe una función que tome una cadena de texto como entrada y la muestre en orden inverso seguida de un salto de línea.

*   **Restricción:** La cadena original no debe ser modificada.

*   **Retorno:** La función debe devolver la cadena original.

    #include <unistd.h>
    
    char	*rev_print(char *str)
    {
    	int	i = 0;
    	
    	while(str[i])
    		i++;
    	while(--i >= 0)
    		write(1, &str[i], 1);
    	write(1, "\n", 1);
    	return (str);
    }

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la función `write`, que se utiliza para escribir datos en archivos, incluyendo la salida estándar.
    

2.  **Definición de la función** `**rev_print**`:
    
        char *rev_print(char *str)
    
    La función `rev_print` toma un puntero a una cadena de caracteres (`char *str`) y devuelve un puntero a la misma cadena.
    

3.  **Declaración e inicialización de la variable** `**i**`:
    
        int i = 0;
    
    Se declara una variable entera `i` e inicializa a 0. Esta variable se utilizará para recorrer la cadena.
    

4.  **Bucle** `**while**` **para encontrar la longitud de la cadena**:
    
        while(str[i])
            i++;
    
    Este bucle incrementa `i` hasta que alcanza el carácter nulo (`'\0'`), que indica el final de la cadena. Al final del bucle, `i` contendrá la longitud de la cadena.
    

5.  **Bucle** `**while**` **para imprimir la cadena en orden inverso**:
    
        while(--i >= 0)
            write(1, &str[i], 1);
    
    *   Primero, `i` se decrementa en 1 (`-i`).
    
    *   Luego, se utiliza la función `write` para imprimir el carácter en la posición `i` de la cadena.
    
    *   Este bucle continúa hasta que `i` es menor que 0, imprimiendo así los caracteres de la cadena en orden inverso.

6.  **Impresión de un salto de línea**:
    
        write(1, "\n", 1);
    
    Después de imprimir todos los caracteres en orden inverso, se imprime un salto de línea para finalizar la salida.
    

7.  **Retorno de la cadena original**:
    
        return (str);
    
    La función devuelve el puntero a la cadena original.
    

Este programa toma una cadena como entrada y la imprime en orden inverso. Por ejemplo, si la entrada es “hola”, la salida será “aloh”.

* * *

rot\_13
-------

> Assignment name : rot\_13  
> Expected files : rot\_13.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a string and displays it, replacing each of its  
> letters by the letter 13 spaces ahead in alphabetical order.  
>   
> 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.  
>   
> The output will be followed by a newline.  
>   
> If the number of arguments is not 1, the program displays a newline.  
>   
> Example:  
>   
> $>./rot\_13 "abc"  
> nop  
> $>./rot\_13 "My horse is Amazing." | cat -e  
> Zl ubefr vf Nznmvat.$  
> $>./rot\_13 "AkjhZ zLKIJz , 23y " | cat -e  
> NxwuM mYXVWm , 23l $  
> $>./rot\_13 | cat -e  
> $  
> $>  
> $>./rot\_13 "" | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto como entrada y la muestre, reemplazando cada letra por la letra que está 13 posiciones más adelante en el orden alfabético.

*   **Reglas de reemplazo:**
    
    *   'z' se convierte en 'm' y 'Z' se convierte en 'M'.
    
    *   El caso (mayúscula o minúscula) se mantiene.

*   **Salida:** La salida será seguida por un salto de línea.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, el programa muestra un salto de línea.

    #include <unistd.h>
    
    int	main(int argc, char **argv)
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

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la función `write`, que se utiliza para escribir datos en archivos, incluyendo la salida estándar.
    

2.  **Función principal** `**main**`:
    
        int main(int argc, char **argv)
    
    La función principal recibe dos parámetros: `argc` (el número de argumentos) y `argv` (una matriz de cadenas que contiene los argumentos).
    

3.  **Declaración e inicialización de la variable** `**i**`:
    
        int i = 0;
    
    Se declara una variable entera `i` e inicializa a 0. Esta variable se utilizará para recorrer la cadena.
    

4.  **Comprobación del número de argumentos**:
    
        if (argc > 1)
    
    Se verifica que el programa reciba al menos un argumento adicional (además del nombre del programa).
    

5.  **Bucle** `**while**` **para recorrer la cadena**:
    
        while(argv[1][i])
    
    Este bucle recorre cada carácter de la cadena proporcionada como argumento hasta llegar al final de la cadena (`'\0'`).
    

6.  **Cifrado ROT13**:
    
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
    
    *   Si el carácter es una letra minúscula (`az`), se aplica el cifrado ROT13: se desplaza 13 posiciones en el alfabeto.
    
    *   Si el carácter es una letra mayúscula (`AZ`), se aplica el mismo cifrado ROT13.

7.  **Impresión del carácter cifrado**:
    
        write(1, &argv[1][i], 1);
    
    Se utiliza la función `write` para imprimir el carácter cifrado.
    

8.  **Incremento del índice** `**i**`:
    
        i++;
    
    Se incrementa `i` para pasar al siguiente carácter de la cadena.
    

9.  **Impresión de un salto de línea**:
    
        write(1, "\n", 1);
    
    Después de procesar toda la cadena, se imprime un salto de línea para finalizar la salida.
    

10.  **Retorno de la función** `**main**`:
    
        return (0);
    
    La función `main` retorna 0, indicando que el programa ha terminado correctamente.
    

Este programa toma una cadena como argumento y aplica el cifrado ROT13 a cada letra.

* * *

rotone
------

> Assignment name : rotone  
> Expected files : rotone.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a string and displays it, replacing each of its  
> letters by the next one in alphabetical order.  
>   
> 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.  
>   
> The output will be followed by a \\n.  
>   
> If the number of arguments is not 1, the program displays \\n.  
>   
> Example:  
>   
> $>./rotone "abc"  
> bcd  
> $>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e  
> Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$  
> $>./rotone "AkjhZ zLKIJz , 23y " | cat -e  
> BlkiA aMLJKa , 23z $  
> $>./rotone | cat -e  
> $  
> $>  
> $>./rotone "" | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto como entrada y la muestre, reemplazando cada letra por la siguiente en el orden alfabético.

*   **Reglas de reemplazo:**
    
    *   'z' se convierte en 'a' y 'Z' se convierte en 'A'.
    
    *   El caso (mayúscula o minúscula) se mantiene.

*   **Salida:** La salida será seguida por un salto de línea.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, el programa muestra un salto de línea.

    #include <unistd.h>
    
    void	ft_putchar(char c)
    {
    	write(1, &c, 1);
    }
    
    void	rotone(char *s)
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
    
    int		main(int ac, char **av)
    {
    	if (ac == 2)
    		rotone(av[1]);
    	ft_putchar('\n');
    	return (0);
    }

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la función `write`, que se utiliza para escribir datos en archivos, incluyendo la salida estándar.
    

2.  **Definición de la función** `**ft_putchar**`:
    
        void ft_putchar(char c)
        {
            write(1, &c, 1);
        }
    
    La función `ft_putchar` toma un carácter `c` y lo escribe en la salida estándar utilizando la función `write`.
    

3.  **Definición de la función** `**rotone**`:
    
        void rotone(char *s
    
    La función `rotone` toma un puntero a una cadena de caracteres (`char *s`) y aplica una transformación a cada carácter de la cadena.
    

4.  **Bucle** `**while**` **para recorrer la cadena**:
    
        while (*s)
    
    Este bucle recorre cada carácter de la cadena proporcionada como argumento hasta llegar al final de la cadena (`'\0'`).
    

5.  **Transformación de cada carácter**:
    
        if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
            ft_putchar(*s + 1);
        else if (*s == 'Z' || *s == 'z')
            ft_putchar(*s - 25);
        else
            ft_putchar(*s);
    
    *   Si el carácter es una letra mayúscula entre ‘A’ y ‘Y’ o una letra minúscula entre ‘a’ y ‘y’, se incrementa en 1 su valor ASCII, transformándolo en la siguiente letra del alfabeto.
    
    *   Si el carácter es ‘Z’ o ‘z’, se transforma en ‘A’ o ‘a’ respectivamente, restando 25 a su valor ASCII.
    
    *   Si el carácter no es una letra, se imprime tal cual.

6.  **Incremento del puntero** `**s**`:
    
        ++s
    
    Se incrementa el puntero `s` para pasar al siguiente carácter de la cadena.
    

7.  **Función principal** `**main**`:
    
        int main(int ac, char **av)
    
    La función principal recibe dos parámetros: `ac` (el número de argumentos) y `av` (una matriz de cadenas que contiene los argumentos).
    

8.  **Comprobación del número de argumentos**:
    
        if (ac == 2)
            rotone(av[1]);
    
    Se verifica que el programa reciba exactamente un argumento adicional (además del nombre del programa). Si es así, se llama a la función `rotone` con el argumento proporcionado.
    

9.  **Impresión de un salto de línea**:
    
        ft_putchar('\n')
    
    Después de procesar toda la cadena, se imprime un salto de línea para finalizar la salida.
    

10.  **Retorno de la función** `**main**`:
    
        return (0);
    
    La función `main` retorna 0, indicando que el programa ha terminado correctamente.
    

Este programa toma una cadena como argumento y aplica una transformación ROT1 a cada letra, es decir, desplaza cada letra una posición en el alfabeto.

* * *

search\_and\_replace
--------------------

> Assignment name : search\_and\_replace  
> Expected files : search\_and\_replace.c  
> Allowed functions: write, exit  
> \--------------------------------------------------------------------------------  
>   
> Write a program called search\_and\_replace that takes 3 arguments, the first  
> arguments is a string in which to replace a letter (2nd argument) by  
> another one (3rd argument).  
>   
> If the number of arguments is not 3, just display a newline.  
>   
> If the second argument is not contained in the first one (the string)  
> then the program simply rewrites the string followed by a newline.  
>   
> Examples:  
> $>./search\_and\_replace "Papache est un sabre" "a" "o"  
> Popoche est un sobre  
> $>./search\_and\_replace "zaz" "art" "zul" | cat -e  
> $  
> $>./search\_and\_replace "zaz" "r" "u" | cat -e  
> zaz$  
> $>./search\_and\_replace "jacob" "a" "b" "c" "e" | cat -e  
> $  
> $>./search\_and\_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e  
> ZaZ eT David aiME le METal.$  
> $>./search\_and\_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e  
> eNcOre Un ExEmPle Pas Facile a Ecrire $  

💡

*   **Objetivo:** Escribe un programa llamado `search_and_replace` que tome tres argumentos: una cadena de texto, un carácter a buscar y un carácter de reemplazo. El programa debe reemplazar todas las ocurrencias del segundo argumento en la cadena con el tercero.

*   **Condiciones de error:**
    
    *   Si no se proporcionan exactamente tres argumentos, se muestra un salto de línea.
    
    *   Si el segundo argumento (el carácter a buscar) no se encuentra en la cadena, se muestra la cadena original sin cambios seguida de un salto de línea.

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

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la función `write`, que se utiliza para escribir datos en archivos, incluyendo la salida estándar.
    

2.  **Función principal** `**main**`:
    
        int main(int argc, char **argv)
    
    La función principal recibe dos parámetros: `argc` (el número de argumentos) y `argv` (una matriz de cadenas que contiene los argumentos).
    

3.  **Declaración e inicialización de la variable** `**i**`:
    
        int i = 0
    
    Se declara una variable entera `i` e inicializa a 0. Esta variable se utilizará para recorrer la cadena.
    

4.  **Comprobación del número de argumentos y longitud de los argumentos**:
    
        if (argc == 4 && !argv[2][1] && !argv[3][1]
    
    *   Se verifica que el programa reciba exactamente tres argumentos adicionales (además del nombre del programa).
    
    *   Se comprueba que los argumentos `argv[2]` y `argv[3]` sean caracteres individuales (es decir, que su longitud sea 1).

5.  **Bucle** `**while**` **para recorrer la cadena**:
    
        while (argv[1][i] != '\0')
    
    Este bucle recorre cada carácter de la cadena proporcionada como primer argumento hasta llegar al final de la cadena (`'\0'`).
    

6.  **Reemplazo de caracteres**:
    
        if (argv[1][i] == argv[2][0])
            argv[1][i] = argv[3][0];
    
    *   Si el carácter actual de la cadena es igual al carácter especificado en `argv[2]`, se reemplaza por el carácter especificado en `argv[3]`.

7.  **Impresión del carácter actual**:
    
        write(1, &argv[1][i], 1);
    
    Se utiliza la función `write` para imprimir el carácter actual (ya sea el original o el reemplazado).
    

8.  **Incremento del índice** `**i**`:
    
        i++;
    
    Se incrementa `i` para pasar al siguiente carácter de la cadena.
    

9.  **Impresión de un salto de línea**:
    
        write(1, "\n", 1)
    
    Después de procesar toda la cadena, se imprime un salto de línea para finalizar la salida.
    

Este programa toma una cadena como argumento y reemplaza todas las ocurrencias de un carácter específico por otro carácter especificado.

* * *

ulstr
-----

> Assignment name : ulstr  
> Expected files : ulstr.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a string and reverses the case of all its letters.  
> Other characters remain unchanged.  
>   
> You must display the result followed by a '\\n'.  
>   
> If the number of arguments is not 1, the program displays '\\n'.  
>   
> Examples :  
>   
> $>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e  
> l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$  
> $>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe. " | cat -e  
> s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE. $  
> $>./ulstr "3:21 Ba tOut moUn ki Ka di KE m'en Ka fe fot" | cat -e  
> 3:21 bA ToUT MOuN KI kA DI ke M'EN kA FE FOT$  
> $>./ulstr | cat -e  
> $  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto como entrada y convierta todas las letras mayúsculas en minúsculas y viceversa. Otros caracteres (números, símbolos, espacios) se mantienen sin cambios.

*   **Salida:** El resultado se muestra seguido de un salto de línea.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, el programa muestra un salto de línea.

    #include <unistd.h>
    
    int main(int argc, char **argv)
    {
    	int	i = 0;
    
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

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la API del sistema operativo, incluyendo la función `write`.
    

2.  **Definición de la función** `**main**`:
    
        int main(int argc, char **argv)
    
    La función principal del programa. `argc` es el número de argumentos pasados al programa y `argv` es un array de cadenas de caracteres que contiene los argumentos.
    

3.  **Inicialización de la variable** `**i**`:
    
        int i = 0;
    
    Se declara e inicializa la variable `i` a 0. Esta variable se usará como índice para recorrer la cadena de caracteres.
    

4.  **Comprobación del número de argumentos**:
    
        if (argc == 2)
    
    Se verifica que el programa ha recibido exactamente un argumento adicional (además del nombre del programa).
    

5.  **Bucle** `**while**` **para recorrer la cadena**:
    
        while (argv[1][i] != '\0')
    
    Este bucle recorre cada carácter de la cadena pasada como argumento hasta encontrar el carácter nulo (`'\0'`), que indica el final de la cadena.
    

6.  **Conversión de mayúsculas a minúsculas y viceversa**:
    
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            argv[1][i] -= 32;
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            argv[1][i] += 32;
    
    *   Si el carácter es una letra minúscula (`'a'` a `'z'`), se convierte a mayúscula restando 32 (valor ASCII de la diferencia entre mayúsculas y minúsculas).
    
    *   Si el carácter es una letra mayúscula (`'A'` a `'Z'`), se convierte a minúscula sumando 32.

7.  **Escritura del carácter convertido**:
    
        write(1, &argv[1][i], 1);
    
    Se escribe el carácter convertido en la salida estándar (generalmente la consola).
    

8.  **Incremento del índice** `**i**`:
    
        i++;
    
    Se incrementa `i` para pasar al siguiente carácter de la cadena.
    

9.  **Escritura de un salto de línea**:
    
        write(1, "\n", 1);
    
    Después de procesar toda la cadena, se escribe un salto de línea en la salida estándar.
    

Este programa toma una cadena pasada como argumento, invierte las mayúsculas y minúsculas de cada letra, y luego imprime la cadena resultante.

* * *

Level 2
=======

alpha\_mirror
-------------

> Assignment name : alpha\_mirror  
> Expected files : alpha\_mirror.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program called alpha\_mirror that takes a string and displays this string  
> after replacing each alphabetical character by the opposite alphabetical  
> character, followed by a newline.  
>   
> 'a' becomes 'z', 'Z' becomes 'A'  
> 'd' becomes 'w', 'M' becomes 'N'  
>   
> and so on.  
>   
> Case is not changed.  
>   
> If the number of arguments is not 1, display only a newline.  
>   
> Examples:  
>   
> $>./alpha\_mirror "abc"  
> zyx  
> $>./alpha\_mirror "My horse is Amazing." | cat -e  
> Nb slihv rh Znzarmt.$  
> $>./alpha\_mirror | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa llamado `alpha_mirror` que tome una cadena de texto como entrada y la muestre, reemplazando cada carácter alfabético por el carácter alfabético opuesto.

*   **Reglas de reemplazo:**
    
    *   'a' se convierte en 'z', 'Z' se convierte en 'A'.
    
    *   'd' se convierte en 'w', 'M' se convierte en 'N', etc.
    
    *   El caso (mayúscula o minúscula) se mantiene.

*   **Salida:** La salida será seguida por un salto de línea.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, el programa muestra un salto de línea.

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

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la API del sistema operativo, incluyendo la función `write`.
    

2.  **Definición de la función** `**main**`:
    
        int main(int argc, char **argv)
    
    La función principal del programa. `argc` es el número de argumentos pasados al programa y `argv` es un array de cadenas de caracteres que contiene los argumentos.
    

3.  **Inicialización de la variable** `**i**`:
    
        int i = 0
    
    Se declara e inicializa la variable `i` a 0. Esta variable se usará como índice para recorrer la cadena de caracteres.
    

4.  **Comprobación del número de argumentos**:
    
        if (argc == 2
    
    Se verifica que el programa ha recibido exactamente un argumento adicional (además del nombre del programa).
    

5.  **Bucle** `**while**` **para recorrer la cadena**:
    
        while(argv[1][i])
    
    Este bucle recorre cada carácter de la cadena pasada como argumento hasta encontrar el carácter nulo (`'\0'`), que indica el final de la cadena.
    

6.  **Conversión de letras minúsculas a su opuesto en el alfabeto**:
    
        if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            argv[1][i] = ('a' + 'z') - argv[1][i]
    
    *   Si el carácter es una letra minúscula (`'a'` a `'z'`), se convierte a su opuesto en el alfabeto. Por ejemplo, `'a'` se convierte en `'z'`, `'b'` en `'y'`, etc. Esto se logra sumando los valores ASCII de `'a'` y `'z'` y restando el valor ASCII del carácter actual.

7.  **Conversión de letras mayúsculas a su opuesto en el alfabeto**:
    
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            argv[1][i] = ('A' + 'Z') - argv[1][i];
    
    *   Si el carácter es una letra mayúscula (`'A'` a `'Z'`), se convierte a su opuesto en el alfabeto. Por ejemplo, `'A'` se convierte en `'Z'`, `'B'` en `'Y'`, etc. Esto se logra sumando los valores ASCII de `'A'` y `'Z'` y restando el valor ASCII del carácter actual.

8.  **Escritura del carácter convertido**:
    
        write(1, &argv[1][i], 1);
    
    Se escribe el carácter convertido en la salida estándar (generalmente la consola).
    

9.  **Incremento del índice** `**i**`:
    
        i++;
    
    Se incrementa `i` para pasar al siguiente carácter de la cadena.
    

10.  **Escritura de un salto de línea**:
    
        write(1, "\n", 1)
    
    Después de procesar toda la cadena, se escribe un salto de línea en la salida estándar.
    

11.  **Retorno de la función** `**main**`:
    
        return (0);
    
    El programa finaliza devolviendo 0, lo que indica que terminó correctamente.
    

Este programa toma una cadena pasada como argumento, convierte cada letra a su opuesto en el alfabeto.

* * *

camel\_to\_snake
----------------

> Assignment name : camel\_to\_snake  
> Expected files : camel\_to\_snake.c  
> Allowed functions: malloc, free, realloc, write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a single string in lowerCamelCase format  
> and converts it into a string in snake\_case format.  
>   
> A lowerCamelCase string is a string where each word begins with a capital letter  
> except for the first one.  
>   
> A snake\_case string is a string where each word is in lower case, separated by  
> an underscore "\_".  
>   
> Examples:  
> $>./camel\_to\_snake "hereIsACamelCaseWord"  
> here\_is\_a\_camel\_case\_word  
> $>./camel\_to\_snake "helloWorld" | cat -e  
> hello\_world$  
> $>./camel\_to\_snake | cat -e  
> $  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto en formato lowerCamelCase y la convierta en formato snake\_case.

*   **Formato lowerCamelCase:** Cada palabra comienza con una letra mayúscula, excepto la primera.

*   **Formato snake\_case:** Cada palabra está en minúscula, separada por un guion bajo "\_".

*   **Salida:** La cadena convertida se muestra seguida de un salto de línea.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, se muestra un salto de línea.

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

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la API del sistema operativo, incluyendo la función `write`.
    

2.  **Definición de la función** `**main**`:
    
        int main(int argc, char **argv)
    
    La función principal del programa. `argc` es el número de argumentos pasados al programa y `argv` es un array de cadenas de caracteres que contiene los argumentos.
    

3.  **Inicialización de la variable** `**i**`:
    
        int i = 0;
    
    Se declara e inicializa la variable `i` a 0. Esta variable se usará como índice para recorrer la cadena de caracteres.
    

4.  **Comprobación del número de argumentos**:
    
        if (argc == 2)
    
    Se verifica que el programa ha recibido exactamente un argumento adicional (además del nombre del programa).
    

5.  **Bucle** `**while**` **para recorrer la cadena**:
    
        while(argv[1][i])
    
    Este bucle recorre cada carácter de la cadena pasada como argumento hasta encontrar el carácter nulo (`'\0'`), que indica el final de la cadena.
    

6.  **Conversión de letras mayúsculas a minúsculas**:
    
        if(argv[1][i] >= 65 && argv[1][i] <= 90)
        {
            argv[1][i] = argv[1][i] + 32;
            write (1, "_", 1);
        }
    
    *   Si el carácter es una letra mayúscula (cuyo valor ASCII está entre 65 y 90), se convierte a minúscula sumando 32 al valor ASCII del carácter.
    
    *   Además, se escribe un guion bajo (`_`) en la salida estándar para indicar que se ha realizado una conversión.

7.  **Escritura del carácter**:
    
        write(1, &argv[1][i], 1);
    
    Se escribe el carácter (convertido o no) en la salida estándar (generalmente la consola).
    

8.  **Incremento del índice** `**i**`:
    
        i++;
    
    Se incrementa `i` para pasar al siguiente carácter de la cadena.
    

9.  **Escritura de un salto de línea**:
    
        write (1, "\n", 1);
    
    Después de procesar toda la cadena, se escribe un salto de línea en la salida estándar.
    

10.  **Retorno de la función** `**main**`:
    
        return (0)
    
    El programa finaliza devolviendo 0, lo que indica que terminó correctamente.
    

Este programa toma una cadena pasada como argumento, convierte las letras mayúsculas a minúsculas (añadiendo un guion bajo después de cada conversión), y luego imprime la cadena resultante.

* * *

do\_op
------

> Assignment name : do\_op  
> Expected files : \*.c, \*.h  
> Allowed functions: atoi, printf, write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes three strings:  
> \- The first and the third one are representations of base-10 signed integers  
> that fit in an int.  
> \- The second one is an arithmetic operator chosen from: + - \* / %  
>   
> The program must display the result of the requested arithmetic operation,  
> followed by a newline. If the number of parameters is not 3, the program  
> just displays a newline.  
>   
> You can assume the string have no mistakes or extraneous characters. Negative  
> numbers, in input or output, will have one and only one leading '-'. The  
> result of the operation fits in an int.  
>   
> Examples:  
>   
> $> ./do\_op "123" "\*" 456 | cat -e  
> 56088$  
> $> ./do\_op "9828" "/" 234 | cat -e  
> 42$  
> $> ./do\_op "1" "+" "-43" | cat -e  
> \-42$  
> $> ./do\_op | cat -e  
> $  

💡

*   **Objetivo:** Escribe un programa que tome tres cadenas de texto como entrada:
    
    *   La primera y la tercera representan números enteros con signo en base 10 que caben en un tipo `int`.
    
    *   La segunda representa un operador aritmético (+, -, \*, /, %).

*   **Operación:** El programa debe realizar la operación aritmética especificada y mostrar el resultado seguido de un salto de línea.

*   **Condiciones de error:** Si no se proporcionan exactamente tres argumentos, el programa muestra un salto de línea.

*   **Restricciones:**
    
    *   Se asume que las cadenas de entrada no tienen errores ni caracteres extraños.
    
    *   Los números negativos deben tener un solo signo menos al principio.
    
    *   El resultado de la operación debe caber en un tipo `int`.

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

1.  **Inclusión de las bibliotecas** `**stdio.h**` **y** `**stdlib.h**`:
    
        #include <stdio.h>#include <stdlib.h>
    
    *   `stdio.h` proporciona funciones de entrada y salida, como `printf`.
    
    *   `stdlib.h` proporciona funciones de utilidad general, como `atoi` (que convierte una cadena a un entero).

2.  **Definición de la función** `**main**`:
    
        int main(int argc, char *argv[])
    
    La función principal del programa. `argc` es el número de argumentos pasados al programa y `argv` es un array de cadenas de caracteres que contiene los argumentos.
    

3.  **Comprobación del número de argumentos**:
    
        if (argc == 4)
    
    Se verifica que el programa ha recibido exactamente tres argumentos adicionales (además del nombre del programa).
    

4.  **Operaciones aritméticas según el operador**:
    
    *   **Suma**:
        
            if (argv[2][0] == '+')
                printf("%d", (atoi(argv[1]) + atoi(argv[3])))
        
        Si el segundo argumento es un `+`, se suman los valores de los primeros y terceros argumentos convertidos a enteros con `atoi`.
        
    
    *   **Resta**:
        
            if (argv[2][0] == '-')
                printf("%d", (atoi(argv[1]) - atoi(argv[3])));
        
        Si el segundo argumento es un `-`, se restan los valores de los primeros y terceros argumentos.
        
    
    *   **Multiplicación**:
        
            if (argv[2][0] == '*')
                printf("%d", (atoi(argv[1]) * atoi(argv[3])));
        
        Si el segundo argumento es un `*`, se multiplican los valores de los primeros y terceros argumentos.
        
    
    *   **División**:
        
            if (argv[2][0] == '/')
                printf("%d", (atoi(argv[1]) / atoi(argv[3])));
        
        Si el segundo argumento es un `/`, se dividen los valores de los primeros y terceros argumentos.
        
    
    *   **Módulo**:
        
            if (argv[2][0] == '%')
                printf("%d", (atoi(argv[1]) % atoi(argv[3])));
        
        Si el segundo argumento es un `%`, se calcula el módulo de los valores de los primeros y terceros argumentos.
        

5.  **Escritura de un salto de línea**:
    
        printf("\n");
    
    Después de realizar la operación aritmética correspondiente, se escribe un salto de línea en la salida estándar.
    

6.  **Retorno de la función** `**main**`:
    
        return (0);
    
    El programa finaliza devolviendo 0, lo que indica que terminó correctamente.
    

Este programa toma tres argumentos: dos números y un operador aritmético (`+`, `-`, `*`, `/`, `%`). Realiza la operación indicada entre los dos números y muestra el resultado.

* * *

ft\_atoi
--------

> Assignment name : ft\_atoi  
> Expected files : ft\_atoi.c  
> Allowed functions: None  
> \--------------------------------------------------------------------------------  
>   
> Write a function that converts the string argument str to an integer (type int)  
> and returns it.  
>   
> It works much like the standard atoi(const char \*str) function, see the man.  
>   
> Your function must be declared as follows:  
>   
> int ft\_atoi(const char \*str);  

💡

*   **Objetivo:** Escribe una función que convierta una cadena de texto a un número entero (tipo `int`).

*   **Comportamiento:** La función debe funcionar de manera similar a la función estándar `atoi(const char *str)`.

    int	ft_atoi(char *str)
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

1.  **Definición de la función** `**ft_atoi**`:
    
        int ft_atoi(char *str)
    
    Esta función convierte una cadena de caracteres (`str`) en un número entero. Devuelve el número entero resultante.
    

2.  **Inicialización de variables**:
    
        int result = 0;
        int sign = 1;
    
    *   `result` se inicializa a 0 y almacenará el número entero resultante.
    
    *   `sign` se inicializa a 1 y almacenará el signo del número (positivo o negativo).

3.  **Saltarse los espacios en blanco y caracteres de control**:
    
        while (*str == ' ' || (*str >= 9 && *str <= 13))
            str++;
    
    Este bucle `while` avanza el puntero `str` para saltarse cualquier espacio en blanco (`' '`) o caracteres de control (códigos ASCII del 9 al 13, que incluyen tabulaciones y saltos de línea).
    

4.  **Determinación del signo**:
    
        if (*str == '-')
            sign = -1;
        if (*str == '-' || *str == '+')
            str++;
    
    *   Si el carácter actual es un `'-'`, se establece `sign` a -1 para indicar que el número es negativo.
    
    *   Si el carácter actual es un `'-'` o un `'+'`, se avanza el puntero `str` para saltarse el signo.

5.  **Conversión de caracteres numéricos a entero**:
    
        while (*str >= '0' && *str <= '9')
        {
            result = result * 10 + *str - '0';
            str++;
        }
    
    Este bucle `while` convierte cada carácter numérico en su valor entero correspondiente y lo acumula en `result`:
    
    *   `str - '0'` convierte el carácter numérico a su valor entero.
    
    *   `result = result * 10 + *str - '0'` actualiza `result` multiplicando el valor actual por 10 y sumando el nuevo dígito.
    
    *   `str++` avanza el puntero al siguiente carácter.

6.  **Devolución del resultado con el signo adecuado**:
    
        return (sign * result);
    
    Finalmente, la función devuelve el resultado multiplicado por `sign`, lo que asegura que el número tenga el signo correcto (positivo o negativo).
    

Este programa toma una cadena de caracteres que representa un número y la convierte en un entero, manejando correctamente los espacios en blanco iniciales y el signo del número.

* * *

ft\_strcmp
----------

> Assignment name : ft\_strcmp  
> Expected files : ft\_strcmp.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Reproduce the behavior of the function strcmp (man strcmp).  
>   
> Your function must be declared as follows:  
>   
> int ft\_strcmp(char \*s1, char \*s2);  

💡

*   **Objetivo:** Reproduce el comportamiento de la función `strcmp` de la biblioteca estándar de C.

    #include <stdio.h>
    
    int ft_strcmp(char *s1, char *s2)
    {
    	int i = 0;
    	
    	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    		i++;
    	return (s1[i] - s2[i]);
    }	

1.  **Inclusión de la biblioteca estándar**:
    
        #include <stdio.h>
    
    Esto incluye la biblioteca estándar de entrada y salida en C, necesaria para funciones como `printf` y `scanf`.
    

2.  **Definición de la función** `**ft_strcmp**`:
    
        int ft_strcmp(char *s1, char *s2)
    
    Esta función toma dos punteros a caracteres (`char *s1` y `char *s2`), que representan dos cadenas de caracteres (strings).
    

3.  **Inicialización de la variable** `**i**`:
    
        int i = 0;
    
    Se inicializa una variable entera `i` a 0. Esta variable se usará como índice para recorrer las cadenas.
    

4.  **Bucle** `**while**`:
    
        while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
            i++;
    
    Este bucle recorre ambas cadenas carácter por carácter mientras:
    
    *   `s1[i]` no sea el carácter nulo (`'\0'`), que indica el final de la cadena.
    
    *   `s2[i]` no sea el carácter nulo (`'\0'`).
    
    *   Los caracteres en la posición `i` de ambas cadenas sean iguales (`s1[i] == s2[i]`).
    
    Si todas estas condiciones se cumplen, el índice `i` se incrementa para comparar el siguiente par de caracteres.
    

5.  **Retorno de la diferencia**:
    
        return (s1[i] - s2[i]);
    
    Cuando el bucle termina, la función retorna la diferencia entre los caracteres en la posición `i` de las dos cadenas. Si las cadenas son iguales hasta el final, la diferencia será 0. Si no, la diferencia será un valor positivo o negativo dependiendo de los caracteres que difieren.
    

Esta función es una implementación básica de `strcmp`, que compara dos cadenas de caracteres y devuelve un valor basado en la diferencia entre los primeros caracteres diferentes que encuentra.

* * *

ft\_strcspn
-----------

> Assignment name : ft\_strcspn  
> Expected files : ft\_strcspn.c  
> Allowed functions: None  
> \---------------------------------------------------------------  
>   
> Reproduce exactly the behavior of the function strcspn  
> (man strcspn).  
>   
> The function should be prototyped as follows:  
>   
> size\_t ft\_strcspn(const char \*s, const char \*reject);  

💡

*   **Objetivo:** Reproduce exactamente el comportamiento de la función `strcspn` de la biblioteca estándar de C.

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

1.  **Inclusión de la biblioteca estándar**:
    
        #include <stdio.h>
    
    Esto incluye la biblioteca estándar de entrada y salida en C, necesaria para funciones como `printf` y `scanf`.
    

2.  **Definición de la función** `**ft_strcspn**`:
    
        size_t ft_strcspn(const char *s, const char *reject
    
    Esta función toma dos punteros a caracteres (`const char *s` y `const char *reject`), que representan dos cadenas de caracteres (strings). Devuelve un valor de tipo `size_t`, que es un tipo de dato adecuado para representar tamaños y conteos.
    

3.  **Inicialización de las variables** `**i**` **y** `**j**`:
    
        int i = 0;
        int j = 0;
    
    Se inicializan dos variables enteras `i` y `j` a 0. Estas variables se usarán como índices para recorrer las cadenas.
    

4.  **Bucle** `**while**` **externo**:
    
        while (s[i] != '\0')
    
    Este bucle recorre la cadena `s` carácter por carácter mientras `s[i]` no sea el carácter nulo (`'\0'`), que indica el final de la cadena.
    

5.  **Reinicialización de** `**j**`:
    
        j = 0;
    
    Antes de entrar en el bucle interno, `j` se reinicializa a 0 para empezar a recorrer la cadena `reject` desde el principio.
    

6.  **Bucle** `**while**` **interno**:
    
        while (reject[j] != '\0')
    
    Este bucle recorre la cadena `reject` carácter por carácter mientras `reject[j]` no sea el carácter nulo (`'\0'`).
    

7.  **Comparación de caracteres**:
    
        if (s[i] == reject[j])
            return (i);
    
    Si el carácter actual de `s` (`s[i]`) es igual al carácter actual de `reject` (`reject[j]`), la función retorna el valor de `i`, que es la posición del primer carácter en `s` que coincide con algún carácter en `reject`.
    

8.  **Incremento de** `**j**`:
    
        j++;
    
    Si no se encuentra una coincidencia, `j` se incrementa para comparar el siguiente carácter de `reject`.
    

9.  **Incremento de** `**i**`:
    
        i++;
    
    Si se ha recorrido toda la cadena `reject` sin encontrar coincidencias, `i` se incrementa para comparar el siguiente carácter de `s`.
    

10.  **Retorno del valor de** `**i**`:
    
        return (i);
    
    Si se ha recorrido toda la cadena `s` sin encontrar ningún carácter que coincida con alguno en `reject`, la función retorna el valor de `i`, que será la longitud de la cadena `s`.
    

Esta función es una implementación de `strcspn`, que calcula la longitud del segmento inicial de `s` que no contiene ningún carácter de `reject`.

* * *

ft\_strdup
----------

> Assignment name : ft\_strdup  
> Expected files : ft\_strdup.c  
> Allowed functions: malloc  
> \--------------------------------------------------------------------------------  
>   
> Reproduce the behavior of the function strdup (man strdup).  
>   
> Your function must be declared as follows:  
>   
> char \*ft\_strdup(char \*src);  

💡

*   **Objetivo:** Reproduce el comportamiento de la función `strdup` de la biblioteca estándar de C.

    #include <stdlib.h>
    
    char	*ft_strdup(char *src)
    {
    	int	i = 0;
    	int	length = 0;
    	char	*strcpy;
    
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

1.  **Inclusión de la biblioteca estándar**:
    
        #include <stdlib.h>
    
    Esto incluye la biblioteca estándar de utilidades en C, necesaria para funciones como `malloc` y `free`.
    

2.  **Definición de la función** `**ft_strdup**`:
    
        char *ft_strdup(char *src
    
    Esta función toma un puntero a un carácter (`char *src`), que representa una cadena de caracteres (string), y devuelve un puntero a un nuevo string que es una copia del original.
    

3.  **Inicialización de las variables** `**i**` **y** `**length**`:
    
        int i = 0;
        int length = 0;
    
    Se inicializan dos variables enteras `i` y `length` a 0. `i` se usará como índice para recorrer las cadenas, y `length` se usará para almacenar la longitud de la cadena `src`.
    

4.  **Cálculo de la longitud de** `**src**`:
    
        while (src[length])
            length++;
    
    Este bucle recorre la cadena `src` carácter por carácter hasta encontrar el carácter nulo (`'\0'`), incrementando `length` en cada iteración para contar la longitud de la cadena.
    

5.  **Asignación de memoria para la nueva cadena**:
    
        strcpy = malloc(sizeof(*strcpy) * (length + 1));
    
    Se asigna memoria suficiente para almacenar una copia de la cadena `src`, incluyendo el carácter nulo al final. `sizeof(*strcpy)` devuelve el tamaño de un carácter, y `length + 1` es el número de caracteres necesarios (la longitud de `src` más uno para el carácter nulo).
    

6.  **Verificación de la asignación de memoria**:
    
        if (strcpy != NULL
    
    Se verifica si la asignación de memoria fue exitosa. Si `strcpy` no es `NULL`, significa que la memoria fue asignada correctamente.
    

7.  **Copia de la cadena** `**src**` **a** `**strcpy**`:
    
        while (src[i])
        {
            strcpy[i] = src[i];
            i++;
        }
    
    Este bucle recorre la cadena `src` carácter por carácter, copiando cada carácter a la nueva cadena `strcpy`. El índice `i` se incrementa en cada iteración.
    

8.  **Añadir el carácter nulo al final de** `**strcpy**`:
    
        strcpy[i] = '\0'
    
    Después de copiar todos los caracteres de `src`, se añade el carácter nulo (`'\0'`) al final de `strcpy` para marcar el final de la cadena.
    

9.  **Retorno de la nueva cadena**:
    
        return (strcpy);
    
    La función retorna el puntero a la nueva cadena `strcpy`, que es una copia de `src`.
    

Esta función es una implementación de `strdup`, que crea una copia duplicada de una cadena de caracteres, asignando memoria dinámica para la nueva cadena.

* * *

ft\_strpbrk
-----------

> Assignment name : ft\_strpbrk  
> Expected files : ft\_strpbrk.c  
> Allowed functions: None  
> \---------------------------------------------------------------  
>   
> Reproduce exactly the behavior of the function strpbrk  
> (man strpbrk).  
>   
> The function should be prototyped as follows:  
>   
> char \*ft\_strpbrk(const char \*s1, const char \*s2);  

💡

*   **Objetivo:** Reproduce exactamente el comportamiento de la función `strpbrk` de la biblioteca estándar de C.

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

1.  **Inclusión de las bibliotecas estándar**:
    
        #include <stdio.h>
        #include <string.h>
    
    Estas líneas incluyen las bibliotecas estándar de entrada y salida (`stdio.h`) y de manipulación de cadenas (`string.h`) en C.
    

2.  **Definición de la función** `**ft_strpbrk**`:
    
        char *ft_strpbrk(const char *s1, const char *s2
    
    Esta función toma dos punteros a caracteres (`const char *s1` y `const char *s2`), que representan dos cadenas de caracteres (strings). Devuelve un puntero a un carácter.
    

3.  **Inicialización de la variable** `**i**`:
    
        int i = 0;
    
    Se inicializa una variable entera `i` a 0. Esta variable se usará como índice para recorrer la cadena `s2`.
    

4.  **Verificación de punteros nulos**:
    
        if (!s1 || !s2)
            return (0);
    
    Se verifica si alguno de los punteros `s1` o `s2` es nulo. Si alguno lo es, la función retorna 0 (NULL).
    

5.  **Bucle** `**while**` **externo**:
    
        while(*s1)
    
    Este bucle recorre la cadena `s1` carácter por carácter mientras `*s1` no sea el carácter nulo (`'\0'`).
    

6.  **Reinicialización de** `**i**`:
    
        i = 0;
    
    Antes de entrar en el bucle interno, `i` se reinicializa a 0 para empezar a recorrer la cadena `s2` desde el principio.
    

7.  **Bucle** `**while**` **interno**:
    
        while(s2[i])
    
    Este bucle recorre la cadena `s2` carácter por carácter mientras `s2[i]` no sea el carácter nulo (`'\0'`).
    

8.  **Comparación de caracteres**:
    
        if(*s1 == s2[i])
            return (char *) s1;
    
    Si el carácter actual de `s1` (`*s1`) es igual al carácter actual de `s2` (`s2[i]`), la función retorna el puntero `s1` convertido a `char *`.
    

9.  **Incremento de** `**i**`:
    
        i++;
    
    Si no se encuentra una coincidencia, `i` se incrementa para comparar el siguiente carácter de `s2`.
    

10.  **Incremento de** `**s1**`:
    
        s1++;
    
    Si se ha recorrido toda la cadena `s2` sin encontrar coincidencias, `s1` se incrementa para comparar el siguiente carácter de `s1`.
    

11.  **Retorno de** `**NULL**`:
    
        return (NULL);
    
    Si se ha recorrido toda la cadena `s1` sin encontrar ningún carácter que coincida con alguno en `s2`, la función retorna `NULL`.
    

Esta función es una implementación de `strpbrk`, que busca la primera ocurrencia en la cadena `s1` de cualquier carácter de la cadena `s2` y devuelve un puntero a esa posición. Si no encuentra ninguna coincidencia, devuelve `NULL`.

* * *

ft\_strrev
----------

> Assignment name : ft\_strrev  
> Expected files : ft\_strrev.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write a function that reverses (in-place) a string.  
>   
> It must return its parameter.  
>   
> Your function must be declared as follows:  
>   
> char \*ft\_strrev(char \*str);  

💡

*   **Objetivo:** Escribe una función que invierta una cadena de texto en su lugar (modificando la cadena original).

*   **Retorno:** La función debe devolver la cadena original modificada.

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

1.  **Definición de la función** `**ft_strrev**`:
    
        char *ft_strrev(char *str)
    
    Esta función toma un puntero a un carácter (`char *str`), que representa una cadena de caracteres (string), y devuelve un puntero a la misma cadena, pero invertida.
    

2.  **Inicialización de las variables** `**i**` **y** `**length**`:
    
        int i = -1;
        int length = 0;
        char temporary;
    
    Se inicializan dos variables enteras `i` a -1 y `length` a 0. `i` se usará como índice para recorrer la cadena, y `length` se usará para almacenar la longitud de la cadena. `temporary` es una variable de tipo `char` que se usará para intercambiar caracteres.
    

3.  **Cálculo de la longitud de** `**str**`:
    
        while (str[length])
            length++;
    
    Este bucle recorre la cadena `str` carácter por carácter hasta encontrar el carácter nulo (`'\0'`), incrementando `length` en cada iteración para contar la longitud de la cadena.
    

4.  **Bucle** `**while**` **para invertir la cadena**:
    
        while (++i < length / 2)
    
    Este bucle recorre la mitad de la cadena `str` (hasta `length / 2`), incrementando `i` en cada iteración.
    

5.  **Intercambio de caracteres**:
    
        temporary = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temporary
    
    Dentro del bucle, se intercambian los caracteres en las posiciones `i` y `length - 1 - i`:
    
    *   `temporary` almacena temporalmente el carácter en la posición `i`.
    
    *   `str[i]` se asigna el carácter en la posición `length - 1 - i`.
    
    *   `str[length - 1 - i]` se asigna el valor almacenado en `temporary`.

6.  **Retorno de la cadena invertida**:
    
        return (str)
    
    La función retorna el puntero a la cadena `str`, que ahora está invertida.
    

Esta función invierte la cadena de caracteres dada, intercambiando los caracteres desde los extremos hacia el centro.

* * *

ft\_strspn
----------

> Assignment name : ft\_strspn  
> Expected files : ft\_strspn.c  
> Allowed functions: None  
> \---------------------------------------------------------------  
>   
> Reproduce exactly the behavior of the strspn function  
> (man strspn).  
>   
> The function should be prototyped as follows:  
>   
> size\_t ft\_strspn(const char \*s, const char \*accept);  

💡

*   **Objetivo:** Reproduce exactamente el comportamiento de la función `strspn` de la biblioteca estándar de C.

    #include <string.h>
    
    char	*ft_strchr(const char *s, int c)
    {
    	while (*s != '\0')
    	{
    		if (*s == c)
    			return ((char *)s);
    		++s;
    	}
    	return (0);
    }
    
    size_t	ft_strspn(const char *s, const char *accept)
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

**Función** `**ft_strchr**`

Esta función busca la primera aparición de un carácter en una cadena.

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

**Función** `**ft_strspn**`

Esta función calcula la longitud del segmento inicial de `s` que consiste únicamente en caracteres presentes en `accept`.

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

Explicación paso a paso

1.  `**ft_strchr**`:
    
    *   Recorre la cadena `s` carácter por carácter.
    
    *   Si encuentra el carácter `c`, devuelve un puntero a esa posición en la cadena.
    
    *   Si llega al final de la cadena sin encontrar `c`, devuelve `NULL`.

2.  `**ft_strspn**`:
    
    *   Inicializa un índice `i` en 0.
    
    *   Recorre la cadena `s` hasta encontrar un carácter que no esté en `accept`.
    
    *   Utiliza `ft_strchr` para verificar si cada carácter de `s` está en `accept`.
    
    *   Si encuentra un carácter que no está en `accept`, sale del bucle.
    
    *   Devuelve la longitud del segmento inicial de `s` que contiene solo caracteres de `accept`.

* * *

inter
-----

> Assignment name : inter  
> Expected files : inter.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes two strings and displays, without doubles, the  
> characters that appear in both strings, in the order they appear in the first  
> one.  
>   
> The display will be followed by a \\n.  
>   
> If the number of arguments is not 2, the program displays \\n.  
>   
> Examples:  
>   
> $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e  
> padinto$  
> $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e  
> df6ewg4$  
> $>./inter "rien" "cette phrase ne cache rien" | cat -e  
> rien$  
> $>./inter | cat -e  
> $  

💡

*   **Objetivo:** Escribe un programa que tome dos cadenas de texto como entrada y muestre, sin duplicados, los caracteres que aparecen en ambas cadenas, en el orden en que aparecen en la primera cadena.

*   **Salida:** La salida será seguida por un salto de línea.

*   **Condiciones de error:** Si no se proporcionan exactamente dos argumentos, el programa muestra un salto de línea.

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

1.  **Inclusión de la biblioteca**:
    
        #include <unistd.h>
    
    *   Incluye la biblioteca `unistd.h` que proporciona acceso a la función `write`.

2.  **Función** `**main**`:
    
        int main(int ac, char **av)
    
    *   Define la función principal que toma dos argumentos: el número de argumentos `ac` y una matriz de cadenas `av`.

3.  **Declaración de variables**:
    
        int i;
        int j;
        unsigned char seen[256] = {0};
    
    *   Declara dos variables enteras `i` y `j` para usar como índices.
    
    *   Declara una matriz `seen` de 256 caracteres inicializada a 0 para rastrear los caracteres ya impresos.

4.  **Comprobación del número de argumentos**:
    
        if (ac == 3)
    
    *   Verifica que se hayan pasado exactamente 3 argumentos (el nombre del programa y dos cadenas).

5.  **Bucle externo**:
    
        i = 0;
        while (av[1][i])
    
    *   Recorre cada carácter de la primera cadena `av[1]`.

6.  **Bucle interno**:
    
        j = 0;
        while (av[2][j])
    
    *   Recorre cada carácter de la segunda cadena `av[2]`.

7.  **Comparación de caracteres**:
    
        if (av[1][i] == av[2][j])
    
    *   Compara el carácter actual de `av[1]` con el carácter actual de `av[2]`.

8.  **Verificación y escritura del carácter**:
    
        if (!seen[(unsigned char)av[1][i]])
        {
            write(1, &av[1][i], 1);
            seen[(unsigned char)av[1][i]] = 1;
        }
    
    *   Si el carácter no ha sido visto antes (`seen` es 0), lo escribe en la salida estándar y marca el carácter como visto.

9.  **Salida del bucle interno**:
    
        break;
    
    *   Sale del bucle interno una vez que se encuentra una coincidencia.

10.  **Incremento de índices**:
    
        j++;
        i++;
    
    *   Incrementa los índices `j` y `i` para continuar con los siguientes caracteres.

11.  **Escritura de nueva línea**:
    
        write(1, "\n", 1);
    
    *   Escribe un carácter de nueva línea al final de la salida.

12.  **Retorno de la función**:
    
        return (0)
    
    *   Finaliza la función `main` devolviendo 0.

Este programa imprime los caracteres comunes entre las dos cadenas pasadas como argumentos, sin repetir caracteres.

* * *

is\_power\_of\_2
----------------

> Assignment name : is\_power\_of\_2  
> Expected files : is\_power\_of\_2.c  
> Allowed functions: None  
> \--------------------------------------------------------------------------------  
>   
> Write a function that determines if a given number is a power of 2.  
>   
> This function returns 1 if the given number is a power of 2, otherwise it returns 0.  
>   
> Your function must be declared as follows:  
>   
> int is\_power\_of\_2(unsigned int n);  

💡

*   **Objetivo:** Escribe una función que determine si un número dado es una potencia de 2.

*   **Retorno:** La función debe devolver 1 si el número es una potencia de 2, y 0 en caso contrario.

    int is_power_of_2(unsigned int n)
    {
        if (n == 0)
            return 0;
        return (n & (n - 1)) == 0;
    }

1.  **Declaración de la función**:
    
        int is_power_of_2(unsigned int n)
    
    *   Define una función llamada `is_power_of_2` que toma un argumento `n` de tipo `unsigned int` y devuelve un `int`.

2.  **Comprobación si** `**n**` **es 0**:
    
        if (n == 0)
            return 0;
    
    *   Si `n` es 0, la función devuelve 0 inmediatamente, ya que 0 no es una potencia de 2.

3.  **Verificación de potencia de 2**:
    
        return (n & (n - 1)) == 0;
    
    *   Esta línea utiliza una operación bit a bit para verificar si `n` es una potencia de 2.
    
    *   La expresión `(n & (n - 1))` realiza una operación AND bit a bit entre `n` y `n-1`.
    
    *   Si `n` es una potencia de 2, esta operación resultará en 0. Esto se debe a que una potencia de 2 en binario tiene un solo bit en 1, y restar 1 a una potencia de 2 convierte ese bit en 0 y todos los bits a la derecha en 1.
    
    *   Por ejemplo, si `n` es 4 (100 en binario), `n-1` es 3 (011 en binario). La operación AND entre 100 y 011 es 000.
    
    *   Si el resultado de `(n & (n - 1))` es 0, entonces `n` es una potencia de 2 y la función devuelve 1 (verdadero). Si no, devuelve 0 (falso).

Ejemplo

*   Para `n = 8` (1000 en binario):
    
    *   `n - 1 = 7` (0111 en binario)
    
    *   `n & (n - 1) = 1000 & 0111 = 0000`
    
    *   La función devuelve 1, indicando que 8 es una potencia de 2.

*   Para `n = 10` (1010 en binario):
    
    *   `n - 1 = 9` (1001 en binario)
    
    *   `n & (n - 1) = 1010 & 1001 = 1000`
    
    *   La función devuelve 0, indicando que 10 no es una potencia de 2.

* * *

last\_word
----------

> Assignment name : last\_word  
> Expected files : last\_word.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a string and displays its last word followed by a \\n.  
>   
> A word is a section of string delimited by spaces/tabs or by the start/end of  
> the string.  
>   
> If the number of parameters is not 1, or there are no words, display a newline.  
>   
> Example:  
>   
> $> ./last\_word "FOR PONY" | cat -e  
> PONY$  
> $> ./last\_word "this ... is sparta, then again, maybe not" | cat -e  
> not$  
> $> ./last\_word " " | cat -e  
> $  
> $> ./last\_word "a" "b" | cat -e  
> $  
> $> ./last\_word " lorem,ipsum " | cat -e  
> lorem,ipsum$  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto como entrada y muestre su última palabra seguida de un salto de línea.

*   **Definición de palabra:** Una palabra es una sección de la cadena delimitada por espacios, tabulaciones o el inicio/final de la cadena.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento o si no hay palabras en la cadena, simplemente se muestra un salto de línea.

    #include <unistd.h>
    
    void	last_word(char *str)
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
    
    int		main(int argc, char **argv)
    {
    	if (argc == 2)
    		last_word(argv[1]);
    	write(1, "\n", 1);
    	return (0);
    }

1.  **Inclusión de la biblioteca**:
    
        #include <unistd.h>
    
    *   Incluye la biblioteca `unistd.h` que proporciona acceso a la función `write`.

2.  **Función** `**last_word**`:
    
        void last_word(char *str)
    
    *   Define una función llamada `last_word` que toma un argumento `str` de tipo `char *` (cadena de caracteres).

3.  **Declaración de variables**:
    
        int j = 0;
        int i = 0;
    
    *   Declara dos variables enteras `j` y `i` para usar como índices.

4.  **Bucle para encontrar el inicio de la última palabra**:
    
        while (str[i])
        {
            if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
                j = i + 1;
            i++;
        }
    
    *   Recorre la cadena `str` carácter por carácter.
    
    *   Si encuentra un espacio seguido de un carácter imprimible (código ASCII entre 33 y 126), actualiza `j` para que apunte al inicio de la siguiente palabra.

5.  **Bucle para imprimir la última palabra**:
    
        while (str[j] >= 33 && str[j] <= 127)
        {
            write(1, &str[j], 1);
            j++;
        }
    
    *   Recorre la cadena desde la posición `j` y escribe cada carácter en la salida estándar hasta que encuentre un carácter no imprimible (código ASCII menor que 33 o mayor que 127).

6.  **Función** `**main**`:
    
        int main(int argc, char **argv)
    
    *   Define la función principal que toma dos argumentos: el número de argumentos `argc` y una matriz de cadenas `argv`.

7.  **Comprobación del número de argumentos**:
    
        if (argc == 2)
            last_word(argv[1]);
    
    *   Verifica que se haya pasado exactamente un argumento adicional (además del nombre del programa).
    
    *   Llama a la función `last_word` con el argumento `argv[1]`.

8.  **Escritura de nueva línea**:
    
        write(1, "\n", 1);
    
    *   Escribe un carácter de nueva línea al final de la salida.

9.  **Retorno de la función**:
    
        return (0);
    
    *   Finaliza la función `main` devolviendo 0.

Resumen

Este programa toma una cadena como argumento y escribe la última palabra de esa cadena en la salida estándar. La última palabra se define como la secuencia de caracteres imprimibles después del último espacio en la cadena.

* * *

max
---

> Assignment name : max  
> Expected files : max.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write the following function:  
>   
> int max(int\* tab, unsigned int len);  
>   
> The first parameter is an array of int, the second is the number of elements in  
> the array.  
>   
> The function returns the largest number found in the array.  
>   
> If the array is empty, the function returns 0.  

💡

    int max(int *tab, unsigned int len)
    {
    	int result;
    	unsigned int i = 0;
    	
    	if (len == 0)
    		return (0);
    	result = tab[i];
    	while(i < len)
    	{
    		if (result <  tab[i])
    			result = tab[i];
    		i++;
    	}
    	return result;
    }

1.  **Definición de la función**:
    
        int max(int *tab, unsigned int len
    
    Esta función se llama `max` y toma dos parámetros: un puntero a un arreglo de enteros (`tab`) y un entero sin signo (`len`) que representa la longitud del arreglo.
    

2.  **Declaración de variables**:
    
        int result;
        unsigned int i = 0;
    
    Se declara una variable `result` para almacenar el valor máximo encontrado y una variable `i` para usar como índice en el bucle.
    

3.  **Comprobación de longitud**:
    
        if (len == 0)
            return (0);
    
    Si la longitud del arreglo es 0, la función retorna 0 inmediatamente, ya que no hay elementos para comparar.
    

4.  **Inicialización del resultado**:
    
        result = tab[i];
    
    Se inicializa `result` con el primer elemento del arreglo (`tab[0]`).
    

5.  **Bucle para encontrar el máximo**:
    
        while(i < len)
        {
            if (result <  tab[i])
                result = tab[i];
            i++;
        }
    
    *   Se recorre el arreglo desde el primer hasta el último elemento.
    
    *   En cada iteración, se compara el valor actual de `result` con el elemento actual del arreglo (`tab[i]`).
    
    *   Si el elemento actual es mayor que `result`, se actualiza `result` con este valor.
    
    *   Se incrementa `i` para pasar al siguiente elemento.

6.  **Retorno del resultado**:
    
        return result;
    
    Al finalizar el bucle, `result` contiene el valor máximo del arreglo y se retorna.
    

* * *

print\_bits
-----------

> Assignment name : print\_bits  
> Expected files : print\_bits.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE  
> AT THE END.  
>   
> Your function must be declared as follows:  
>   
> void print\_bits(unsigned char octet);  
>   
> Example, if you pass 2 to print\_bits, it will print "00000010"  

💡

*   **Objetivo:** Escribe una función que tome un byte (un número de 8 bits) como entrada y lo imprima en binario, SIN un salto de línea al final.

    #include <unistd.h>
    
    void print_bits(unsigned char octet)
    {
    	int i = 8;
    	unsigned char 	bit;
    
    	while (i--)
    	{
    		bit = (octet >> i & 1) + '0';
    		write(1, &bit, 1);
    	}
    }

1.  **Inclusión de la biblioteca**:
    
        #include <unistd.h
    
    Esta línea incluye la biblioteca `unistd.h`, que es necesaria para usar la función `write`.
    

2.  **Definición de la función**:
    
        void print_bits(unsigned char octet)
    
    La función `print_bits` toma un parámetro `octet` de tipo `unsigned char` y no retorna ningún valor (`void`).
    

3.  **Declaración de variables**:
    
        int i = 8;
        unsigned char bit;
    
    Se declara una variable `i` inicializada a 8, que representa el número de bits en un `unsigned char`. También se declara una variable `bit` para almacenar cada bit del `octet`.
    

4.  **Bucle para procesar cada bit**:
    
        while (i--)
    
    Este bucle `while` se ejecuta mientras `i` decrece desde 8 hasta 0. La expresión `i--` primero usa el valor actual de `i` y luego lo decrementa.
    

5.  **Extracción y escritura de cada bit**:
    
        {
            bit = (octet >> i & 1) + '0';
            write(1, &bit, 1);
        }
    
    *   `octet >> i` desplaza los bits de `octet` a la derecha `i` posiciones.
    
    *   `& 1` obtiene el bit menos significativo (el bit en la posición `i`).
    
    *   `+ '0'` convierte el bit (0 o 1) en su carácter ASCII correspondiente (‘0’ o ‘1’).
    
    *   `write(1, &bit, 1)` escribe el bit en la salida estándar (generalmente la pantalla).

En resumen, esta función imprime los bits de un `unsigned char` en orden desde el bit más significativo hasta el menos significativo.

* * *

reverse\_bits
-------------

> Assignment name : reverse\_bits  
> Expected files : reverse\_bits.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write a function that takes a byte, reverses it, bit by bit (like the  
> example) and returns the result.  
>   
> Your function must be declared as follows:  
>   
> unsigned char reverse\_bits(unsigned char octet);  
>   
> Example:  
>   
> 1 byte  
> \_\_\_\_\_\_\_\_\_\_\_\_\_  
> 0100 0001  
> ||  
> \\/  
> 1000 0010  

💡

*   **Objetivo:** Escribe una función que tome un byte (un número de 8 bits) como entrada, lo invierta bit a bit y devuelva el resultado.

    unsigned char	reverse_bits(unsigned char octet)
    {
    	int		i = 8;
    	unsigned char	res = 0;
    
    	while (i > 0)
    	{
    		res = res * 2 + (octet % 2);
    		octet = octet / 2;
    		i--;
    	}
    	return (res);
    }

1.  **Definición de la función**:
    
        unsigned char reverse_bits(unsigned char octet)
    
    La función `reverse_bits` toma un parámetro `octet` de tipo `unsigned char` y retorna un valor de tipo `unsigned char`.
    

2.  **Declaración de variables**:
    
        int i = 8;
        unsigned char res = 0;
    
    Se declara una variable `i` inicializada a 8, que representa el número de bits en un `unsigned char`. También se declara una variable `res` inicializada a 0, que almacenará el resultado final con los bits invertidos.
    

3.  **Bucle para invertir los bits**:
    
        while (i > 0)
    
    Este bucle `while` se ejecuta mientras `i` sea mayor que 0.
    

4.  **Proceso de inversión de bits**:
    
        {
            res = res * 2 + (octet % 2);
            octet = octet / 2;
            i--;
        }
    
    *   `res = res * 2 + (octet % 2);`:
        
        *   `octet % 2` obtiene el bit menos significativo de `octet`.
        
        *   `res * 2` desplaza los bits de `res` una posición a la izquierda.
        
        *   Se suma el bit obtenido de `octet` a `res`.
    
    *   `octet = octet / 2;`: Desplaza los bits de `octet` una posición a la derecha.
    
    *   `i--;`: Decrementa `i` en 1.

5.  **Retorno del resultado**:
    
        return (res);
    
    Al finalizar el bucle, `res` contiene los bits de `octet` invertidos y se retorna.
    

En resumen, esta función invierte los bits de un `unsigned char` y retorna el resultado.

* * *

snake\_to\_camel
----------------

> Assignment name : snake\_to\_camel  
> Expected files : snake\_to\_camel.c  
> Allowed functions: malloc, free, realloc, write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a single string in snake\_case format  
> and converts it into a string in lowerCamelCase format.  
>   
> A snake\_case string is a string where each word is in lower case, separated by  
> an underscore "\_".  
>   
> A lowerCamelCase string is a string where each word begins with a capital letter  
> except for the first one.  
>   
> Examples:  
> $>./camel\_to\_snake "here\_is\_a\_snake\_case\_word"  
> hereIsASnakeCaseWord  
> $>./camel\_to\_snake "hello\_world" | cat -e  
> helloWorld$  
> $>./camel\_to\_snake | cat -e  
> $  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto en formato snake\_case y la convierta en formato lowerCamelCase.

*   **Formato snake\_case:** Cada palabra está en minúscula, separada por un guion bajo "\_".

*   **Formato lowerCamelCase:** Cada palabra comienza con una letra mayúscula, excepto la primera.

*   **Salida:** La cadena convertida se muestra seguida de un salto de línea.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, se muestra un salto de línea.

    #include <unistd.h>
    
    int main(int argc, char **argv)
    {
    	int i = 0;
    	
    	if (argc == 2)
    	{
    		while(argv[1][i] != '\0')
    		{
    			if (argv[1][i] == '_')
    			{
    				i++;
    				argv[1][i] = argv[1][i]-32;
    			}
    			write (1, &argv[1][i], 1);
    			i++;
    		}
    	}
    	write(1, "\n", 1);
    	return (0);
    }

1.  **Inclusión de la biblioteca**:
    
        #include <unistd.h>
    
    Esta línea incluye la biblioteca `unistd.h`, que es necesaria para usar la función `write`.
    

2.  **Definición de la función principal**:
    
        int main(int argc, char **argv)
    
    La función `main` es el punto de entrada del programa. Toma dos parámetros: `argc`, que es el número de argumentos pasados al programa, y `argv`, que es un arreglo de cadenas de caracteres que contiene los argumentos.
    

3.  **Declaración de variables**:
    
        int i = 0;
    
    Se declara una variable `i` e inicializa a 0. Esta variable se usará como índice para recorrer la cadena de caracteres.
    

4.  **Comprobación del número de argumentos**:
    
        if (argc == 2)
    
    Se verifica si el número de argumentos es 2. Esto asegura que el programa solo se ejecutará si se pasa exactamente un argumento adicional (además del nombre del programa).
    

5.  **Bucle para procesar la cadena**:
    
        while(argv[1][i] != '\0')
    
    Este bucle `while` se ejecuta mientras el carácter actual de la cadena no sea el carácter nulo (`'\0'`), que indica el final de la cadena.
    

6.  **Conversión de caracteres y escritura**:
    
        if (argv[1][i] == '_')
        {
            i++;
            argv[1][i] = argv[1][i] - 32;
        }
        write(1, &argv[1][i], 1);
        i++;
    
    *   Si el carácter actual es un guion bajo (`'_'`), se incrementa `i` para saltar al siguiente carácter y se convierte ese carácter a mayúscula restando 32 (en ASCII, la diferencia entre minúsculas y mayúsculas es 32).
    
    *   Luego, se escribe el carácter actual en la salida estándar usando `write`.
    
    *   Finalmente, se incrementa `i` para pasar al siguiente carácter.

7.  **Escritura de un salto de línea**:
    
        write(1, "\n", 1);
    
    Después de procesar toda la cadena, se escribe un salto de línea (`'\n'`) en la salida estándar.
    

8.  **Retorno del valor**:
    
        return (0);
    
    La función `main` retorna 0, indicando que el programa ha terminado correctamente.
    

En resumen, este programa toma una cadena pasada como argumento, convierte los caracteres que siguen a un guion bajo en mayúsculas y los imprime en la salida estándar.

* * *

swap\_bits
----------

> Assignment name : swap\_bits  
> Expected files : swap\_bits.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write a function that takes a byte, swaps its halves (like the example) and  
> returns the result.  
>   
> Your function must be declared as follows:  
>   
> unsigned char swap\_bits(unsigned char octet);  
>   
> Example:  
>   
> 1 byte  
> \_\_\_\_\_\_\_\_\_\_\_\_\_  
> 0100 | 0001  
> \\ /  
> / \\  
> 0001 | 0100  

💡

*   **Objetivo:** Escribe una función que tome un byte (un número de 8 bits) como entrada, intercambie sus dos mitades (como se muestra en el ejemplo) y devuelva el resultado.

    unsigned char swap_bits(unsigned char octet)
    {
    	return ((octet >> 4) | (octet << 4));
    }

1.  **Definición de la función**:
    
        unsigned char swap_bits(unsigned char octet)
    
    La función `swap_bits` toma un parámetro `octet` de tipo `unsigned char` y retorna un valor de tipo `unsigned char`.
    

2.  **Operación de intercambio de bits**:
    
        return ((octet >> 4) | (octet << 4));
    
    Esta línea realiza el intercambio de los bits de `octet` de la siguiente manera:
    
    *   `octet >> 4`: Desplaza los bits de `octet` 4 posiciones a la derecha. Esto mueve los 4 bits más significativos a las posiciones de los 4 bits menos significativos.
    
    *   `octet << 4`: Desplaza los bits de `octet` 4 posiciones a la izquierda. Esto mueve los 4 bits menos significativos a las posiciones de los 4 bits más significativos.
    
    *   `|`: Realiza una operación OR bit a bit entre los dos resultados anteriores. Esto combina los bits desplazados para formar el nuevo valor de `octet` con los bits intercambiados.

En resumen, esta función intercambia los 4 bits más significativos con los 4 bits menos significativos de un `unsigned char` y retorna el resultado.

* * *

union
-----

> Assignment name : union  
> Expected files : union.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes two strings and displays, without doubles, the  
> characters that appear in either one of the strings.  
>   
> The display will be in the order characters appear in the command line, and  
> will be followed by a \\n.  
>   
> If the number of arguments is not 2, the program displays \\n.  
>   
> Example:  
>   
> $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e  
> zpadintoqefwjy$  
> $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e  
> df6vewg4thras$  
> $>./union "rien" "cette phrase ne cache rien" | cat -e  
> rienct phas$  
> $>./union | cat -e  
> $  
> $>  
> $>./union "rien" | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome dos cadenas de texto como entrada y muestre, sin duplicados, los caracteres que aparecen en cualquiera de las dos cadenas.

*   **Orden de salida:** Los caracteres se mostrarán en el orden en que aparecen en la línea de comandos.

*   **Salida:** La salida será seguida por un salto de línea.

*   **Condiciones de error:** Si no se proporcionan exactamente dos argumentos, el programa muestra un salto de línea.

    #include <unistd.h>
    
    int main(int ac, char **av)
    {
        if (ac == 3)
        {
            unsigned char seen[256] = {0};
            int i = 0;
            int j = 0;
    
            while (av[1][i])
            {
                if (!seen[(unsigned char)av[1][i]])
                {
                    write(1, &av[1][i], 1);
                    seen[(unsigned char)av[1][i]] = 1;
                }
                i++;
            }
            while (av[2][j])
            {
                if (!seen[(unsigned char)av[2][j]])
                {
                    write(1, &av[2][j], 1);
                    seen[(unsigned char)av[2][j]] = 1;
                }
                j++;
            }
        }
        write(1, "\n", 1);
        return 0;
    }

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la API del sistema operativo Unix, incluyendo la función `write`.
    

2.  **Función principal** `**main**`:
    
        int main(int ac, char **av)
    
    La función principal recibe dos argumentos: `ac` (el número de argumentos) y `av` (una matriz de cadenas que contiene los argumentos).
    

3.  **Comprobación del número de argumentos**:
    
        if (ac == 3
    
    Se verifica que el programa reciba exactamente 3 argumentos (el nombre del programa y dos cadenas).
    

4.  **Inicialización del array** `**seen**`:
    
        unsigned char seen[256] = {0}
    
    Se crea un array de 256 elementos (uno para cada posible valor de un `unsigned char`), inicializado a 0. Este array se usará para rastrear los caracteres que ya se han visto.
    

5.  **Variables de índice**:
    
        int i = 0;
        int j = 0;
    
    Se inicializan dos variables de índice para recorrer las cadenas.
    

6.  **Primer bucle** `**while**` **para la primera cadena**:
    
        while (av[1][i])
        {
            if (!seen[(unsigned char)av[1][i]])
            {
                write(1, &av[1][i], 1);
                seen[(unsigned char)av[1][i]] = 1;
            }
            i++;
        }
    
    Este bucle recorre la primera cadena (`av[1]`). Para cada carácter, si no ha sido visto antes (`seen` es 0), se escribe en la salida estándar y se marca como visto (`seen` se pone a 1).
    

7.  **Segundo bucle** `**while**` **para la segunda cadena**:
    
        while (av[2][j])
        {
            if (!seen[(unsigned char)av[2][j]])
            {
                write(1, &av[2][j], 1);
                seen[(unsigned char)av[2][j]] = 1;
            }
            j++;
        }
    
    Este bucle hace lo mismo que el anterior, pero para la segunda cadena (`av[2]`).
    

8.  **Escribir un salto de línea**:
    
        write(1, "\n", 1)
    
    Después de procesar ambas cadenas, se escribe un salto de línea en la salida estándar.
    

9.  **Retorno de la función**:
    
        return 0;
    
    La función `main` retorna 0, indicando que el programa terminó correctamente.
    

Este programa toma dos cadenas como argumentos y escribe en la salida estándar todos los caracteres únicos de ambas cadenas, en el orden en que aparecen.

* * *

wdmatch
-------

> Assignment name : wdmatch  
> Expected files : wdmatch.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes two strings and checks whether it's possible to  
> write the first string with characters from the second string, while respecting  
> the order in which these characters appear in the second string.  
>   
> If it's possible, the program displays the string, followed by a \\n, otherwise  
> it simply displays a \\n.  
>   
> If the number of arguments is not 2, the program displays a \\n.  
>   
> Examples:  
>   
> $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e  
> faya$  
> $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e  
> $  
> $>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e  
> forty two$  
> $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e  
> $  
> $>./wdmatch | cat -e  
> $  

💡

*   **Objetivo:** Escribe un programa que tome dos cadenas de texto como entrada y verifique si es posible escribir la primera cadena utilizando los caracteres de la segunda cadena, manteniendo el orden en que aparecen en la segunda cadena.

*   **Salida:** Si es posible, el programa muestra la primera cadena seguida de un salto de línea. Si no es posible, simplemente muestra un salto de línea.

*   **Condiciones de error:** Si no se proporcionan exactamente dos argumentos, el programa muestra un salto de línea.

    #include <unistd.h>
    
    int main(int ac, char **av)
    {
        int i;
        int j;
        
        if (ac == 3)
        {
            j = 0;
            i = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                    i++;
                j++;
            }
            if (av[1][i] == '\0')
            {
                i = 0;
                while(av[1][i])
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
            }
        }
        write(1, "\n", 1);
        return(0);
    }

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la API del sistema operativo Unix, incluyendo la función `write`.
    

2.  **Función principal** `**main**`:
    
        int main(int ac, char **av)
    
    La función principal recibe dos argumentos: `ac` (el número de argumentos) y `av` (una matriz de cadenas que contiene los argumentos).
    

3.  **Declaración de variables**:
    
        int i;
        int j;
    
    Se declaran dos variables enteras `i` y `j` que se usarán como índices.
    

4.  **Comprobación del número de argumentos**:
    
        if (ac == 3)
    
    Se verifica que el programa reciba exactamente 3 argumentos (el nombre del programa y dos cadenas).
    

5.  **Inicialización de índices**:
    
        j = 0;
        i = 0;
    
    Se inicializan las variables `i` y `j` a 0.
    

6.  **Primer bucle** `**while**` **para comparar caracteres**:
    
        while (av[2][j])
        {
            if (av[1][i] == av[2][j])
                i++;
            j++;
        }
    
    Este bucle recorre la segunda cadena (`av[2]`). Por cada carácter de `av[2]`, si coincide con el carácter actual de `av[1]`, se incrementa `i`. Independientemente de si hay coincidencia o no, `j` se incrementa en cada iteración.
    

7.  **Comprobación de coincidencia completa**:
    
        if (av[1][i] == '\0')
    
    Después del bucle, se verifica si se ha recorrido toda la primera cadena (`av[1]`). Si `av[1][i]` es el carácter nulo (`'\0'`), significa que todos los caracteres de `av[1]` se encontraron en `av[2]` en el mismo orden.
    

8.  **Segundo bucle** `**while**` **para escribir caracteres**:
    
        i = 0;
        while(av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
    
    Si la condición anterior es verdadera, se reinicia `i` a 0 y se recorre `av[1]` de nuevo, escribiendo cada carácter en la salida estándar.
    

9.  **Escribir un salto de línea**:
    
        write(1, "\n", 1);
    
    Después de procesar ambas cadenas, se escribe un salto de línea en la salida estándar.
    

10.  **Retorno de la función**:
    
        return(0);
    
    La función `main` retorna 0, indicando que el programa terminó correctamente.
    

Este programa verifica si todos los caracteres de la primera cadena (`av[1]`) aparecen en la segunda cadena (`av[2]`) en el mismo orden. Si es así, escribe la primera cadena en la salida estándar.

* * *

Level 3
=======

add\_prime\_sum
---------------

> Assignment name : add\_prime\_sum  
> Expected files : add\_prime\_sum.c  
> Allowed functions: write, exit  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a positive integer as argument and displays the sum  
> of all prime numbers inferior or equal to it followed by a newline.  
>   
> If the number of arguments is not 1, or the argument is not a positive number,  
> just display 0 followed by a newline.  
>   
> Yes, the examples are right.  
>   
> Examples:  
>   
> $>./add\_prime\_sum 5  
> 10  
> $>./add\_prime\_sum 7 | cat -e  
> 17$  
> $>./add\_prime\_sum | cat -e  
> 0$  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome un número entero positivo como argumento y muestre la suma de todos los números primos inferiores o iguales a él, seguido de un salto de línea.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento o si el argumento no es un número positivo, simplemente se muestra 0 seguido de un salto de línea.

    #include <unistd.h>
    
    int	ft_atoi(char *s)
    {
    	int	res = 0;
    
    	while (*s)
    		res = res * 10 + *s++ - 48;
    	return (res);
    }
    
    int	is_prime(int num)
    {
    	int	i = 2;
    
    	if (num <= 1)
    		return (0);
    	while (i * i <= num)
    	{
    		if (num % i == 0)
    			return (0);
    		i++;
    	}
    	return (1);
    }
    
    void	put_nbr(int n)
    {
    	if (n >= 10)
    		put_nbr(n / 10);
    	char digit = n % 10 + '0';
    	write(1, &digit, 1);
    }
    
    int main(int ac, char **av)
    {
    
    	if (ac == 2)
    	{
    		int	nbr = ft_atoi(av[1]);
    		int	sum = 0;
    
    		while (nbr > 0)
    		{
    			if (is_prime(nbr))
    				sum += nbr;
    			nbr--;
    		}
    		put_nbr(sum);
    	}
    	if (ac != 2)
    		put_nbr(0);
    	write(1, "\n", 1);
    	return (0);
    }

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la API del sistema operativo Unix, incluyendo la función `write`.
    

2.  **Función** `**ft_atoi**`:
    
        int	ft_atoi(char *s)
        {
            int	res = 0;
        
            while (*s)
                res = res * 10 + *s++ - 48;
            return (res);
        }
    
    Esta función convierte una cadena de caracteres (`char *s`) en un número entero. Inicializa `res` a 0 y recorre la cadena, convirtiendo cada carácter en su valor numérico correspondiente y acumulándolo en `res`.
    

3.  **Función** `**is_prime**`:
    
        int	is_prime(int num)
        {
            int	i = 2;
        
            if (num <= 1)
                return (0);
            while (i * i <= num)
            {
                if (num % i == 0)
                    return (0);
                i++;
            }
            return (1);
        }
    
    Esta función verifica si un número es primo. Si el número es menor o igual a 1, retorna 0 (no es primo). Luego, verifica si el número es divisible por algún número entre 2 y la raíz cuadrada del número. Si encuentra un divisor, retorna 0. Si no encuentra divisores, retorna 1 (es primo).
    

4.  **Función** `**put_nbr**`:
    
        void	put_nbr(int n)
        {
            if (n >= 10)
                put_nbr(n / 10);
            char digit = n % 10 + '0';
            write(1, &digit, 1);
        }
    
    Esta función escribe un número entero en la salida estándar. Si el número es mayor o igual a 10, llama recursivamente a `put_nbr` con `n / 10`. Luego, escribe el dígito menos significativo (`n % 10`) convertido a carácter.
    

5.  **Función** `**main**`:
    
        int main(int ac, char **av)
        {
            if (ac == 2)
            {
                int	nbr = ft_atoi(av[1]);
                int	sum = 0;
        
                while (nbr > 0)
                {
                    if (is_prime(nbr))
                        sum += nbr;
                    nbr--;
                }
                put_nbr(sum);
            }
            if (ac != 2)
                put_nbr(0);
            write(1, "\n", 1);
            return (0);
        }
    
    La función principal verifica si se ha pasado exactamente un argumento (además del nombre del programa). Si es así, convierte el argumento a un número entero usando `ft_atoi`. Luego, suma todos los números primos menores o iguales a ese número y escribe la suma en la salida estándar usando `put_nbr`. Si no se pasa exactamente un argumento, escribe 0 en la salida estándar.
    

Este programa toma un número como argumento, suma todos los números primos menores o iguales a ese número y escribe la suma en la salida estándar.

* * *

epur\_str
---------

> Assignment name : epur\_str  
> Expected files : epur\_str.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a string, and displays this string with exactly one  
> space between words, with no spaces or tabs either at the beginning or the end,  
> followed by a \\n.  
>   
> A "word" is defined as a part of a string delimited either by spaces/tabs, or  
> by the start/end of the string.  
>   
> If the number of arguments is not 1, or if there are no words to display, the  
> program displays \\n.  
>   
> Example:  
>   
> $> ./epur\_str "See? It's easy to print the same thing" | cat -e  
> See? It's easy to print the same thing$  
> $> ./epur\_str " this time it will be more complex . " | cat -e  
> this time it will be more complex .$  
> $> ./epur\_str "No S\*\*\* Sherlock..." "nAw S\*\*\* ShErLaWQ..." | cat -e  
> $  
> $> ./epur\_str "" | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto como entrada y la muestre con exactamente un espacio entre palabras, sin espacios ni tabulaciones al principio o al final, seguida de un salto de línea.

*   **Definición de palabra:** Una palabra es una sección de la cadena delimitada por espacios, tabulaciones o el inicio/final de la cadena.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento o si no hay palabras que mostrar, el programa muestra un salto de línea.

    #include <unistd.h>
    
    int main(int argc, char const *argv[])
    {
    	int i;
    	int flg;
    
    	if (argc == 2)
    	{
    		i = 0;
    		while (argv[1][i] == ' ' || argv[1][i] == '\t')
    			i += 1;
    		while (argv[1][i])
    		{
    			if (argv[1][i] == ' ' || argv[1][i] == '\t')
    				flg = 1;
    			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
    			{
    				if (flg)
    					write(1, " ", 1);
    				flg = 0;
    				write(1, &argv[1][i], 1);
    			}
    			i += 1;
    		}
    	}
    	write(1, "\n", 1);
    	return (0);
    }

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la API del sistema operativo Unix, incluyendo la función `write`.
    

2.  **Función principal** `**main**`:
    
        int main(int argc, char const *argv[])
    
    La función principal recibe dos argumentos: `argc` (el número de argumentos) y `argv` (una matriz de cadenas que contiene los argumentos).
    

3.  **Declaración de variables**:
    
        int i;
        int flg;
    
    Se declaran dos variables enteras `i` y `flg`. `i` se usará como índice para recorrer la cadena, y `flg` se usará como bandera para controlar los espacios.
    

4.  **Comprobación del número de argumentos**:
    
        if (argc == 2)
    
    Se verifica que el programa reciba exactamente 2 argumentos (el nombre del programa y una cadena).
    

5.  **Inicialización del índice**:
    
        i = 0;
    
    Se inicializa la variable `i` a 0.
    

6.  **Primer bucle** `**while**` **para saltar espacios iniciales**:
    
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i += 1;
    
    Este bucle recorre la cadena hasta encontrar el primer carácter que no sea un espacio (`' '`) o una tabulación (`'\t'`).
    

7.  **Segundo bucle** `**while**` **para procesar la cadena**:
    
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flg = 1;
            if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
            {
                if (flg)
                    write(1, " ", 1);
                flg = 0;
                write(1, &argv[1][i], 1);
            }
            i += 1;
        }
    
    Este bucle recorre la cadena desde el primer carácter no vacío. Si encuentra un espacio o una tabulación, establece `flg` a 1. Si encuentra un carácter que no es un espacio ni una tabulación, y `flg` es 1, escribe un espacio en la salida estándar y luego el carácter actual. Después, restablece `flg` a 0.
    

8.  **Escribir un salto de línea**:
    
        write(1, "\n", 1);
    
    Después de procesar la cadena, se escribe un salto de línea en la salida estándar.
    

9.  **Retorno de la función**:
    
        return (0);
    
    La función `main` retorna 0, indicando que el programa terminó correctamente.
    

Este programa toma una cadena como argumento, elimina los espacios y tabulaciones iniciales, y luego escribe la cadena en la salida estándar, asegurándose de que haya solo un espacio entre las palabras.

* * *

expand\_str
-----------

> Assignment name : expand\_str  
> Expected files : expand\_str.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a string and displays it with exactly three spaces  
> between each word, with no spaces or tabs either at the beginning or the end,  
> followed by a newline.  
>   
> A word is a section of string delimited either by spaces/tabs, or by the  
> start/end of the string.  
>   
> If the number of parameters is not 1, or if there are no words, simply display  
> a newline.  
>   
> Examples:  
>   
> $> ./expand\_str "See? It's easy to print the same thing" | cat -e  
> See? It's easy to print the same thing$  
> $> ./expand\_str " this time it will be more complex " | cat -e  
> this time it will be more complex$  
> $> ./expand\_str "No S\*\*\* Sherlock..." "nAw S\*\*\* ShErLaWQ..." | cat -e  
> $  
> $> ./expand\_str "" | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto como entrada y la muestre con exactamente tres espacios entre cada palabra, sin espacios ni tabulaciones al principio o al final, seguida de un salto de línea.

*   **Definición de palabra:** Una palabra es una sección de la cadena delimitada por espacios, tabulaciones o el inicio/final de la cadena.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento o si no hay palabras que mostrar, el programa muestra un salto de línea.

    #include <unistd.h>
    
    int main(int argc, char const *argv[])
    {
        int i;
        int flag = 0;
    
        if (argc == 2)
        {
            i = 0;
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            while (argv[1][i])
            {
                if (argv[1][i] == ' ' || argv[1][i] == '\t')
                    flag = 1;
                else
                {
                    if (flag)
                        write(1, "   ", 3);
                    flag = 0;
                    write(1, &argv[1][i], 1);
                }
                i++;
            }
        }
        write(1, "\n", 1);
        return (0);
    }

1.  **Inclusión de la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta biblioteca proporciona acceso a la API del sistema operativo Unix, incluyendo la función `write`.
    

2.  **Función principal** `**main**`:
    
        int main(int argc, char const *argv[])
    
    La función principal recibe dos argumentos: `argc` (el número de argumentos) y `argv` (una matriz de cadenas que contiene los argumentos).
    

3.  **Declaración de variables**:
    
        int i;
        int flag = 0;
    
    Se declaran dos variables enteras `i` y `flag`. `i` se usará como índice para recorrer la cadena, y `flag` se usará como bandera para controlar los espacios.
    

4.  **Comprobación del número de argumentos**:
    
        if (argc == 2)
    
    Se verifica que el programa reciba exactamente 2 argumentos (el nombre del programa y una cadena).
    

5.  **Inicialización del índice**:
    
        i = 0;
    
    Se inicializa la variable `i` a 0.
    

6.  **Primer bucle** `**while**` **para saltar espacios iniciales**:
    
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
    
    Este bucle recorre la cadena hasta encontrar el primer carácter que no sea un espacio (`' '`) o una tabulación (`'\t'`).
    

7.  **Segundo bucle** `**while**` **para procesar la cadena**:
    
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            else
            {
                if (flag)
                    write(1, "   ", 3);
                flag = 0;
                write(1, &argv[1][i], 1);
            }
            i++;
        
    
    Este bucle recorre la cadena desde el primer carácter no vacío. Si encuentra un espacio o una tabulación, establece `flag` a 1. Si encuentra un carácter que no es un espacio ni una tabulación, y `flag` es 1, escribe tres espacios en la salida estándar y luego el carácter actual. Después, restablece `flag` a 0.
    

8.  **Escribir un salto de línea**:
    
        write(1, "\n", 1);
    
    Después de procesar la cadena, se escribe un salto de línea en la salida estándar.
    

9.  **Retorno de la función**:
    
        return (0);
    
    La función `main` retorna 0, indicando que el programa terminó correctamente.
    

Este programa toma una cadena como argumento, elimina los espacios y tabulaciones iniciales, y luego escribe la cadena en la salida estándar, asegurándose de que haya exactamente tres espacios entre las palabras.

* * *

ft\_atoi\_base
--------------

> Assignment name : ft\_atoi\_base  
> Expected files : ft\_atoi\_base.c  
> Allowed functions: None  
> \--------------------------------------------------------------------------------  
>   
> Write a function that converts the string argument str (base N <= 16)  
> to an integer (base 10) and returns it.  
>   
> The characters recognized in the input are: 0123456789abcdef  
> Those are, of course, to be trimmed according to the requested base. For  
> example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".  
>   
> Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".  
>   
> Minus signs ('-') are interpreted only if they are the first character of the  
> string.  
>   
> Your function must be declared as follows:  
>   
> int ft\_atoi\_base(const char \*str, int str\_base);  

💡

*   **Objetivo:** Escribe una función que convierta una cadena de texto en un número entero (base 10), considerando una base especificada (N <= 16).

*   **Caracteres reconocidos:** Los caracteres reconocidos son "0123456789abcdef". Se deben recortar según la base especificada.

*   **Mayúsculas:** Se reconocen tanto las minúsculas como las mayúsculas.

*   **Signo negativo:** Se interpretan los signos negativos solo si son el primer carácter de la cadena.

    #include <stdio.h>
    
    char to_lower(char c)
    {
    	if (c >= 'A' && c <= 'Z')
    		return (c + ('a' - 'A'));
    	return (c);
    }
    
    int get_digit(char c, int digits_in_base)
    {
    	int max_digit;
    
    	if (digits_in_base <= 10)
    		max_digit = digits_in_base - 1 + '0';
    	else
    		max_digit = digits_in_base - 10 - 1 + 'a';
    
    	if (c >= '0' && c <= '9' && c <= max_digit)
    		return (c - '0');
    	else if (c >= 'a' && c <= 'f' && c <= max_digit)
    		return (10 + c - 'a');
    	else
    		return (-1);
    }
    
    int ft_atoi_base(const char *str, int str_base)
    {
    	int result = 0;
    	int sign = 1;
    	int digit;
    
    	if (str == NULL || str_base < 2 || str_base > 16)
    		return 0;
    
    	if (*str == '-')
    	{
    		sign = -1;
    		++str;
    	}
    
    	while (*str)
    	{
    		digit = get_digit(to_lower(*str), str_base);
    		if (digit == -1)
    			break;
    		result = result * str_base + digit;
    		++str;
    	}
    	return (result * sign);
    }

**1\. Función** `**to_lower**`

    char to_lower(char c)
    {
    	if (c >= 'A' && c <= 'Z')
    		return (c + ('a' - 'A'));
    	return (c);
    }

*   **Propósito**: Convierte un carácter mayúscula a minúscula.

*   **Proceso**:
    
    *   Verifica si el carácter `c` está entre ‘A’ y ‘Z’.
    
    *   Si es así, convierte `c` a minúscula sumando la diferencia entre ‘a’ y ‘A’.
    
    *   Si no, devuelve el carácter tal cual.

**2\. Función** `**get_digit**`

    int get_digit(char c, int digits_in_base)
    {
    	int max_digit;
    
    	if (digits_in_base <= 10)
    		max_digit = digits_in_base - 1 + '0';
    	else
    		max_digit = digits_in_base - 10 - 1 + 'a';
    
    	if (c >= '0' && c <= '9' && c <= max_digit)
    		return (c - '0');
    	else if (c >= 'a' && c <= 'f' && c <= max_digit)
    		return (10 + c - 'a');
    	else
    		return (-1);
    }

*   **Propósito**: Convierte un carácter a su valor numérico en una base específica.

*   **Proceso**:
    
    *   Calcula el valor máximo permitido para un dígito en la base dada.
    
    *   Si el carácter `c` es un dígito entre ‘0’ y ‘9’ y está dentro del rango permitido, devuelve su valor numérico.
    
    *   Si el carácter `c` es una letra entre ‘a’ y ‘f’ y está dentro del rango permitido, devuelve su valor numérico correspondiente.
    
    *   Si no, devuelve -1 indicando un carácter inválido.

**3\. Función** `**ft_atoi_base**`

    int ft_atoi_base(const char *str, int str_base)
    {
    	int result = 0;
    	int sign = 1;
    	int digit;
    
    	if (str == NULL || str_base < 2 || str_base > 16)
    		return 0;
    
    	if (*str == '-')
    	{
    		sign = -1;
    		++str;
    	}
    
    	while (*str)
    	{
    		digit = get_digit(to_lower(*str), str_base);
    		if (digit == -1)
    			break;
    		result = result * str_base + digit;
    		++str;
    	}
    	return (result * sign);
    }

*   **Propósito**: Convierte una cadena de caracteres en un número entero en una base específica.

*   **Proceso**:
    
    *   Inicializa `result` a 0 y `sign` a 1.
    
    *   Verifica si la cadena es nula o si la base es inválida (menor que 2 o mayor que 16).
    
    *   Si el primer carácter es un ‘-’, establece `sign` a -1 y avanza al siguiente carácter.
    
    *   Recorre cada carácter de la cadena:
        
        *   Convierte el carácter a minúscula.
        
        *   Obtiene el valor numérico del carácter en la base dada.
        
        *   Si el valor es inválido, termina el bucle.
        
        *   Actualiza `result` multiplicando por la base y sumando el valor del dígito.
    
    *   Devuelve `result` multiplicado por `sign`.

* * *

ft\_list\_size
--------------

> Assignment name : ft\_list\_size  
> Expected files : ft\_list\_size.c, ft\_list.h  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write a function that returns the number of elements in the linked list that's  
> passed to it.  
>   
> It must be declared as follows:  
>   
> int ft\_list\_size(t\_list \*begin\_list);  
>   
> You must use the following structure, and turn it in as a file called  
> ft\_list.h:  
>   
> typedef struct s\_list  
> {  
> struct s\_list \*next;  
> void \*data;  
> } t\_list;  
>   

💡

*   **Objetivo:** Escribe una función que devuelva el número de elementos en una lista enlazada que se le pasa como parámetro.

    typedef struct    s_list
    {
        struct s_list *next;
        void          *data;
    }                t_list;

    #include "ft_list.h"
    
    int	ft_list_size(t_list *begin_list)
    {
    	if (begin_list == 0)
    		return (0);
    	else
    		return (1 + ft_list_size(begin_list->next));
    }

**1\. Inclusión del archivo de cabecera**

    #include "ft_list.h"

*   **Propósito**: Incluye la definición de la estructura `t_list` y cualquier otra función o macro necesaria para trabajar con listas enlazadas.

**2\. Función** `**ft_list_size**`

    int ft_list_size(t_list *begin_list)
    {
    	if (begin_list == 0)
    		return (0);
    	else
    		return (1 + ft_list_size(begin_list->next));
    }

*   **Propósito**: Calcula el tamaño (número de elementos) de una lista enlazada.

*   **Parámetro**:
    *   `begin_list`: Un puntero al primer nodo de la lista enlazada.

*   **Proceso**:
    
    1.  **Caso base**:
        *   Si `begin_list` es `NULL` (0), la lista está vacía y la función devuelve 0.
    
    2.  **Recursión**:
        
        *   Si `begin_list` no es `NULL`, la función devuelve 1 más el tamaño de la lista comenzando desde el siguiente nodo (`begin_list->next`).
        
        *   Esto se logra llamando recursivamente a `ft_list_size` con el siguiente nodo de la lista.

Ejemplo de uso

Supongamos que tienes una lista enlazada con tres nodos. La función `ft_list_size` se llamará de la siguiente manera:

1.  `ft_list_size(nodo1)`:
    *   `nodo1` no es `NULL`, así que devuelve `1 + ft_list_size(nodo2)`.

2.  `ft_list_size(nodo2)`:
    *   `nodo2` no es `NULL`, así que devuelve `1 + ft_list_size(nodo3)`.

3.  `ft_list_size(nodo3)`:
    *   `nodo3` no es `NULL`, así que devuelve `1 + ft_list_size(NULL)`.

4.  `ft_list_size(NULL)`:
    *   Devuelve 0 porque la lista ha llegado al final.

Finalmente, la suma de todas estas llamadas recursivas será 3, que es el tamaño de la lista.

* * *

ft\_range
---------

> Assignment name : ft\_range  
> Expected files : ft\_range.c  
> Allowed functions: malloc  
> \--------------------------------------------------------------------------------  
>   
> Write the following function:  
>   
> int \*ft\_range(int start, int end);  
>   
> It must allocate (with malloc()) an array of integers, fill it with consecutive  
> values that begin at start and end at end (Including start and end !), then  
> return a pointer to the first value of the array.  
>   
> Examples:  
>   
> \- With (1, 3) you will return an array containing 1, 2 and 3.  
> \- With (-1, 2) you will return an array containing -1, 0, 1 and 2.  
> \- With (0, 0) you will return an array containing 0.  
> \- With (0, -3) you will return an array containing 0, -1, -2 and -3.  

💡

~La tarea consiste en crear una función que genere un arreglo de enteros consecutivos entre dos valores dados, incluyendo los valores extremos. La función debe asignar memoria para el arreglo y devolver un puntero al primer elemento.~

    #include <stdlib.h>
    
    int *ft_range(int start, int end)
    {
    	int i = 0;
    	int len = abs((end - start)) + 1;
    	int *res = (int *)malloc(sizeof(int) * len);
    	
    	while (i < len)
    	{
    		if (start < end)
    		{
    			res[i] = start;
    			start++;
    			i++;
    		}
    		else
    		{
    			res[i] = start;
    			start--;
    			i++;
    		}
    	}
            return (res);
    }

**1\. Inclusión de la biblioteca estándar**

    #include <stdlib.h>

*   **Propósito**: Incluye la biblioteca estándar de C que contiene funciones para la gestión de memoria dinámica, como `malloc`.

**2\. Función** `**ft_range**`

    int *ft_range(int start, int end)
    {
    	int i = 0;
    	int len = abs((end - start)) + 1;
    	int *res = (int *)malloc(sizeof(int) * len);
    
    	while (i < len)
    	{
    		if (start < end)
    		{
    			res[i] = start;
    			start++;
    			i++;
    		}
    		else
    		{
    			res[i] = start;
    			start--;
    			i++;
    		}
    	}
            return (res);
    }

*   **Propósito**: Crea un array de enteros que contiene todos los valores desde `start` hasta `end`, inclusive.

*   **Parámetros**:
    
    *   `start`: El valor inicial del rango.
    
    *   `end`: El valor final del rango.

**3\. Declaración e inicialización de variables**

    int i = 0;
    int len = abs((end - start)) + 1;
    int *res = (int *)malloc(sizeof(int) * len);

*   **i**: Un contador inicializado a 0.

*   **len**: La longitud del array, calculada como la diferencia absoluta entre `end` y `start`, más 1.

*   **res**: Un puntero a un array de enteros, asignado dinámicamente con `malloc` para contener `len` elementos.

**4\. Bucle** `**while**`

    while (i < len)
    {
    	if (start < end)
    	{
    		res[i] = start;
    		start++;
    		i++;
    	}
    	else
    	{
    		res[i] = start;
    		start--;
    		i++;
    	}

*   **Propósito**: Llena el array `res` con los valores desde `start` hasta `end`.

*   **Proceso**:
    *   Mientras `i` sea menor que `len`:
        
        *   Si `start` es menor que `end`:
            
            *   Asigna `start` a `res[i]`.
            
            *   Incrementa `start` y `i`.
        
        *   Si `start` es mayor o igual que `end`:
            
            *   Asigna `start` a `res[i]`.
            
            *   Decrementa `start` y aumenta `i`.

**5\. Retorno del array**

    return (res);

*   **Propósito**: Devuelve el puntero al array `res` que contiene el rango de valores.

Ejemplo de uso

Si llamas a `ft_range(3, 7)`, el array resultante será `[3, 4, 5, 6, 7]`. Si llamas a `ft_range(7, 3)`, el array resultante será `[7, 6, 5, 4, 3]`.

* * *

ft\_rrange
----------

> Assignment name : ft\_rrange  
> Expected files : ft\_rrange.c  
> Allowed functions: malloc  
> \--------------------------------------------------------------------------------  
>   
> Write the following function:  
>   
> int \*ft\_rrange(int start, int end);  
>   
> It must allocate (with malloc()) an array of integers, fill it with consecutive  
> values that begin at end and end at start (Including start and end !), then  
> return a pointer to the first value of the array.  
>   
> Examples:  
>   
> \- With (1, 3) you will return an array containing 3, 2 and 1  
> \- With (-1, 2) you will return an array containing 2, 1, 0 and -1.  
> \- With (0, 0) you will return an array containing 0.  
> \- With (0, -3) you will return an array containing -3, -2, -1 and 0.  

💡

~La tarea consiste en crear una función que genere un arreglo de enteros consecutivos en orden descendente, desde `end` hasta `start` (incluyendo ambos). La función debe asignar memoria para el arreglo y devolver un puntero al primer elemento.

    #include <stdlib.h>
    
    int *ft_rrange(int start, int end)
    {
    	int *range;
    	int i = 0;
    	int step = 1;
    	int n = end - start;
    
    	if (n < 0)
    		(n *= -1);
    	n++;
    
    	range = (int *)malloc(sizeof(int) * n);
    	if (range)
    	{
    		if (start < end)
    			step = -1;
    		while (i < n)
    		{
    			range[i] = end;
    			end = end + step;
    			i++;
    		}
    	}
    	return (range);
    }

**1\. Inclusión de la biblioteca estándar**

    #include <stdlib.h>

*   **Propósito**: Incluye la biblioteca estándar de C que contiene funciones para la gestión de memoria dinámica, como `malloc`.

**2\. Función** `**ft_rrange**`

    int *ft_rrange(int start, int end)
    {
    	int *range;
    	int i = 0;
    	int step = 1;
    	int n = end - start;
    
    	if (n < 0)
    		(n *= -1);
    	n++;
    
    	range = (int *)malloc(sizeof(int) * n);
    	if (range)
    	{
    		if (start < end)
    			step = -1;
    		while (i < n)
    		{
    			range[i] = end;
    			end = end + step;
    			i++;
    		}
    	}
    	return (range);
    }

*   **Propósito**: Crea un array de enteros que contiene todos los valores desde `end` hasta `start`, inclusive, en orden inverso.

*   **Parámetros**:
    
    *   `start`: El valor inicial del rango.
    
    *   `end`: El valor final del rango.

**3\. Declaración e inicialización de variables**

    int *range;
    int i = 0;
    int step = 1;
    int n = end - start;

*   **range**: Un puntero a un array de enteros.

*   **i**: Un contador inicializado a 0.

*   **step**: El paso de incremento/decremento, inicialmente 1.

*   **n**: La diferencia entre `end` y `start`.

**4\. Ajuste de** `**n**` **y cálculo de la longitud del array**

    if (n < 0)
    	(n *= -1);
    n++;

*   Si `n` es negativo, se convierte en positivo.

*   Se incrementa `n` en 1 para incluir ambos extremos (`start` y `end`).

**5\. Asignación de memoria para el array**

    range = (int *)malloc(sizeof(int) * n)

*   Se asigna memoria para un array de `n` enteros.

**6\. Verificación de la asignación de memoria y ajuste de** `**step**`

    if (range)
    {
    	if (start < end)
    		step = -1;

*   Si la asignación de memoria es exitosa:
    *   Si `start` es menor que `end`, se ajusta `step` a -1 para decrementar `end` en cada iteración.

**7\. Llenado del array**

    	while (i < n)
    	{
    		range[i] = end;
    		end = end + step;
    		i++;
    	}

*   Mientras `i` sea menor que `n`:
    
    *   Asigna `end` a `range[i]`.
    
    *   Ajusta `end` sumando `step` (incremento o decremento).
    
    *   Incrementa `i`.

**8\. Retorno del array**

    return (range);

*   Devuelve el puntero al array `range` que contiene el rango de valores en orden inverso.

Ejemplo de uso

Si llamas a `ft_rrange(3, 7)`, el array resultante será `[7, 6, 5, 4, 3]`. Si llamas a `ft_rrange(7, 3)`, el array resultante será `[3, 4, 5, 6, 7]`.

* * *

hidenp
------

> Assignment name : hidenp  
> Expected files : hidenp.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program named hidenp that takes two strings and displays 1  
> followed by a newline if the first string is hidden in the second one,  
> otherwise displays 0 followed by a newline.  
>   
> Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to  
> find each character from s1 in s2, in the same order as they appear in s1.  
> Also, the empty string is hidden in any string.  
>   
> If the number of parameters is not 2, the program displays a newline.  
>   
> Examples :  
>   
> $>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e  
> 1$  
> $>./hidenp "abc" "2altrb53c.sse" | cat -e  
> 1$  
> $>./hidenp "abc" "btarc" | cat -e  
> 0$  
> $>./hidenp | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa llamado `hidenp` que tome dos cadenas de texto como entrada y muestre 1 seguido de un salto de línea si la primera cadena está oculta en la segunda, o 0 seguido de un salto de línea si no lo está.

*   **Definición de "oculto":** Una cadena `s1` está oculta en una cadena `s2` si es posible encontrar cada carácter de `s1` en `s2` en el mismo orden en que aparecen en `s1`. También se considera que la cadena vacía está oculta en cualquier cadena.

*   **Condiciones de error:** Si no se proporcionan exactamente dos argumentos, el programa muestra un salto de línea.

    #include <unistd.h>
    
    int main(int argc, char **argv)
    {
    	int i = 0;
    	int j = 0;
    	
    	if (argc == 3)
    	{
    		while (argv[2][j] && argv[1][i])
    		{
    			if (argv[2][j] == argv[1][i])
    				i++;
    			j++;
    		}
    		if (argv[1][i] == '\0')
    			write(1, "1", 1);
    		else
    			write(1, "0", 1);
    	}
    	write(1, "\n", 1);
    	return (0);
    }

**1\. Inclusión de la biblioteca estándar**

    #include <unistd.h>

*   **Propósito**: Incluye la biblioteca estándar de C que contiene funciones para realizar operaciones de entrada y salida, como `write`.

**2\. Función** `**main**`

    int main(int argc, char **argv)
    {
    	int i = 0;
    	int j = 0;

*   **Propósito**: Es el punto de entrada del programa.

*   **Parámetros**:
    
    *   `argc`: Número de argumentos pasados al programa.
    
    *   `argv`: Array de cadenas de caracteres que contiene los argumentos.

**3\. Inicialización de variables**

    	int i = 0;
    	int j = 0;

*   **i**: Contador para recorrer `argv[1]`.

*   **j**: Contador para recorrer `argv[2]`.

**4\. Verificación del número de argumentos**

    	if (argc == 3)

*   **Propósito**: Verifica que se hayan pasado exactamente 3 argumentos (incluyendo el nombre del programa).

**5\. Bucle** `**while**`

    		while (argv[2][j] && argv[1][i])
    		{
    			if (argv[2][j] == argv[1][i])
    				i++;
    			j++;
    		}

*   **Propósito**: Recorre `argv[2]` y `argv[1]` para verificar si todos los caracteres de `argv[1]` están presentes en `argv[2]` en el mismo orden.

*   **Proceso**:
    *   Mientras haya caracteres en `argv[2][j]` y `argv[1][i]`:
        
        *   Si el carácter actual de `argv[2]` es igual al carácter actual de `argv[1]`, incrementa `i`.
        
        *   Siempre incrementa `j`.

**6\. Verificación del resultado**

    		if (argv[1][i] == '\0')
    			write(1, "1", 1);
    		else
    			write(1, "0", 1);

*   **Propósito**: Determina si todos los caracteres de `argv[1]` fueron encontrados en `argv[2]`.

*   **Proceso**:
    
    *   Si `argv[1][i]` es `'\0'`, significa que todos los caracteres de `argv[1]` fueron encontrados en `argv[2]` en el mismo orden, y escribe “1”.
    
    *   Si no, escribe “0”.

**7\. Escribir un salto de línea y retornar**

    	write(1, "\n", 1);
    	return (0);
    }

*   **Propósito**: Escribe un salto de línea para finalizar la salida y retorna 0 indicando que el programa terminó correctamente.

Ejemplo de uso

Si ejecutas el programa con los argumentos `./programa "abc" "aabbcc"`, el programa imprimirá `1` porque todos los caracteres de “abc” están presentes en “aabbcc” en el mismo orden. Si ejecutas el programa con los argumentos `./programa "abc" "acb"`, el programa imprimirá `0` porque los caracteres no están en el mismo orden.

* * *

lcm
---

> Assignment name : lcm  
> Expected files : lcm.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write a function who takes two unsigned int as parameters and returns the  
> computed LCM of those parameters.  
>   
> LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive  
> integer divisible by the both integers.  
>   
> A LCM can be calculated in two ways:  
>   
> \- You can calculate every multiples of each integers until you have a common  
> multiple other than 0  
>   
> \- You can use the HCF (Highest Common Factor) of these two integers and  
> calculate as follows:  
>   
> LCM(x, y) = | x \* y | / HCF(x, y)  
>   
> | x \* y | means "Absolute value of the product of x by y"  
>   
> If at least one integer is null, LCM is equal to 0.  
>   
> Your function must be prototyped as follows:  
>   
> unsigned int lcm(unsigned int a, unsigned int b);  

💡

*   **Objetivo:** Escribe una función que tome dos números enteros no negativos como parámetros y devuelva su mínimo común múltiplo (LCM).

*   **Definición de LCM:** El LCM de dos números enteros no nulos es el número entero positivo más pequeño que es divisible por ambos números.

*   **Métodos de cálculo:**
    
    *   Se pueden calcular los múltiplos de cada número hasta encontrar un múltiplo común distinto de 0.
    
    *   Se puede usar el máximo común divisor (MCD) de los dos números y calcular el LCM como:

`LCM(x, y) = | x * y | / MCD(x, y)`

donde | x \* y | significa "valor absoluto del producto de x por y".

*   **Caso especial:** Si al menos uno de los números es cero, el LCM es igual a 0.

*   **Declaración requerida:** La función debe ser declarada de la siguiente manera:

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

1.  **Declaración de la función**:
    
        unsigned int lcm(unsigned int a, unsigned int b)
    
    Esta línea declara una función llamada `lcm` que toma dos parámetros `a` y `b`, ambos de tipo `unsigned int`, y devuelve un valor de tipo `unsigned int`.
    

2.  **Declaración de la variable** `**n**`:
    
        unsigned int n;
    
    Aquí se declara una variable `n` de tipo `unsigned int`.
    

3.  **Comprobación de ceros**:
    
        if (a == 0 || b == 0)
            return (0);
    
    Si alguno de los dos números es 0, la función devuelve 0 inmediatamente, ya que el mínimo común múltiplo (LCM) de cualquier número con 0 es 0.
    

4.  **Inicialización de** `**n**`:
    
        if (a > b)
            n = a;
        else
            n = b;
    
    Se inicializa `n` con el valor mayor entre `a` y `b`. Esto se hace porque el LCM no puede ser menor que el mayor de los dos números.
    

5.  **Bucle infinito**:
    
        while (1)
    
    Este es un bucle infinito que continuará ejecutándose hasta que se encuentre el LCM.
    

6.  **Comprobación del LCM**:
    
        if (n % a == 0 && n % b == 0)
            return (n);
    
    Dentro del bucle, se comprueba si `n` es divisible por `a` y `b` sin dejar residuo. Si es así, `n` es el LCM y se devuelve.
    

7.  **Incremento de** `**n**`:
    
        ++n;
    
    Si `n` no es divisible por `a` y `b`, se incrementa `n` en 1 y se vuelve a comprobar en la siguiente iteración del bucle.
    

* * *

paramsum
--------

> Assignment name : paramsum  
> Expected files : paramsum.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that displays the number of arguments passed to it, followed by  
> a newline.  
>   
> If there are no arguments, just display a 0 followed by a newline.  
>   
> Example:  
>   
> $>./paramsum 1 2 3 5 7 24  
> 6  
> $>./paramsum 6 12 24 | cat -e  
> 3$  
> $>./paramsum | cat -e  
> 0$  
> $>  

💡

**Objetivo:**

*   El programa `paramsum` debe contar y mostrar el número de argumentos que se le pasan.

**Funcionamiento:**

*   Si se le pasan argumentos, el programa muestra el número de argumentos seguido de un salto de línea.

*   Si no se le pasan argumentos, el programa muestra 0 seguido de un salto de línea.

**Ejemplo:**

    #include <unistd.h>
    
    void	ft_putnbr(int n)
    {
    	char digit;
    
    	if (n >= 10)
    		ft_putnbr(n / 10);
    	digit = (n % 10) + '0';
    	write(1, &digit, 1);
    }
    
    int	main(int argc, char **argv)
    {
    	(void)argv;
    
    	ft_putnbr(argc - 1);
    	write(1, "\n", 1);
    	return (0);
    }

1.  **Incluir la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta línea incluye la biblioteca `unistd.h`, que contiene la declaración de la función `write`.
    

2.  **Declaración de la función** `**ft_putnbr**`:
    
        void	ft_putnbr(int n)
    
    Esta línea declara una función llamada `ft_putnbr` que toma un parámetro `n` de tipo `int` y no devuelve ningún valor (`void`).
    

3.  **Declaración de la variable** `**digit**`:
    
        char digit;
    
    Aquí se declara una variable `digit` de tipo `char`.
    

4.  **Condición para números mayores o iguales a 10**:
    
        if (n >= 10)
            ft_putnbr(n / 10);
    
    Si `n` es mayor o igual a 10, la función se llama a sí misma recursivamente con el valor de `n` dividido por 10. Esto descompone el número en sus dígitos individuales.
    

5.  **Conversión del dígito a carácter**:
    
        digit = (n % 10) + '0';
    
    Se obtiene el último dígito de `n` usando `n % 10` y se convierte a su representación de carácter sumando `'0'`.
    

6.  **Escribir el dígito en la salida estándar**:
    
        write(1, &digit, 1);
    
    La función `write` escribe el carácter `digit` en la salida estándar (generalmente la pantalla). El `1` indica el descriptor de archivo para la salida estándar.
    

7.  **Función** `**main**`:
    
        int	main(int argc, char **argv)
        
    
    Esta es la función principal del programa. Toma dos parámetros: `argc`, que es el número de argumentos de la línea de comandos, y `argv`, que es una matriz de cadenas que contienen los argumentos.
    

8.  **Ignorar el parámetro** `**argv**`:
    
        (void)argv;
    
    Esta línea indica que el parámetro `argv` no se va a utilizar en el programa.
    

9.  **Llamada a** `**ft_putnbr**` **con** `**argc - 1**`:
    
        ft_putnbr(argc - 1);
    
    Se llama a la función `ft_putnbr` con el valor `argc - 1`, que representa el número de argumentos de la línea de comandos menos uno (generalmente, el nombre del programa).
    

10.  **Escribir un salto de línea**:
    
        write(1, "\n", 1);
    
    Esta línea escribe un carácter de nueva línea (`\n`) en la salida estándar.
    

11.  **Retorno de la función** `**main**`:
    
        return (0);
    
    La función `main` devuelve 0, indicando que el programa ha terminado correctamente.
    

* * *

pgcd
----

> Assignment name : pgcd  
> Expected files : pgcd.c  
> Allowed functions: printf, atoi, malloc, free  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes two strings representing two strictly positive  
> integers that fit in an int.  
>   
> Display their highest common denominator followed by a newline (It's always a  
> strictly positive integer).  
>   
> If the number of parameters is not 2, display a newline.  
>   
> Examples:  
>   
> $> ./pgcd 42 10 | cat -e  
> 2$  
> $> ./pgcd 42 12 | cat -e  
> 6$  
> $> ./pgcd 14 77 | cat -e  
> 7$  
> $> ./pgcd 17 3 | cat -e  
> 1$  
> $> ./pgcd | cat -e  
> $  

💡

*   **Objetivo:** Escribe un programa que tome dos cadenas de texto que representan números enteros estrictamente positivos que caben en un tipo `int`. Calcula y muestra su máximo común divisor (MCD) seguido de un salto de línea.

*   **Condiciones de error:** Si no se proporcionan exactamente dos argumentos, el programa muestra un salto de línea.

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

1.  **Incluir las bibliotecas** `**stdio.h**` **y** `**stdlib.h**`:
    
        #include <stdio.h>#include <stdlib.h>
    
    Estas líneas incluyen las bibliotecas estándar de C para entrada/salida (`stdio.h`) y funciones de utilidad (`stdlib.h`).
    

2.  **Declaración de la función** `**main**`:
    
        int main(int argc, char const *argv[])
    
    Esta línea declara la función principal del programa. `argc` es el número de argumentos de la línea de comandos y `argv` es una matriz de cadenas que contienen esos argumentos.
    

3.  **Declaración de las variables** `**nbr1**` **y** `**nbr2**`:
    
        int nbr1;
        int nbr2;
    
    Aquí se declaran dos variables enteras `nbr1` y `nbr2`.
    

4.  **Comprobación del número de argumentos**:
    
        if (argc == 3)
    
    Esta condición verifica si el número de argumentos es exactamente 3 (el nombre del programa y dos números).
    

5.  **Conversión de argumentos a enteros y comprobación de positividad**:
    
        if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
    
    Se convierten los argumentos de la línea de comandos a enteros usando `atoi` y se verifica si ambos son mayores que 0.
    

6.  **Bucle para encontrar el máximo común divisor (MCD)**:
    
        while (nbr1 != nbr2)
        {
            if (nbr1 > nbr2)
                nbr1 -= nbr2;
            else
                nbr2 -= nbr1;
        }
    
    Este bucle continúa ejecutándose hasta que `nbr1` y `nbr2` sean iguales. En cada iteración, se resta el menor del mayor. Este es el algoritmo de Euclides para encontrar el MCD.
    

7.  **Imprimir el resultado**:
    
        printf("%d", nbr1);
    
    Una vez que `nbr1` y `nbr2` son iguales, se imprime el valor de `nbr1`, que es el MCD.
    

8.  **Imprimir una nueva línea**:
    
        printf("\n");
    
    Esta línea imprime un carácter de nueva línea para formatear la salida.
    

9.  **Retorno de la función** `**main**`:
    
        return (0);
    
    La función `main` devuelve 0, indicando que el programa ha terminado correctamente.
    

* * *

print\_hex
----------

> Assignment name : print\_hex  
> Expected files : print\_hex.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a positive (or zero) number expressed in base 10,  
> and displays it in base 16 (lowercase letters) followed by a newline.  
>   
> If the number of parameters is not 1, the program displays a newline.  
>   
> Examples:  
>   
> $> ./print\_hex "10" | cat -e  
> a$  
> $> ./print\_hex "255" | cat -e  
> ff$  
> $> ./print\_hex "5156454" | cat -e  
> 4eae66$  
> $> ./print\_hex | cat -e  
> $  

💡

*   **Objetivo:** Escribe un programa que tome un número positivo (o cero) expresado en base 10 como entrada y lo muestre en base 16 (letras minúsculas) seguido de un salto de línea.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, el programa muestra un salto de línea.

    #include <unistd.h>
    
    int	ft_atoi(char *str)
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
    
    void	print_hex(int n)
    {
    	char hex_digits[] = "0123456789abcdef";
    
    	if (n >= 16)
    		print_hex(n / 16);
    	write(1, &hex_digits[n % 16], 1);
    }
    
    int	main(int argc, char **argv)
    {
    	if (argc == 2)
    		print_hex(ft_atoi(argv[1]));
    	write(1, "\n", 1);
    }

1.  **Incluir la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta línea incluye la biblioteca `unistd.h`, que contiene la declaración de la función `write`.
    

2.  **Declaración de la función** `**ft_atoi**`:
    
        int	ft_atoi(char *str)
    
    Esta línea declara una función llamada `ft_atoi` que toma un parámetro `str` de tipo `char *` (cadena de caracteres) y devuelve un valor de tipo `int`.
    

3.  **Inicialización de la variable** `**n**`:
    
        int n = 0;
    
    Aquí se inicializa una variable `n` de tipo `int` con el valor 0.
    

4.  **Bucle para convertir la cadena a entero**:
    
        while (*str != '\0')
        {
            n = n * 10;
            n = n + *str - '0';
            ++str;
        }
    
    Este bucle recorre cada carácter de la cadena `str` hasta que encuentra el carácter nulo (`'\0'`). En cada iteración, multiplica `n` por 10 y le suma el valor numérico del carácter actual (`*str - '0'`), luego avanza al siguiente carácter.
    

5.  **Retorno del valor convertido**:
    
        return (n);
    
    Una vez que se ha procesado toda la cadena, la función devuelve el valor entero resultante.
    

6.  **Declaración de la función** `**print_hex**`:
    
        void	print_hex(int n)
    
    Esta línea declara una función llamada `print_hex` que toma un parámetro `n` de tipo `int` y no devuelve ningún valor (`void`).
    

7.  **Declaración del array** `**hex_digits**`:
    
        char hex_digits[] = "0123456789abcdef";
    
    Aquí se declara un array de caracteres que contiene los dígitos hexadecimales del 0 al 15.
    

8.  **Condición para números mayores o iguales a 16**:
    
        if (n >= 16)
            print_hex(n / 16);
    
    Si `n` es mayor o igual a 16, la función se llama a sí misma recursivamente con el valor de `n` dividido por 16. Esto descompone el número en sus dígitos hexadecimales.
    

9.  **Escribir el dígito hexadecimal en la salida estándar**:
    
        write(1, &hex_digits[n % 16], 1);
    
    La función `write` escribe el carácter correspondiente al dígito hexadecimal (`hex_digits[n % 16]`) en la salida estándar (generalmente la pantalla). El `1` indica el descriptor de archivo para la salida estándar.
    

10.  **Función** `**main**`:
    
        int	main(int argc, char **argv)
    
    Esta es la función principal del programa. Toma dos parámetros: `argc`, que es el número de argumentos de la línea de comandos, y `argv`, que es una matriz de cadenas que contienen los argumentos.
    

11.  **Comprobación del número de argumentos**:
    
        if (argc == 2)
            print_hex(ft_atoi(argv[1]));
    
    Esta condición verifica si el número de argumentos es exactamente 2 (el nombre del programa y un número). Si es así, convierte el argumento a un entero usando `ft_atoi` y luego llama a `print_hex` para imprimirlo en formato hexadecimal.
    

12.  **Escribir un salto de línea**:
    
        write(1, "\n", 1);
    
    Esta línea escribe un carácter de nueva línea (`\n`) en la salida estándar.
    

* * *

rstr\_capitalizer
-----------------

> Assignment name : rstr\_capitalizer  
> Expected files : rstr\_capitalizer.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes one or more strings and, for each argument, puts  
> the last character that is a letter of each word in uppercase and the rest  
> in lowercase, then displays the result followed by a \\n.  
>   
> A word is a section of string delimited by spaces/tabs or the start/end of the  
> string. If a word has a single letter, it must be capitalized.  
>   
> A letter is a character in the set \[a-zA-Z\]  
>   
> If there are no parameters, display \\n.  
>   
> Examples:  
>   
> $> ./rstr\_capitalizer | cat -e  
> $  
> $> ./rstr\_capitalizer "a FiRSt LiTTlE TESt" | cat -e  
> A firsT littlE tesT$  
> $> ./rstr\_capitalizer "SecONd teST A LITtle BiT Moar comPLEX" " But... This iS not THAT COMPLEX" " Okay, this is the last 1239809147801 but not the least t" | cat -e  
> seconD tesT A littlE biT moaR compleX$  
> but... thiS iS noT thaT compleX$  
> okay, thiS iS thE lasT 1239809147801 buT noT thE leasT T$  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome una o más cadenas de texto como entrada y, para cada argumento, convierta la última letra de cada palabra en mayúscula y el resto en minúscula, mostrando el resultado seguido de un salto de línea.

*   **Definición de palabra:** Una palabra es una sección de la cadena delimitada por espacios, tabulaciones o el inicio/final de la cadena.

*   **Condiciones especiales:** Si una palabra tiene una sola letra, debe estar en mayúscula.

*   **Condiciones de error:** Si no se proporcionan argumentos, el programa muestra un salto de línea.

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

1.  **Incluir la biblioteca** `**unistd.h**`:
    
        #include <unistd.h>
    
    Esta línea incluye la biblioteca `unistd.h`, que contiene la declaración de la función `write`.
    

2.  **Declaración de la función** `**rstr_capitalizer**`:
    
        void    rstr_capitalizer(char *str)
    
    Esta línea declara una función llamada `rstr_capitalizer` que toma un parámetro `str` de tipo `char *` (cadena de caracteres) y no devuelve ningún valor (`void`).
    

3.  **Inicialización de la variable** `**i**`:
    
        int i = 0;
    
    Aquí se inicializa una variable `i` de tipo `int` con el valor 0.
    

4.  **Bucle para recorrer la cadena**:
    
        while (str[i])
    
    Este bucle recorre cada carácter de la cadena `str` hasta que encuentra el carácter nulo (`'\0'`).
    

5.  **Conversión de mayúsculas a minúsculas**:
    
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    
    Si el carácter actual es una letra mayúscula (entre ‘A’ y ‘Z’), se convierte a minúscula sumando 32 a su valor ASCII.
    

6.  **Conversión de minúsculas a mayúsculas al final de una palabra**:
    
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;
    
    Si el carácter actual es una letra minúscula (entre ‘a’ y ‘z’) y el siguiente carácter es un espacio, una tabulación o el final de la cadena, se convierte a mayúscula restando 32 a su valor ASCII.
    

7.  **Escribir el carácter en la salida estándar**:
    
        write(1, &str[i++], 1);
    
    La función `write` escribe el carácter actual en la salida estándar (generalmente la pantalla). El `1` indica el descriptor de archivo para la salida estándar. Luego, se incrementa `i` para pasar al siguiente carácter.
    

8.  **Función** `**main**`:
    
        int main(int argc, char **argv)
    
    Esta es la función principal del programa. Toma dos parámetros: `argc`, que es el número de argumentos de la línea de comandos, y `argv`, que es una matriz de cadenas que contienen los argumentos.
    

9.  **Comprobación del número de argumentos**:
    
        if (argc == 1)
            write(1, "\n", 1);
    
    Si no se pasan argumentos (solo el nombre del programa), se escribe un carácter de nueva línea (`\n`) en la salida estándar.
    

10.  **Procesamiento de los argumentos**:
    
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
    
    Si hay argumentos adicionales, se inicializa `i` a 1 y se recorre cada argumento. Para cada argumento, se llama a `rstr_capitalizer` para procesarlo y luego se escribe un carácter de nueva línea (`\n`). Se incrementa `i` para pasar al siguiente argumento.
    

11.  **Retorno de la función** `**main**`:
    
        return (0);
    
    La función `main` devuelve 0, indicando que el programa ha terminado correctamente.
    

* * *

str\_capitalizer
----------------

> Assignment name : str\_capitalizer  
> Expected files : str\_capitalizer.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes one or several strings and, for each argument,  
> capitalizes the first character of each word (If it's a letter, obviously),  
> puts the rest in lowercase, and displays the result on the standard output,  
> followed by a \\n.  
>   
> A "word" is defined as a part of a string delimited either by spaces/tabs, or  
> by the start/end of the string. If a word only has one letter, it must be  
> capitalized.  
>   
> If there are no arguments, the progam must display \\n.  
>   
> Example:  
>   
> $> ./str\_capitalizer | cat -e  
> $  
> $> ./str\_capitalizer "a FiRSt LiTTlE TESt" | cat -e  
> A First Little Test$  
> $> ./str\_capitalizer "\_\_SecONd teST A LITtle BiT Moar comPLEX" " But... This iS not THAT COMPLEX" " Okay, this is the last 1239809147801 but not the least t" | cat -e  
> \_\_second Test A Little Bit Moar Complex$  
> But... This Is Not That Complex$  
> Okay, This Is The Last 1239809147801 But Not The Least T$  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome una o más cadenas de texto como entrada y, para cada argumento, capitalice el primer carácter de cada palabra (si es una letra), el resto en minúscula y muestre el resultado seguido de un salto de línea.

*   **Definición de palabra:** Una palabra es una sección de la cadena delimitada por espacios, tabulaciones o el inicio/final de la cadena.

*   **Condiciones especiales:** Si una palabra tiene una sola letra, debe estar en mayúscula.

*   **Condiciones de error:** Si no se proporcionan argumentos, el programa muestra un salto de línea.

    #include <unistd.h>
    
    void	str_capitalizer(char *str)
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

**1\. Inclusión de la biblioteca**

    #include <unistd.h>

Esta línea incluye la biblioteca `unistd.h`, que proporciona acceso a la API del sistema operativo POSIX, incluyendo la función `write`.

**2\. Definición de la función** `**str_capitalizer**`

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

**a. Inicialización**

    int i = 0;

Se inicializa un índice `i` a 0 para recorrer la cadena.

**b. Capitalización del primer carácter**

    if (str[i] >= 'a' && 'z' >= str[i])
        str[i] -= 32;

Si el primer carácter es una letra minúscula, se convierte a mayúscula restando 32 (diferencia en ASCII entre mayúsculas y minúsculas).

**c. Escritura del primer carácter**

    write(1, &str[i], 1);

Se escribe el primer carácter en la salida estándar.

**d. Bucle para recorrer el resto de la cadena**

    while (str[++i])
    {
        if (str[i] >= 'A' && 'Z' >= str[i])
            str[i] += 32;
        if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
    }

*   **Conversión a minúsculas**: Si el carácter es una letra mayúscula, se convierte a minúscula sumando 32.

*   **Capitalización de palabras**: Si el carácter es una letra minúscula y el carácter anterior es un espacio o tabulación, se convierte a mayúscula.

*   **Escritura del carácter**: Se escribe el carácter en la salida estándar.

**3\. Función** `**main**`

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

**a. Verificación de argumentos**

    if (argc < 2)
        write(1, "\n", 1);

Si no hay argumentos, se escribe una nueva línea.

**b. Bucle para procesar cada argumento**

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

*   **Inicialización**: Se inicializa `i` a 1 para saltar el nombre del programa.

*   **Procesamiento**: Para cada argumento, se llama a `str_capitalizer` y se escribe una nueva línea.

Resumen

Este programa toma una serie de cadenas como argumentos y capitaliza la primera letra de cada palabra, convirtiendo el resto de las letras a minúsculas. Luego, imprime cada cadena modificada en una nueva línea.

* * *

tab\_mult
---------

> Assignment name : tab\_mult  
> Expected files : tab\_mult.c  
> Allowed functions: write  
> \--------------------------------------------------------------------------------  
>   
> Write a program that displays a number's multiplication table.  
>   
> The parameter will always be a strictly positive number that fits in an int,  
> and said number times 9 will also fit in an int.  
>   
> If there are no parameters, the program displays \\n.  
>   
> Examples:  
>   
> $>./tab\_mult 9  
> 1 x 9 = 9  
> 2 x 9 = 18  
> 3 x 9 = 27  
> 4 x 9 = 36  
> 5 x 9 = 45  
> 6 x 9 = 54  
> 7 x 9 = 63  
> 8 x 9 = 72  
> 9 x 9 = 81  
> $>./tab\_mult 19  
> 1 x 19 = 19  
> 2 x 19 = 38  
> 3 x 19 = 57  
> 4 x 19 = 76  
> 5 x 19 = 95  
> 6 x 19 = 114  
> 7 x 19 = 133  
> 8 x 19 = 152  
> 9 x 19 = 171  
> $>  
> $>./tab\_mult | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa que muestre la tabla de multiplicación de un número dado.

*   **Parámetro:** El parámetro debe ser un número entero estrictamente positivo que quepa en un tipo `int`, y su producto con 9 también debe caber en un `int`.

*   **Salida:** El programa debe mostrar la tabla de multiplicación del número dado, con cada línea en el formato "n x número = resultado".

*   **Condiciones de error:** Si no se proporciona ningún argumento, el programa muestra un salto de línea.

    #include <unistd.h>
    
    int	ft_atoi(char *str)
    {
    	int	result;
    	int	sign;
    
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
    
    void	ft_putchar(char c)
    {
    	write(1, &c, 1);
    }
    
    void	ft_putnbr(int nb)
    {
    	if (nb / 10 > 0)
    		ft_putnbr(nb / 10);
    	ft_putchar(nb % 10 + '0');
    }
    
    int	main(int argc, char *argv[])
    {
    	int	i;
    	int	nbr;
    
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

**1\. Inclusión de la biblioteca**

    #include <unistd.h>

Esta línea incluye la biblioteca `unistd.h`, que proporciona acceso a la API del sistema operativo POSIX, incluyendo la función `write`.

**2\. Definición de la función** `**ft_atoi**`

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

**a. Inicialización**

    int result;
    int sign;
    
    result = 0;
    sign = 1;

Se inicializan `result` a 0 y `sign` a 1. `result` almacenará el número convertido y `sign` manejará el signo del número.

**b. Saltar espacios en blanco**

    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

Se omiten los espacios en blanco y caracteres de control (tabulación, nueva línea, etc.).

**c. Manejo del signo**

    if (*str == '+')
        str++;

Si hay un signo `+`, se avanza al siguiente carácter.

**d. Conversión de caracteres a números**

    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }

Se convierten los caracteres numéricos a su valor entero correspondiente y se acumulan en `result`.

**e. Devolver el resultado**

    return (sign * result);

Se devuelve el resultado final, multiplicado por `sign`.

**3\. Definición de la función** `**ft_putchar**`

    void ft_putchar(char c)
    {
        write(1, &c, 1);
    }

Esta función escribe un solo carácter `c` en la salida estándar.

**4\. Definición de la función** `**ft_putnbr**`

    void ft_putnbr(int nb)
    {
        if (nb / 10 > 0)
            ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    }

**a. Llamada recursiva**

    if (nb / 10 > 0)
        ft_putnbr(nb / 10);

Si `nb` es mayor que 10, se llama recursivamente a `ft_putnbr` con `nb / 10`.

**b. Escritura del dígito**

    ft_putchar(nb % 10 + '0');

Se escribe el último dígito de `nb`.

**5\. Función** `**main**`

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

**a. Verificación de argumentos**

    if (argc != 2)
        write(1, "\n", 1);

Si no hay exactamente un argumento, se escribe una nueva línea.

**b. Conversión del argumento a entero**

    nbr = ft_atoi(argv[1]);

Se convierte el argumento a un número entero usando `ft_atoi`.

**c. Bucle para imprimir la tabla de multiplicar**

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

*   **Inicialización**: Se inicializa `i` a 1.

*   **Impresión**: Para cada valor de `i` de 1 a 9, se imprime la multiplicación de `i` por `nbr`.

Resumen

Este programa toma un número como argumento y imprime su tabla de multiplicar del 1 al 9. Utiliza funciones auxiliares para convertir una cadena a entero (`ft_atoi`), escribir caracteres (`ft_putchar`) y escribir números (`ft_putnbr`).

* * *

Level 4
=======

flood\_fill
-----------

> Assignment name : flood\_fill  
> Expected files : \*.c, \*.h  
> Allowed functions: -  
> \--------------------------------------------------------------------------------  
>   
> Write a function that takes a char \*\* as a 2-dimensional array of char, a  
> t\_point as the dimensions of this array and a t\_point as the starting point.  
>   
> Starting from the given 'begin' t\_point, this function fills an entire zone  
> by replacing characters inside with the character 'F'. A zone is an group of  
> the same character delimitated horizontally and vertically by other characters  
> or the array boundry.  
>   
> The flood\_fill function won't fill diagonally.  
>   
> The flood\_fill function will be prototyped like this:  
> void flood\_fill(char \*\*tab, t\_point size, t\_point begin);  
>   
> The t\_point structure is prototyped like this:  
>   
> typedef struct s\_point  
> {  
> int x;  
> int y;  
> } t\_point;  
>   
> Example:  
>   
> $> cat test.c  
> #include <stdlib.h>  
> #include <stdio.h>  
> #include "flood\_fill.h"  
>   
> char\*\* make\_area(char\*\* zone, t\_point size)  
> {  
> char\*\* new;  
>   
> new = malloc(sizeof(char\*) \* size.y);  
> for (int i = 0; i < size.y; ++i)  
> {  
> new\[i\] = malloc(size.x + 1);  
> for (int j = 0; j < size.x; ++j)  
> new\[i\]\[j\] = zone\[i\]\[j\];  
> new\[i\]\[size.x\] = '\\0';  
> }  
>   
> return new;  
> }  
>   
> int main(void)  
> {  
> t\_point size = {8, 5};  
> char \*zone\[\] = {  
> "11111111",  
> "10001001",  
> "10010001",  
> "10110001",  
> "11100001",  
> };  
>   
> char\*\* area = make\_area(zone, size);  
> for (int i = 0; i < size.y; ++i)  
> printf("%s\\n", area\[i\]);  
> printf("\\n");  
>   
> t\_point begin = {7, 4};  
> flood\_fill(area, size, begin);  
> for (int i = 0; i < size.y; ++i)  
> printf("%s\\n", area\[i\]);  
> return (0);  
> }  
>   
> $> gcc flood\_fill.c test.c -o test; ./test  
> 11111111  
> 10001001  
> 10010001  
> 10110001  
> 11100001  
>   
> FFFFFFFF  
> F000F00F  
> F00F000F  
> F0FF000F  
> FFF0000F  
> $>  

💡

*   **Objetivo:** Escribe una función que tome una matriz bidimensional de caracteres, las dimensiones de la matriz y un punto de partida como entrada. A partir del punto de partida, la función debe rellenar una zona completa de la matriz con el carácter 'F'. Una zona se define como un grupo de caracteres iguales delimitados horizontal y verticalmente por otros caracteres o los límites de la matriz.

*   **Restricciones:** La función `flood_fill` no debe rellenar en diagonal.

    #ifndef T_POINT_FLOOD_FILL
    # define T_POINT_FLOOD_FILL
    
    typedef struct 	s_point {
        int 		x;				// x : Width  | x-axis
        int 		y;				// y : Height | y-axis
    } 				t_point;
    
    #endif

    typedef struct	s_point
    {
    	int x;
    	int y;
    } t_point;
    
    void	fill(char **tab, t_point size, t_point cur, char to_fill)
    {
    	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
    		return;
    	tab[cur.y][cur.x] = 'F';
    	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
    	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
    	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
    	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
    }
    
    void	flood_fill(char **tab, t_point size, t_point begin)
    {
    	fill(tab, size, begin, tab[begin.y][begin.x]);
    }

**Definición de la estructura** `**t_point**`

    typedef struct s_point
    {
    	int x;
    	int y;
    } t_point;

Esta parte del código define una estructura llamada `t_point` que tiene dos campos: `x` e `y`, ambos de tipo `int`. Esta estructura se utiliza para representar un punto en una coordenada bidimensional.

**Función** `**fill**`

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

Esta función realiza una operación de “flood fill” (relleno por inundación) en una tabla bidimensional `tab`.

1.  **Condiciones de borde**:
    
        if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
            return;
    
    Aquí se verifica si el punto actual `cur` está fuera de los límites de la tabla o si el carácter en la posición actual no es igual a `to_fill`. Si alguna de estas condiciones se cumple, la función retorna sin hacer nada.
    

2.  **Relleno del punto actual**:
    
        tab[cur.y][cur.x] = 'F';
    
    Si el punto está dentro de los límites y el carácter coincide, se rellena con ‘F’.
    

3.  **Llamadas recursivas**:
    
        fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
        fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
        fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
        fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
    
    La función se llama a sí misma para los puntos adyacentes (izquierda, derecha, arriba y abajo).
    

**Función** `**flood_fill**`

    void flood_fill(char **tab, t_point size, t_point begin)
    {
    	fill(tab, size, begin, tab[begin.y][begin.x]);
    }

Esta función es la interfaz principal para iniciar el proceso de “flood fill”.

1.  **Llamada a** `**fill**`:  
    Se llama a la función  
    `fill` con el punto inicial `begin` y el carácter que se encuentra en esa posición.
    
        fill(tab, size, begin, tab[begin.y][begin.x]);
    

* * *

fprime
------

> Assignment name : fprime  
> Expected files : fprime.c  
> Allowed functions: printf, atoi  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a positive int and displays its prime factors on the  
> standard output, followed by a newline.  
>   
> Factors must be displayed in ascending order and separated by '\*', so that  
> the expression in the output gives the right result.  
>   
> If the number of parameters is not 1, simply display a newline.  
>   
> The input, when there is one, will be valid.  
>   
> Examples:  
>   
> $> ./fprime 225225 | cat -e  
> 3\*3\*5\*5\*7\*11\*13$  
> $> ./fprime 8333325 | cat -e  
> 3\*3\*5\*5\*7\*11\*13\*37$  
> $> ./fprime 9539 | cat -e  
> 9539$  
> $> ./fprime 804577 | cat -e  
> 804577$  
> $> ./fprime 42 | cat -e  
> 2\*3\*7$  
> $> ./fprime 1 | cat -e  
> 1$  
> $> ./fprime | cat -e  
> $  
> $> ./fprime 42 21 | cat -e  
> $  

💡

*   **Objetivo:** Escribe un programa que tome un número entero positivo como entrada y muestre sus factores primos en la salida estándar, separados por asteriscos y en orden ascendente.

*   **Salida:** La salida debe ser una expresión matemática que represente la descomposición en factores primos del número.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, el programa muestra un salto de línea.

    #include <stdio.h>
    #include <stdlib.h>
    
    int	main(int argc, char *argv[])
    {
    	int	i;
    	int	number;
    
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

**Inclusión de bibliotecas**

    #include <stdio.h>#include <stdlib.h>

Estas líneas incluyen las bibliotecas estándar de C para entrada/salida (`stdio.h`) y funciones de utilidad (`stdlib.h`).

**Función principal** `**main**`

    int main(int argc, char *argv[])
    {
    	int i;
    	int number;

La función `main` es el punto de entrada del programa. Recibe dos parámetros: `argc` (el número de argumentos de la línea de comandos) y `argv` (una matriz de cadenas que contiene los argumentos).

**Verificación del número de argumentos**

    	if (argc == 2)
    	{
    		i = 1;
    		number = atoi(argv[1]);

Aquí se verifica si se ha pasado exactamente un argumento (además del nombre del programa). Si es así, se inicializa `i` a 1 y `number` se convierte del argumento de cadena a un entero usando `atoi`.

**Caso especial para el número 1**

    		if (number == 1)
    			printf("1");

Si el número es 1, se imprime “1”.

**Bucle** `**while**` **para descomposición en factores primos**

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

Este bucle descompone el número en sus factores primos:

1.  **Incremento de** `**i**` **y verificación de divisibilidad**:
    
        while (number >= ++i)
        {
            if (number % i == 0)
            {
    
    Se incrementa `i` y se verifica si `number` es divisible por `i`.
    

2.  **Impresión del factor y ajuste del número**:
    
            printf("%d", i);
            if (number == i)
         	   break ;
            printf("*");
            number /= i;
            i = 1;
    
    Si `number` es divisible por `i`, se imprime `i`. Si `number` es igual a `i`, se rompe el bucle. De lo contrario, se imprime un asterisco, se divide `number` por `i` y se reinicia `i` a 1 para comenzar de nuevo.
    

**Impresión de nueva línea y retorno**

    	printf("\n");
    	return (0);
    }

Finalmente, se imprime una nueva línea y la función `main` retorna 0, indicando que el programa terminó correctamente.

* * *

ft\_itoa
--------

> Assignment name : ft\_itoa  
> Expected files : ft\_itoa.c  
> Allowed functions: malloc  
> \--------------------------------------------------------------------------------  
>   
> Write a function that takes an int and converts it to a null-terminated string.  
> The function returns the result in a char array that you must allocate.  
>   
> Your function must be declared as follows:  
>   
> char \*ft\_itoa(int nbr);  

💡

*   **Objetivo:** Escribe una función que tome un número entero como entrada y lo convierta en una cadena de caracteres terminada en nulo.

*   **Retorno:** La función debe devolver un puntero a la cadena de caracteres recién creada, que debe ser asignada dinámicamente usando `malloc`.

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

**Inclusión de bibliotecas**

    #include <stdio.h>#include <stdlib.h>

Estas líneas incluyen las bibliotecas estándar de C para entrada/salida (`stdio.h`) y funciones de utilidad (`stdlib.h`).

**Función** `**ft_itoa**`

    char *ft_itoa(int nbr)
    {

Esta función convierte un número entero (`int`) en una cadena de caracteres (`char *`).

**Caso especial para el valor mínimo de un entero**

    	if(nbr == -2147483648)
    		return("-2147483648\0");

Si el número es el valor mínimo de un entero (`-2147483648`), se devuelve directamente esta cadena, ya que no se puede convertir a positivo debido a los límites del tipo `int`.

**Inicialización de variables**

    	int n = nbr;
    	int len = 0;
    	if (nbr <= 0)
    		len++;

Se inicializa `n` con el valor de `nbr` y `len` con 0. Si `nbr` es menor o igual a 0, se incrementa `len` en 1 para contar el signo negativo o el cero.

**Cálculo de la longitud de la cadena**

    	while (n)
    	{
    		n /= 10;
    		len++;
    	}

Este bucle divide `n` por 10 repetidamente para contar cuántos dígitos tiene el número, incrementando `len` en cada iteración.

**Asignación de memoria para la cadena resultante**

    	char *result = (char *)malloc(sizeof(char) * (len + 1));
    	if (result == NULL)
    		return NULL;
    	result[len] = '\0';

Se asigna memoria para la cadena resultante, incluyendo espacio para el carácter nulo (`\0`) al final. Si la asignación falla, se retorna `NULL`. Luego, se establece el carácter nulo al final de la cadena.

**Manejo del caso en que** `**nbr**` **es 0**

    	if (nbr == 0)
    	{
    		result[0] = '0';
    		return(result);
    	}

Si `nbr` es 0, se asigna ‘0’ a la primera posición de la cadena y se retorna.

**Manejo de números negativos**

    	if (nbr < 0)
    	{
    		result[0] = '-';
    		nbr = -nbr;
    	}

Si `nbr` es negativo, se coloca un signo ‘-’ en la primera posición de la cadena y se convierte `nbr` a positivo.

**Conversión del número a cadena**

    	while (nbr)
    	{
    		result[--len] = nbr % 10 + '0';
    		nbr /= 10;
    	}
    	return result;
    }

Este bucle convierte cada dígito del número a su carácter correspondiente y lo coloca en la posición correcta de la cadena, comenzando desde el final. Luego, se retorna la cadena resultante.

* * *

ft\_list\_forearch
------------------

> Assignment name : ft\_list\_foreach  
> Expected files : ft\_list\_foreach.c, ft\_list.h  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write a function that takes a list and a function pointer, and applies this  
> function to each element of the list.  
>   
> It must be declared as follows:  
>   
> void ft\_list\_foreach(t\_list \*begin\_list, void (\*f)(void \*));  
>   
> The function pointed to by f will be used as follows:  
>   
> (\*f)(list\_ptr->data);  
>   
> You must use the following structure, and turn it in as a file called  
> ft\_list.h:  
>   
> typedef struct s\_list  
> {  
> struct s\_list \*next;  
> void \*data;  
> } t\_list;  

💡

*   La función `ft_list_foreach` recorre una lista enlazada y aplica una función dada a cada elemento de la lista.

    typedef struct    s_list
    {
        struct s_list *next;
        void          *data;
    }                 t_list;

    #include "ft_list.h"
    
    void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
    {
        while (begin_list)
        {
            (*f)(begin_list->data);
            begin_list = begin_list->next;
        }
    }

**Inclusión del archivo de cabecera**

    #include "ft_list.h"

Esta línea incluye el archivo de cabecera `ft_list.h`, que probablemente contiene la definición de la estructura `t_list` y otras funciones relacionadas con listas enlazadas.

**Función** `**ft_list_foreach**`

    void ft_list_foreach(t_list *begin_list, void (*f)(void *))
    {

Esta función aplica una función dada (`f`) a cada elemento de una lista enlazada. Recibe dos parámetros:

*   `begin_list`: un puntero al primer elemento de la lista.

*   `f`: un puntero a una función que toma un `void *` como argumento y no retorna nada.

**Bucle** `**while**` **para recorrer la lista**

        while (begin_list)
        {

Este bucle `while` recorre la lista enlazada. Continúa mientras `begin_list` no sea `NULL`.

**Aplicación de la función** `**f**` **a cada elemento**

            (*f)(begin_list->data);

Dentro del bucle, se aplica la función `f` al dato contenido en el nodo actual de la lista (`begin_list->data`).

**Avance al siguiente nodo**

            begin_list = begin_list->next;
        }
    }

Después de aplicar la función, el puntero `begin_list` se actualiza para apuntar al siguiente nodo de la lista (`begin_list->next`). El bucle continúa hasta que `begin_list` sea `NULL`, es decir, hasta que se haya procesado el último nodo de la lista.

Resumen

La función `ft_list_foreach` recorre toda la lista enlazada y aplica la función `f` a los datos de cada nodo. Es una forma común de iterar sobre una lista enlazada y realizar una operación en cada uno de sus elementos.

* * *

ft\_list\_remove\_if
--------------------

> Assignment name : ft\_list\_remove\_if  
> Expected files : ft\_list\_remove\_if.c  
> Allowed functions: free  
> \--------------------------------------------------------------------------------  
>   
> Write a function called ft\_list\_remove\_if that removes from the  
> passed list any element the data of which is "equal" to the reference data.  
>   
> It will be declared as follows :  
>   
> void ft\_list\_remove\_if(t\_list \*\*begin\_list, void \*data\_ref, int (\*cmp)());  
>   
> cmp takes two void\* and returns 0 when both parameters are equal.  
>   
> You have to use the ft\_list.h file, which will contain:  
>   
> $>cat ft\_list.h  
> typedef struct s\_list  
> {  
> struct s\_list \*next;  
> void \*data;  
> } t\_list;  
> $>  

💡

*   **Objetivo:** Escribe una función llamada `ft_list_remove_if` que elimina de la lista pasada cualquier elemento cuyo dato sea "igual" al dato de referencia.

    typedef struct      s_list
    {
        struct s_list   *next;
        void            *data;
    }                   t_list;

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

**Inclusión de bibliotecas**

    #include <stdlib.h>
    #include "ft_list.h"

Estas líneas incluyen las bibliotecas estándar de C para funciones de utilidad (`stdlib.h`) y el archivo de cabecera `ft_list.h`, que probablemente contiene la definición de la estructura `t_list` y otras funciones relacionadas con listas enlazadas.

**Función** `**ft_list_remove_if**`

    void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
    {

Esta función elimina los elementos de una lista enlazada que coinciden con un valor de referencia (`data_ref`). Recibe tres parámetros:

*   `begin_list`: un puntero al puntero del primer elemento de la lista.

*   `data_ref`: un puntero al dato de referencia con el que se compararán los elementos de la lista.

*   `cmp`: un puntero a una función de comparación que toma dos `void *` y retorna un `int`.

**Verificación de punteros nulos**

    	if (begin_list == NULL || *begin_list == NULL)
    		return

Si `begin_list` o el primer elemento de la lista (`*begin_list`) es `NULL`, la función retorna sin hacer nada.

**Inicialización del puntero** `**cur**`

    	t_list *cur = *begin_list;

Se inicializa `cur` con el primer elemento de la lista.

**Comparación y eliminación del nodo**

    	if (cmp(cur->data, data_ref) == 0)
    	{
    		*begin_list = cur->next;
    		free(cur);
    		ft_list_remove_if(begin_list, data_ref, cmp);
    	}

Si el dato del nodo actual (`cur->data`) es igual a `data_ref` (según la función de comparación `cmp`), se actualiza `begin_list` para que apunte al siguiente nodo (`cur->next`), se libera la memoria del nodo actual (`free(cur)`) y se llama recursivamente a `ft_list_remove_if` para continuar con el siguiente nodo.

**Manejo del caso en que no hay coincidencia**

    	else // if there is a no else, you cant pass the Moulinette, tryed 2023.09.08
    	{
    		cur = *begin_list;
    		ft_list_remove_if(&cur->next, data_ref, cmp);
    	}
    }

Si el dato del nodo actual no coincide con `data_ref`, se llama recursivamente a `ft_list_remove_if` con el siguiente nodo (`cur->next`). La línea de comentario indica que es necesario tener esta rama `else` para pasar una prueba específica (Moulinette).

Resumen

La función `ft_list_remove_if` recorre la lista enlazada y elimina los nodos cuyos datos coinciden con `data_ref`, utilizando una función de comparación `cmp`. La eliminación se realiza de manera recursiva.

* * *

ft\_split
---------

> Assignment name : ft\_split  
> Expected files : ft\_split.c  
> Allowed functions: malloc  
> \--------------------------------------------------------------------------------  
>   
> Write a function that takes a string, splits it into words, and returns them as  
> a NULL-terminated array of strings.  
>   
> A "word" is defined as a part of a string delimited either by spaces/tabs/new  
> lines, or by the start/end of the string.  
>   
> Your function must be declared as follows:  
>   
> char \*\*ft\_split(char \*str);  

💡

*   **Objetivo:** Escribe una función que tome una cadena de texto como entrada, la divida en palabras y devuelva un arreglo de cadenas terminadas en nulo.

*   **Definición de palabra:** Una palabra es una sección de la cadena delimitada por espacios, tabulaciones, saltos de línea o el inicio/final de la cadena.

*   **Retorno:** La función debe devolver un puntero a un arreglo de cadenas, donde cada cadena representa una palabra del texto original. El arreglo debe estar terminado en nulo.

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
    
    char	**ft_split(char *str)
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

**Función** `**ft_strncpy**`

    char *ft_strncpy(char *s1, char *s2, int n)
    {
    	int i = -1;
    
    	while (++i < n && s2[i])
    		s1[i] = s2[i];
    	s1[i] = '\0';
    	return (s1);
    }

1.  **Declaración de la función**: `ft_strncpy` copia hasta `n` caracteres de la cadena `s2` a la cadena `s1`.

2.  **Inicialización del índice**: `int i = -1;` inicializa el índice `i` a -1.

3.  **Bucle** `**while**`: `while (++i < n && s2[i])` incrementa `i` y copia caracteres de `s2` a `s1` mientras `i` sea menor que `n` y `s2[i]` no sea nulo.

4.  **Asignación de caracteres**: `s1[i] = s2[i];` copia el carácter de `s2` a `s1`.

5.  **Terminación de la cadena**: `s1[i] = '\0';` añade un carácter nulo al final de `s1` para asegurar que es una cadena válida.

6.  **Retorno**: `return (s1);` devuelve la cadena `s1`.

**Función** `**ft_split**`

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

1.  **Declaración de la función**: `ft_split` divide una cadena `str` en palabras separadas por espacios, tabulaciones o saltos de línea.

2.  **Inicialización de variables**: `int i = 0, j = 0, k = 0, wc = 0;` inicializa los índices y el contador de palabras `wc`.

3.  **Contar palabras**:
    
    *   **Bucle externo**: `while (str[i])` recorre la cadena `str`.
    
    *   **Saltar espacios**: `while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) i++;` avanza el índice `i` mientras encuentre espacios, tabulaciones o saltos de línea.
    
    *   **Contar palabras**: `if (str[i]) wc++;` incrementa el contador de palabras si encuentra una palabra.
    
    *   **Saltar palabra**: `while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')) i++;` avanza el índice `i` hasta el final de la palabra.

4.  **Asignar memoria**: `char **out = (char **)malloc(sizeof(char *) * (wc + 1));` asigna memoria para el array de palabras.

5.  **Dividir palabras**:
    
    *   **Reiniciar índice**: `i = 0;` reinicia el índice `i`.
    
    *   **Bucle externo**: `while (str[i])` recorre la cadena `str` nuevamente.
    
    *   **Saltar espacios**: `while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) i++;` avanza el índice `i` mientras encuentre espacios, tabulaciones o saltos de línea.
    
    *   **Guardar inicio de palabra**: `j = i;` guarda el inicio de la palabra.
    
    *   **Saltar palabra**: `while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')) i++;` avanza el índice `i` hasta el final de la palabra.
    
    *   **Copiar palabra**: `if (i > j)` copia la palabra en el array `out` usando `ft_strncpy`.

6.  **Terminar array**: `out[k] = NULL;` añade un puntero nulo al final del array de palabras.

7.  **Retorno**: `return (out);` devuelve el array de palabras.

* * *

rev\_wstr
---------

> Assignment name : rev\_wstr  
> Expected files : rev\_wstr.c  
> Allowed functions: write, malloc, free  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a string as a parameter, and prints its words in  
> reverse order.  
>   
> A "word" is a part of the string bounded by spaces and/or tabs, or the  
> begin/end of the string.  
>   
> If the number of parameters is different from 1, the program will display  
> '\\n'.  
>   
> In the parameters that are going to be tested, there won't be any "additional"  
> spaces (meaning that there won't be additionnal spaces at the beginning or at  
> the end of the string, and words will always be separated by exactly one space).  
>   
> Examples:  
>   
> $> ./rev\_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e  
> ironic? it Isn't gatherings. love I But people! hate You$  
> $>./rev\_wstr "abcdefghijklm"  
> abcdefghijklm  
> $> ./rev\_wstr "Wingardium Leviosa" | cat -e  
> Leviosa Wingardium$  
> $> ./rev\_wstr | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto como entrada e imprima sus palabras en orden inverso.

*   **Definición de palabra:** Una palabra es una parte de la cadena delimitada por espacios, tabulaciones o el inicio/final de la cadena.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, el programa muestra un salto de línea.

*   **Restricciones:** Las cadenas de entrada no tendrán espacios adicionales al principio o al final, y las palabras estarán separadas por exactamente un espacio.

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

1.  **Incluir la biblioteca** `**unistd.h**`: Esta biblioteca proporciona acceso a la función `write`, que se usa para escribir datos en la salida estándar.

2.  **Declaración de la función** `**main**`: La función principal toma dos argumentos: `argc` (número de argumentos) y `argv` (array de argumentos).

3.  **Declaración de variables**:
    
    *   `int start;` y `int end;` para marcar el inicio y el final de cada palabra.
    
    *   `int i = 0;` para recorrer la cadena de caracteres.

4.  **Comprobación del número de argumentos**: `if(argc == 2)` verifica que se haya pasado exactamente un argumento adicional al programa.

5.  **Encontrar la longitud de la cadena**:
    *   `while(argv[1][i] != '\0') i++;` recorre la cadena hasta encontrar el carácter nulo (`\0`), incrementando `i` para obtener la longitud de la cadena.

6.  **Procesar la cadena desde el final**:
    
    *   `while(i >= 0)` recorre la cadena hacia atrás.
    
    *   `while(argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t') i--;` salta los espacios en blanco y tabulaciones.
    
    *   `end = i;` marca el final de una palabra.
    
    *   `while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t') i--;` encuentra el inicio de la palabra.
    
    *   `start = i + 1;` ajusta el inicio de la palabra.

7.  **Imprimir la palabra**:
    
    *   `int flag; flag = start;` guarda el inicio de la palabra en `flag`.
    
    *   `while(start <= end)` recorre la palabra desde `start` hasta `end`.
    
    *   `write(1, &argv[1][start], 1);` escribe cada carácter de la palabra en la salida estándar.
    
    *   `start++;` avanza al siguiente carácter.

8.  **Imprimir un espacio entre palabras**:
    *   `if (flag != 0) write(1, " ", 1);` imprime un espacio si no es la primera palabra.

9.  **Imprimir una nueva línea**: `write(1, "\n", 1);` imprime una nueva línea al final.

Este código invierte las palabras de una cadena pasada como argumento al programa y las imprime en orden inverso.

* * *

rostring
--------

> Assignment name : rostring  
> Expected files : rostring.c  
> Allowed functions: write, malloc, free  
> \--------------------------------------------------------------------------------  
>   
> Write a program that takes a string and displays this string after rotating it  
> one word to the left.  
>   
> Thus, the first word becomes the last, and others stay in the same order.  
>   
> A "word" is defined as a part of a string delimited either by spaces/tabs, or  
> by the start/end of the string.  
>   
> Words will be separated by only one space in the output.  
>   
> If there's less than one argument, the program displays \\n.  
>   
> Example:  
>   
> $>./rostring "abc " | cat -e  
> abc$  
> $>  
> $>./rostring "Que la lumiere soit et la lumiere fut"  
> la lumiere soit et la lumiere fut Que  
> $>  
> $>./rostring " AkjhZ zLKIJz , 23y"  
> zLKIJz , 23y AkjhZ  
> $>  
> $>./rostring "first" "2" "11000000"  
> first  
> $>  
> $>./rostring | cat -e  
> $  
> $>  

💡

*   **Objetivo:** Escribe un programa que tome una cadena de texto como entrada y la muestre después de rotarla una palabra hacia la izquierda. Esto significa que la primera palabra se convierte en la última, y las demás permanecen en el mismo orden.

*   **Definición de palabra:** Una palabra es una sección de la cadena delimitada por espacios, tabulaciones o el inicio/final de la cadena.

*   **Salida:** Las palabras se separarán por exactamente un espacio en la salida.

*   **Condiciones de error:** Si no se proporciona exactamente un argumento, el programa muestra un salto de línea.

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

1.  **Incluir la biblioteca** `**unistd.h**`: Esta biblioteca proporciona acceso a la función `write`, que se usa para escribir datos en la salida estándar.

2.  **Declaración de la función** `**write_word**`:
    
    *   **Parámetros**: `char *start` y `char *end` son punteros que indican el inicio y el final de la palabra a escribir.
    
    *   **Bucle** `**while**`: `while (start < end)` recorre los caracteres desde `start` hasta `end`.
    
    *   **Escribir carácter**: `write(1, start, 1);` escribe el carácter apuntado por `start` en la salida estándar.
    
    *   **Incrementar puntero**: `start++;` avanza al siguiente carácter.

3.  **Declaración de la función** `**main**`:
    *   **Parámetros**: `int argc` (número de argumentos) y `char **argv` (array de argumentos).

4.  **Declaración de variables**:
    
    *   `char *str;` para almacenar la cadena de entrada.
    
    *   `char *first_word_start;` y `char *first_word_end;` para marcar el inicio y el final de la primera palabra.

5.  **Comprobación del número de argumentos**: `if (argc > 1)` verifica que se haya pasado al menos un argumento adicional al programa.

6.  **Procesar la cadena de entrada**:
    
    *   **Eliminar espacios iniciales**: `while (*str == ' ' || *str == '\t') str++;` avanza el puntero `str` mientras encuentre espacios o tabulaciones.
    
    *   **Marcar inicio de la primera palabra**: `first_word_start = str;`.
    
    *   **Encontrar el final de la primera palabra**: `while (*str && *str != ' ' && *str != '\t') str++;`.
    
    *   **Marcar final de la primera palabra**: `first_word_end = str;`.
    
    *   **Eliminar espacios entre palabras**: `while (*str == ' ' || *str == '\t') str++;`.

7.  **Imprimir palabras restantes**:
    
    *   **Bucle** `**while**`: `while (*str)` recorre la cadena de entrada.
    
    *   **Eliminar espacios**: `if (*str == ' ' || *str == '\t')` elimina espacios entre palabras.
    
    *   **Escribir espacio**: `if (*str) write(1, " ", 1);` escribe un espacio si hay más palabras.
    
    *   **Escribir carácter**: `else write(1, str, 1);` escribe el carácter actual.
    
    *   **Incrementar puntero**: `str++;`.

8.  **Escribir la primera palabra al final**: `write_word(first_word_start, first_word_end);`.

9.  **Imprimir una nueva línea**: `write(1, "\n", 1);`.

Este código toma una cadena de entrada, mueve la primera palabra al final y la imprime, separando las palabras por espacios.

* * *

sort\_in\_tab
-------------

> Assignment name : sort\_int\_tab  
> Expected files : sort\_int\_tab.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write the following function:  
>   
> void sort\_int\_tab(int \*tab, unsigned int size);  
>   
> It must sort (in-place) the 'tab' int array, that contains exactly 'size'  
> members, in ascending order.  
>   
> Doubles must be preserved.  
>   
> Input is always coherent.  

💡

~La tarea consiste en crear una función que ordene un arreglo de enteros en orden ascendente utilizando el algoritmo de ordenación por inserción, preservando los elementos duplicados.

    void	sort_int_tab(int *tab, unsigned int size)
    {
    	unsigned int	i = 0;
    	int	temp;
    
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

1.  **Declaración de la función** `**sort_int_tab**`:
    *   **Parámetros**: `int *tab` es un puntero a un array de enteros que se va a ordenar, y `unsigned int size` es el tamaño del array.

2.  **Inicialización de variables**:
    
    *   `unsigned int i = 0;` inicializa el índice `i` a 0.
    
    *   `int temp;` declara una variable temporal `temp` para intercambiar valores.

3.  **Bucle** `**while**` **principal**:
    *   `while (i < (size - 1))` recorre el array hasta el penúltimo elemento.

4.  **Comparación de elementos**:
    *   `if (tab[i] > tab[i + 1])` verifica si el elemento actual es mayor que el siguiente.

5.  **Intercambio de elementos**:
    
    *   `temp = tab[i];` guarda el valor del elemento actual en `temp`.
    
    *   `tab[i] = tab[i + 1];` asigna el valor del siguiente elemento al elemento actual.
    
    *   `tab[i + 1] = temp;` asigna el valor guardado en `temp` al siguiente elemento.
    
    *   `i = 0;` reinicia el índice `i` a 0 para volver a verificar desde el principio.

6.  **Incremento del índice**:
    *   `else i++;` si no se realizó un intercambio, incrementa el índice `i` para pasar al siguiente par de elementos.

Resumen

Este código implementa una versión simple del algoritmo de ordenación de burbuja (bubble sort). La función `sort_int_tab` ordena un array de enteros en orden ascendente. Recorre el array comparando pares de elementos adyacentes e intercambiándolos si están en el orden incorrecto. Si se realiza un intercambio, el índice `i` se reinicia a 0 para volver a verificar desde el principio, asegurando que el array esté completamente ordenado al final.

* * *

sort\_list
----------

> Assignment name : sort\_list  
> Expected files : sort\_list.c  
> Allowed functions:  
> \--------------------------------------------------------------------------------  
>   
> Write the following functions:  
>   
> t\_list \*sort\_list(t\_list\* lst, int (\*cmp)(int, int));  
>   
> This function must sort the list given as a parameter, using the function  
> pointer cmp to select the order to apply, and returns a pointer to the  
> first element of the sorted list.  
>   
> Duplications must remain.  
>   
> Inputs will always be consistent.  
>   
> You must use the type t\_list described in the file list.h  
> that is provided to you. You must include that file  
> (#include "list.h"), but you must not turn it in. We will use our own  
> to compile your assignment.  
>   
> Functions passed as cmp will always return a value different from  
> 0 if a and b are in the right order, 0 otherwise.  
>   
> For example, the following function used as cmp will sort the list  
> in ascending order:  
>   
> int ascending(int a, int b)  
> {  
> return (a <= b);  
> }  

💡

*   **Objetivo:** Escribe la función `sort_list` que ordena una lista enlazada en función de una función de comparación proporcionada.

*   **Parámetros:**
    
    *   `lst`: Un puntero al primer elemento de la lista enlazada.
    
    *   `cmp`: Un puntero a una función de comparación que toma dos enteros y devuelve un valor distinto de 0 si `a` es menor o igual que `b`, y 0 en caso contrario.

*   **Retorno:** La función debe devolver un puntero al primer elemento de la lista ordenada.

*   **Preservación de duplicados:** Los duplicados deben mantenerse en el orden original.

*   **Entrada coherente:** Se puede asumir que la entrada siempre es coherente.

*   **Archivo** `**list.h**`**:** Se debe utilizar la estructura `t_list` definida en el archivo `list.h` proporcionado.

    typedef struct s_list t_list;
    
    struct s_list
    {
    	int     data;
    	t_list  *next;
    };

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

1.  **Incluir bibliotecas**:
    
    *   `#include <stdlib.h>`: Incluye funciones estándar de C, como `malloc` y `free`.
    
    *   `#include "list.h"`: Incluye la definición de la estructura `t_list`.

2.  **Declaración de la función** `**sort_list**`:
    *   **Parámetros**:
        
        *   `t_list* lst`: Un puntero a la lista que se va a ordenar.
        
        *   `int (*cmp)(int, int)`: Un puntero a una función de comparación que toma dos enteros y devuelve un entero.

3.  **Declaración de variables**:
    
    *   `int swap;`: Variable temporal para intercambiar datos.
    
    *   `t_list *start;`: Puntero para almacenar el inicio de la lista.

4.  **Inicialización**:
    *   `start = lst;`: Guarda el puntero inicial de la lista en `start`.

5.  **Bucle** `**while**` **principal**:
    *   `while (lst != NULL && lst->next != NULL)`: Recorre la lista mientras haya al menos dos nodos.

6.  **Comparación de elementos**:
    *   `if ((*cmp)(lst->data, lst->next->data) == 0)`: Usa la función de comparación `cmp` para comparar los datos del nodo actual y el siguiente. Si la función devuelve 0, significa que los elementos están en el orden incorrecto.

7.  **Intercambio de elementos**:
    
    *   `swap = lst->data;`: Guarda el dato del nodo actual en `swap`.
    
    *   `lst->data = lst->next->data;`: Asigna el dato del siguiente nodo al nodo actual.
    
    *   `lst->next->data = swap;`: Asigna el dato guardado en `swap` al siguiente nodo.
    
    *   `lst = start;`: Reinicia el puntero `lst` al inicio de la lista para volver a verificar desde el principio.

8.  **Avanzar al siguiente nodo**:
    *   `else lst = lst->next;`: Si los elementos están en el orden correcto, avanza al siguiente nodo.

9.  **Retorno**:
    *   `return (start);`: Devuelve el puntero al inicio de la lista ordenada.

Resumen

Este código implementa una versión simple del algoritmo de ordenación de burbuja (bubble sort) para una lista enlazada. La función `sort_list` ordena la lista enlazada en orden ascendente utilizando una función de comparación proporcionada por el usuario. Recorre la lista comparando pares de nodos adyacentes e intercambiándolos si están en el orden incorrecto. Si se realiza un intercambio, el puntero `lst` se reinicia al inicio de la lista para volver a verificar desde el principio, asegurando que la lista esté completamente ordenada al final.

* * *
