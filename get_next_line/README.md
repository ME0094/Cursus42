# get_next_line

El proyecto `get_next_line` consiste en diseñar una función que lea y devuelva una línea de un file descriptor.

El objetivo es mejorar nuestras habilidades en la manipulación de archivos y la gestión de memoria en C.

► [Explicación detallada en Notion.](https://www.notion.so/get_next_line-4d494f9d9a974eb8b0c33857835ae12b)

## Características
- Soporte para múltiples file descriptors.
- Manejo eficiente de la memoria.
- Capacidad para leer líneas de cualquier longitud.

## Uso
Para compilar y usar la función `get_next_line`, sigue estos pasos:

1. Clona el repositorio y navega al directorio `get_next_line`:
    ```bash
    git clone https://github.com/ME0094/Cursus42.git
    cd Cursus42/get_next_line
    ```

2. Compila la biblioteca:
    ```bash
    make
    ```

3. Incluye `get_next_line` en tu código:
    ```c
    #include "get_next_line.h"

    int main() {
        int fd = open("archivo.txt", O_RDONLY);
        char *line;
        while ((line = get_next_line(fd)) != NULL) {
            printf("%s\n", line);
            free(line);
        }
        close(fd);
        return 0;
    }
    ```

4. Compila y ejecuta tu programa:
    ```bash
    gcc -o my_program my_program.c -L. -lget_next_line
    ./my_program
    ```

## Prototipo de la Función
```c
char *get_next_line(int fd);
```
- `fd`: El file descriptor del archivo a leer.
- Retorna: Una línea leída del archivo, o `NULL` si se ha alcanzado el final del archivo o si ocurre un error.

## Algoritmo
El algoritmo utilizado en `get_next_line` se basa en la lectura de bloques de datos del file descriptor y el almacenamiento en un buffer estático. Se implementan optimizaciones para minimizar el número de llamadas al sistema y gestionar eficientemente la memoria.

## Contribuciones
¡Las contribuciones son bienvenidas! Por favor, sigue estos pasos para contribuir:

1. Bifurca el repositorio.
2. Crea una nueva rama (`git checkout -b feature-branch`).
3. Confirma tus cambios (`git commit -m 'Add some feature'`).
4. Publica en la rama (`git push origin feature-branch`).
5. Crea una solicitud de incorporación de cambios.

## Licencia
Este proyecto está licenciado bajo la Licencia MIT.

## Contacto
Para cualquier consulta o información adicional, comunícate con:

- **LinkedIn:** [Martín Eliseo](https://www.linkedin.com/in/martin-eliseo/)
- **Email:** martirod@student.42malaga.com
