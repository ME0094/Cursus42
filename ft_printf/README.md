# ft_printf

El proyecto `ft_printf` consiste en reimplementar la función `printf` de la biblioteca estándar de C.

El objetivo es comprender mejor el funcionamiento interno de esta función y mejorar nuestras habilidades en programación en C.

► [Explicación detallada en Notion.](https://www.notion.so/ft_printf-b23b71c3eb1c46ed9c80a06facde0b40)

### Características
- Soporte para múltiples especificadores de formato (`%d`, `%s`, `%x`, etc.).
- Manejo de diferentes tipos de datos (enteros, cadenas, hexadecimales, etc.).
- Implementación de funcionalidades adicionales y mejoras sobre el `printf` estándar.

### Uso
Para compilar y usar la biblioteca `ft_printf`, sigue estos pasos:

1. Clona el repositorio y navega al directorio `ft_printf`:
    ```bash
    git clone https://github.com/ME0094/Cursus42.git
    cd Cursus42/ft_printf
    ```

2. Compila la biblioteca:
    ```bash
    make
    ```

3. Incluye `ft_printf` en tu código:
    ```c
    #include "ft_printf.h"

    int main() {
        ft_printf("Hola, %s!\n", "mundo");
        return 0;
    }
    ```

4. Compila y ejecuta tu programa:
    ```bash
    gcc -o my_program my_program.c -L. -lftprintf
    ./my_program
    ```

### Especificadores de Formato Soportados
- `%d` - Entero decimal
- `%s` - Cadena de caracteres
- `%x` - Entero hexadecimal
- `%c` - Carácter
- `%p` - Puntero
- `%u` - Entero sin signo
- `%o` - Entero octal
- `%f` - Flotante

## Contribuciones
¡Las contribuciones son bienvenidas! Por favor, sigue estos pasos para contribuir:

1. Bifurca el repositorio.
2. Crea una nueva rama (`git checkout -b feature-branch`).
3. Confirma tus cambios (`git commit -m 'Add some feature'`).
4. Publica en la rama (`git push origin feature-branch`).
5. Crea una solicitud de incorporación de cambios.

### Licencia
Este proyecto está licenciado bajo la Licencia MIT.

### Contacto
Para cualquier consulta o información adicional, comunícate con:


◦ Email: martirod@student.42malaga.com

◦ Linkedin: https://www.linkedin.com/in/martin-eliseo/
