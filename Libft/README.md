# Libft
Reimplementación de algunas funciones de la librería estándar de C.

► [Explicación detallada en Notion.](https://www.notion.so/Libft-01f11c77315a4491b436ff3a9efe32fc)

## Características
- Incluye funciones de utilidad adicionales.
- Diseñado para mejorar la comprensión de la programación en C y las bibliotecas estándar.

## Prerrequisitos
- Git
- Clang
- Make

## Instalación
Para configurar el proyecto, sigue estos pasos:
1. Clona el repositorio:
    ```bash
    git clone https://github.com/ME0094/Cursus42.git
    cd Cursus42/Libft
    ```
2. Instala las herramientas necesarias:
    ```bash
    sudo apt-get update
    sudo apt-get install clang make -y
    ```

## Uso
Para usar el proyecto, sigue estos pasos:
1. Navega al directorio `Libft`:
    ```bash
    cd Cursus42/Libft
    ```
2. Compila la biblioteca:
    ```bash
    make
    ```
3. Incluye la biblioteca compilada en tus proyectos C:
    ```c
    #include "libft.h"
    ```

## Estructura del proyecto
La estructura del directorio del proyecto es la siguiente:
```
Libft/
├── src/
│   ├── ft_atoi.c
│   ├── ft_bzero.c
│   ├── ft_calloc.c
│   ├── ft_isalnum.c
│   ├── ft_isalpha.c
│   ├── ft_isascii.c
│   ├── ft_isdigit.c
│   ├── ft_isprint.c
│   ├── ft_itoa.c
│   ├── ft_memchr.c
│   ├── ft_memcmp.c
│   ├── ft_memcpy.c
│   ├── ft_memmove.c
│   ├── ft_memset.c
│   ├── ft_putchar_fd.c
│   ├── ft_putendl_fd.c
│   ├── ft_putnbr_fd.c
│   ├── ft_putstr_fd.c
│   ├── ft_split.c
│   ├── ft_strchr.c
│   ├── ft_strdup.c
│   ├── ft_striteri.c
│   ├── ft_strjoin.c
│   ├── ft_strlcat.c
│   ├── ft_strlcpy.c
│   ├── ft_strlen.c
│   ├── ft_strmapi.c
│   ├── ft_strncmp.c
│   ├── ft_strnstr.c
│   ├── ft_strrchr.c
│   ├── ft_strtrim.c
│   ├── ft_substr.c
│   ├── ft_tolower.c
│   ├── ft_toupper.c
│   └── ...
├── include/
│   └── libft.h
├── Makefile
├── README.md
└── ...
```

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
